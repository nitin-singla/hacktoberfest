#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("Enter a number to check if it is a prime number :  \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
        flag++;
        }
    }
    if(flag == 2)
    {
    printf("%d is a prime number. \n",num);
    }
    else
    {
    printf("%d is not a prime number. \n",num);
    }
    return 0;
    
}

