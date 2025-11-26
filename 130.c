// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf().
//  Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    FILE *file;
    struct Student students[10];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("\nEnter student records:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    file = fopen("students.txt", "w");

    if (file == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        fprintf(file, "%s %d %d\n", students[i].name,
                students[i].roll, students[i].marks);
    }

    fclose(file);
    printf("\nRecords saved to file successfully!\n");

    file = fopen("students.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n=== Reading Records from File ===\n");

    i = 0;
    while (fscanf(file, "%s %d %d", students[i].name,
                  &students[i].roll, &students[i].marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               students[i].name, students[i].roll, students[i].marks);
        i++;
    }

    fclose(file);

    return 0;
}
