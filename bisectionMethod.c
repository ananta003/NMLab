//write a program to find the root on non-linear equation using bisection method
#include<stdio.h>
#include<math.h>
#define MAX 20
#define E 0.00001
#define f(x) (x*x-4*x-10)
int main(){
    int count=0;
    float x1,x2,x0;
    printf("Enter value of x1 and x2:");
    scanf("%f%f",&x1,&x2);
    if(f(x1)*f(x2)>0)
        printf("The values doesnt bracket root.Change guess value\n");

    else
    {
        begin:
        x0=(x1+x2)/2;
        if(fabs(f(x0))<E){
            printf("The root is %f\n",x0);
            printf("No of iteration is %d \n",count);
        }
        else{
            if(f(x0)>0){
                 x2=x0;
                count++;
            }
            else if(f(x0)<0){
                x1=x0;
                count++;
            }
            if(count<MAX)
                goto begin;

            else{
                printf("The process doenst coverage");
            }
        }
    }
    return 0;
}
