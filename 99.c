//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

void getMonthName(int month, char *monthName) {
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    if(month >= 1 && month <= 12) 
        strcpy(monthName, months[month - 1]);

}

int main() {
    char date[15], day[3], month[3], year[5];
    char monthName[10];
    int i, j;
    
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);
    
    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';
    
    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';
    
    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';
    
    int monthNum = atoi(month);
    getMonthName(monthNum, monthName);
    
    printf("%s-%s-%s\n", day, monthName, year);
    
    return 0;
}
