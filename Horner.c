//Write a program to evaluate polynomial using Horner's method
#include<stdio.h>
#define p(x) (a[3]*x*x*x+a[2]*x*x+a[1]*x+a[0])
int main()
{
    int n,i;
    float x,a[10],b[10];
    printf("Enter the degree of polynomial:");
    scanf("%d",&n);
    printf("Enter the coefficient of dividend polynomial:\n");
    for(i=n;i>=0;i--)
        scanf("%f",&a[i]);

    printf("Enter the value at which polynomial to be evaluated:\n");
    scanf("%f",&x);
    b[n]=a[n];
    while(n>0){
        b[n-1]=a[n-1]+b[n]*x;
        n--;
    }
    printf("Value of polynomial at p(%f)=%f",x,b[0]);
    return 0;
}
