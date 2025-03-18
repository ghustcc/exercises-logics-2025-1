#include <stdio.h>
#include <string.h>

int main()
{
    printf("Hello, World!\n\n");

    int age = 19;
    double salary = 0;
    char gender = 'M';
    char name[50] = "Gustavo";

    printf("Age: %d", age);
    printf("\nSalary: %f", salary);
    printf("\nGender: %c", gender);
    printf("\nName: %s", name);
    return 0;
}