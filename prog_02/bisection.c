//WAP in C language to find the root of the Algebric and the transeendental equation using bisection method.
#include <stdio.h>
#include<math.h>
float f(float x){
    return (x*x*x - 5*x + 1);
}
int main()
{
    float x,x1,x2,aerr;
    int flag = 0,itr=0;
    
    do{
        printf("\nEnter the value of x1 and x2 : ");
        scanf("%f %f",&x1,&x2);
        
        if( f(x1)*f(x2) < 0){
            flag = 1;
            printf("\nThe roots between %f and %f ",x1,x2);
        }
        else{
            printf("\nWrong intervals, Try again ");
        }
    }while(flag != 1);
    
    printf("\nEnter The allowed aerror : ");
    scanf("%f",&aerr);
    
    do{
        itr++;
        x=(x1 + x2)/2;
        printf("\n%d Iteration, value of x is %f, value of(%f) is %f",itr,x,x,f(x));
        
        if((fabs(f(x))) <= aerr)
        {
            flag=0;
            printf("\n The root of the equation is %f after %d Iteration",x,itr);
        }
        else if(f(x)*f(x1)< 0)
        {
            x2=x;
        }
        else{
            x1=x;
        }
    }while(flag != 0);
    return 0;
}
