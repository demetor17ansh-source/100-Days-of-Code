// Q52: Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *

#include <stdio.h>

int main()
{
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
            printf("\t\n");
        else
        {
            for (int j = 0; j < i; j++)
                printf("*\n");
        }
    }
    for (int i = 4; i > 0; i--)
    {
        if (i % 2 == 0)
            printf("\t\n");
        else
        {
            for (int j = 0; j < i; j++)
                printf("*\n");
        }
    }

    return 0;
}
// #include <stdio.h>

// int main() {
//     void print_block(int k) {
//         for (int i = 0; i < k; ++i) {
//             puts("*");
//         }
//     }

//     print_block(1);
//     puts("");

//     print_block(3);
//     puts("");

//     print_block(5);
//     puts("");

//     print_block(3);
//     puts("");
//     print_block(1);

//     return 0;
// }
