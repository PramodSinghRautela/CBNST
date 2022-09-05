#include<stdio.h>
#include<math.h>
float f(float x){
	return (x*x*x - 5*x + 1);
}
int main(){
	float x,x1,x2,allo_err;
	
	int flag=0,itr=0;
	
	
	do{
		printf("\n Enter the value of x1 and x2");
		scanf("%f %f",&x1,&x2);
		
		if(f(x1)*f(x2)<0){
			flag=1;
			printf("\n The roots lies between %f and %f",x1,x2);
		}
		else{
			printf("\n Wrong intervals,Try again");
		}
	}while(flag!=1);
	printf("\n enter the allowed error");
	scanf("%f",&allo_err);
	
	do{
		itr++;
		x=(x1*x2)/2;
		printf("\n %d iteration, value of x is %f ,value of (%f) is %f",itr,x,x,f(x));
		if((fabs(f(x)))<=allo_err){
			flag=0;
			printf("\n The root of the equation is %f after %d iteration",x,itr);
		}
		else if(f(x)*f(x1)<0)
		{
			x2=x;
		}
		else{
			x1=x;
		}

	}while(flag!=0);
	
	
	return 0;
}
