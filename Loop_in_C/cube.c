#include<stdio.h>
int main (){

int i, n; 
printf("Enter no. ");
scanf("%d",&n);

for( i=1 ; i<=n ; i++ )
{
    printf("%d ",i*i*i);
}


    return 0;
}