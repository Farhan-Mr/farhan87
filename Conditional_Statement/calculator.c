/* WAP to make a simple calculator */

#include<stdio.h>
int  main (){

    int a,b;
    printf("Enter 1st number - ");
    scanf("%d",&a);
    printf("Enter 2nd number - ");
    scanf("%d",&b);

    int num;

    
    printf("\nMenu-\n\nPress 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division ");
    printf("\n\nselect one number from 1 to 4  : ");
    scanf("%d",&num);
    switch (num)
    {
        case 1: printf("Addition is %d",a+b);        
                break;
        case 2: printf("Subtraction is %d",a-b);        
                break;
        case 3: printf("Multiplication is %d",a*b);        
                break;
        case 4: printf("Division is %d",a/b);        
                break;
                                         
        default: printf("Select number from 1 to 4");
        break;
    }


   return 0;
}