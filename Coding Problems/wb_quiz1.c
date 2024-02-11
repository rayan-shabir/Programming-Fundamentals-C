#include <stdio.h>
#include <stdlib.h>

// Task _ 01

// int main() {
//     int val = 0;

//     printf("\nEnter Value:: ");
// 	scanf("%d",&val);

//     for(int i = 1; i <= val; i++) {
//         for (int j = 1; j <= val; j++)
//         {
//             if (i == 1 || i == val || j == 1 || j == val) 
//                 printf("#");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// OUTPUT
/*
#########
#       #
#       #
#       #
#########
*/


// Task _ 02

int main() {


    for(int i = 1; i <= 5; i++) 
    {
        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("R ");
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT
//     R
//    R R
//   R R R
//  R R R R
// R R R R R
