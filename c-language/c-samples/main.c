#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    int age;
    char name[30];
    int experience;
};

struct Family {
    struct Person person;
    char pets[2][30];
};

int main()
{
    /*
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
    */

    struct Person personPolice = {35, "Marco A.", 11};
    printf("%s is %d years old and has %d years of experience\n", personPolice.name, personPolice.age, personPolice.experience);

    struct Person personPolice2;
    personPolice2.age = 23;
    strcpy(personPolice2.name, "Shakito");
    personPolice2.experience = 4;
    printf("%s is %d years old and has %d years of experience\n", personPolice2.name, personPolice2.age, personPolice2.experience);

    struct Family family;
    strcpy(family.person.name, "Caro");
    family.person.age = 34;
    family.person.experience = 11;
    strcpy(family.pets[0], "Linda");
    strcpy(family.pets[1], "Pipa");
    printf("%s is %d years old and has %d years of experience - Pets: %s and %s\n", family.person.name, family.person.age, family.person.experience, family.pets[0], family.pets[1]);
   
   return 0;
}
