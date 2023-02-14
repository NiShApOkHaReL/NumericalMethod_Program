#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f(float x)
{
	return x*x*x-4*x-9;
}
int main()
{
	float x1,x2,e,x3;
	int n,itr=1;
	printf("Enter the values of x1 and x2:");
	scanf("%f%f",&x1,&x2);
	printf("Error:");
	scanf("%f",&e);
	printf("MaxIter:");
	scanf("%d",&n);
	do{
		x3=(x1+x2)/2;
		printf("\nx1=%f\tx2=%f\tf(x1)=%f\tf(x2)=%f\tx3=%f\tf(x3)=%f\n",x1,x2,f(x1),f(x2),x3,f(x3));
		if((f(x1)*f(x2))<0)
		{
			if(f(x3)==0.0)
			{
				break;
			}
			else if(f(x1)*f(x3)<0)
			{
				x2=x3;
			}
			else{
				x1=x3;
			}
		}else
		{
			printf("\nroot does not lies between x1 and x2");
			exit(0);
		}
		itr++;
	}while((x2-x1)>=e&&itr<=n);
	printf("The root is %f",x3);
}
