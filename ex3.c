//22MIC0096
#include<stdio.h>
int lcm(int,int);
int main()
{
    int n1,n2,i,gcd;
    printf("Enter 1st number:");
    scanf("%d",&n1);
    printf("Enter 2nd number:");
    scanf("%d",&n2);
    gcd=(n1*n2)/lcm(n1,n2);
    printf("%d",gcd);
    return 0;
}

int lcm(int a, int b)
{
    if(b==1)
        return 1;
    else if (b==2)
        return 2;
    else if (b==3)
        return 3;
    else if (b==5)
    return 5;
    else if (b==7)

        return 7;
    else
        return lcm(b,a/b);
}

