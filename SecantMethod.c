//write a program to find the root on non-linear equation using Secant method
#include<stdio.h>
#include<math.h>
#define MAX 20
#define E 0.0001
#define f(x) (exp(x)-x-2)
int main()
{
    int count=1;
    float x1,x2,x3,f1,f2;
    printf("Enter two initial guess value: ");
    scanf("%f%f",&x1,&x2);
    begin:
        f1=f(x1),f2=f(x2);
        x3=x2-f2*(x2-x1)/(f2-f1);
        if(fabs((x3-x2)/x3)<E){
            printf("\nThe root is %f",x3);
            printf("\n No of iteration is %d",count);
        }
        else
        {
            x1=x2;
            f1=f2;
            x2=x3;
            count++;
            if(count<MAX)
                goto begin;
            else
                printf("The process doesnt converge\n");
        }
        return 0;
}
