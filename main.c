#include <stdio.h>
#include <stdbool.h>

int main() {
    // $)
   /*
    printf("I like Pizza\n");
    printf("It's really good!"); */
    int age = 25;
    float gpa = 2.5;
    double pi = 3.1415998765432112345;
    char grade = 'A';
    char name[] = "Danylo is clever";
    bool isOnline = true;
    /* описание ширины (сколько строчек занимает)*/
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    /*Arithmetic*/
    int x = 10;
    int y = 3;
    int z = 0;

    // z = x * y; 
    z = x % y;
    z+=3;

    printf("You are %d years old\n", age);
    printf("Your gpa is %.2f\n", gpa);
    printf("The value of pi is %.15lf\n", pi);
    printf("Your grade is %c\n", grade);
    printf("Hello %s\n", name);
    printf("%d\n", isOnline);
    /* описание ширины */
    printf("Width : %3d\n", num1);
    printf("Width : %3d\n", num2);
    printf("Width : %3d\n", num3);
    printf("Width : %-3d\n", num1);
    printf("Width : %03d\n", num1);
    printf("Width : %+d\n", num1);
    /*Arithmetic*/
    printf("%d\n", z);

    return 0; 
}