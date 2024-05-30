#include<stdio.h>

int fun(int num)
{
    //Write your code here
    int rem,max;
    max=0;
    while(num>0){
        rem=num%10;
        num=num/10;
        if(rem>max){
            max=rem;
        }
    }
    return max;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=fun(num);
    printf("%d",result);
    return 0;
}

