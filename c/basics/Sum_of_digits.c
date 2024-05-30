#include<stdio.h>

int sumofdig(int num)
{
    //Write your code here
    int sum=0,i;
    while(num>0)
    {
        int rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    return sum;
    
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=sumofdig(num);
    printf("%d",result);
    return 0;
}


