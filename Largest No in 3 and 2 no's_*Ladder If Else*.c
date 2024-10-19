/*
    Program to Determine Largest Number of 3 numbers and 2 numbers
*/

#include<stdio.h>

int main()
{
    printf("Program to Determine Largest Number of 3 numbers and 2 numbers using *Ladder If Else*\n\n");
    
    printf("Finding Largest Number between three numbers : \n");
    
    int no1, no2, no3;
    printf("Enter the first number : ");
    scanf("%d", &no1);
    printf("Enter the second number : ");
    scanf("%d", &no2);
    printf("Enter the third number : ");
    scanf("%d", &no3);
    
    if(no1 > no2 && no1 > no2)
    {
        printf("First number %d is largest than other remaining", no1);
    }
    else if(no2 > no1 && no2 > no3)
    {
        printf("Second number %d is largest than other remaining", no2);
    }
    else
    {
        printf("Third number %d is largest than other remaining", no3);
    }
    
    printf("\n\n***********************************************");
    
    printf("\n\nFinding Largest Number between two numbers : \n");
    
    int n1, n2;
    printf("Enter the first number : ");
    scanf("%d", &n1);
    printf("Enter the second number : ");
    scanf("%d", &n2);
    
    if(n1 > n2)
    {
        printf("First number %d is largest than another", n1);
    }
    else
    {
        printf("Second number %d is largest than another", n2);
    }
    
    return 0;
}
