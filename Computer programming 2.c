#include <stdio.h> 
int main()
{
    float marks1, marks2, marks3, marks4, marks5, average;

    printf("Enter marks obtained in subject 1 :");
    scanf("%f", &marks1);
    printf("Enter marks obtained in subject 2 :");
    scanf("%f", &marks2);
    printf("Enter marks obtained in subject 3 :");
    scanf("%f", &marks3);
    printf("Enter marks obtained in subject 4 :");
    scanf("%f", &marks4);
    printf("Enter marks obtained in subject 5 :");
    scanf("%f", &marks5);


    average = (marks1 + marks2 + marks3 + marks4 + marks5) / 5;
    printf("Average : %0.2f\n", average);
     /*the average of Grade 3 is 60-69*/
    if (average >= 69)
    {
        printf("3");
    }
    else if (average >= 60)
    {
        printf("3");
    }
    else if (average >= 61)
    {
        printf("3");
    }
    else if (average >= 62)
    {
        printf("3");
    }
    else if (average >= 63)
        printf("3");


    return 0;
}