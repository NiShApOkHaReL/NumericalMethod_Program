#include<stdio.h>
#include<math.h>
float f(float x){
	return x*x-4*x-10;
}

int main()
{
	int itr=1,maxstep;
	float x1,x2,e,c;
	printf("x1=");
	scanf("%f",&x1);
	printf("x2=");
	scanf("%f",&x2);
	printf("Error:");
	scanf("%f",&e);
	printf("Maximum steps");
	scanf("%d",&maxstep);
	
			
		if(f(x1)*f(x2)>0)
		{
			printf("Values of a and b are incorrect or root does not lie between those points");
			return;
		}
		c=x1;
		while((x2-x1>=e)&& itr<=maxstep){
			c=(x1+x2)/2;
			if(f(c)==0)
			{
				printf("x1=%.4f\tx2=%.4f\tf(x1)=%.4f\tf(x2)=%.4f\tc=%.4f\tf(c)=%.3f",x1,x2,f(x1),f(x2),c,f(c));
				break;
			}
			else if(f(c)*f(x1)<0)
			{
			printf("x1=%.4f\tx2=%.4f\tf(x1)=%.4f\tf(x2)=%.4f\tc=%.4f\tf(c)=%.3f",x1,x2,f(x1),f(x2),c,f(c));
				x2=c;
				
			}
			else{
			printf("x1=%.4f\tx2=%.4f\tf(x1)=%.4f\tf(x2)=%.4f\tc=%.4f\tf(c)=%.3f",x1,x2,f(x1),f(x2),c,f(c));
			x1=c;
			}
		}
	
}
