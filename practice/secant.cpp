#include<stdio.h>
#include<math.h>
float f(float x)
{
	return x*x-4*x-10;
}
int main()
{
	int itr=1,maxitr;
	float x1,x2,x3,e;
	printf("x1=");
	scanf("%f",&x1);
	printf("x2=");
	scanf("%f",&x2);
	printf("Enter the error: ");
	scanf("%f",&e);
	printf("Enter the max.itter");
	scanf("%f",&maxitr);
	printf("\nSteps\tx1\tx2\tf(x1)\tf(x2)\tx3\tf(x3)\n");
	do{
		x3=(f(x2)*x1-f(x1)*x2)/(f(x2)-f(x1));
		printf("%d\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n",itr,x1,x2,f(x1),f(x2),x3,f(x3));
		x1=x2;
		x2=x3;
		itr++;
		
	}while((fabs(f(x3)))>=e&&itr<=maxitr);
	printf("Required root=%f",x3);
}
