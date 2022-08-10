//write a program to find the root on non-linear equation using Fixed point method
#include<stdio.h>
#include<math.h>
#define MAX 20
#define E 0.0001
#define g(x) (exp(x)-2)  //exp(x)-x-2=0,x=exp(x)-2
int main()
{
    int count=1;
    float x0,x1,error;
    printf("Enter initial guess value:");
    scanf("%f",&x0);
    begin:
        x1=g(x0),error=x1-x0;
        if(fabs(error)<E){
            printf("\nThe root is %f",x1);
            printf("\n No. of iteration is %d",count);
        }
        else
        {
            x0=x1;
            count++;
            if(count<MAX)
                goto begin;
            else
                printf("\nThe process doesnt converge");
        }
        return 0;

}
