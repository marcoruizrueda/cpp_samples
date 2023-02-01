#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Multidimensional array
    int nums [3][2] = {
                    {1, 2},
                    {3, 4},
                    {5, 6},
                    };

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d", nums[i][j]);
        }
        printf("\n");
    }


    // Memmory addresses
    int age = 35;
    double gpa = 19.5;
    char grade = 'A';

    printf("%p", &age);

    return 0;
}
