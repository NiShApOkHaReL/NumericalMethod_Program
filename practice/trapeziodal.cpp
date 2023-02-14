#include<stdio.h>
#include<math.h>
float f(float x)
{
	return (1/(1+pow(x,2)));
}
int main()
{
	float a,b,h,x[20],y[20],sum=0,ans;
	int i,n;
	printf("Enter the initial value, final value and interval:");
	scanf("%f%f%f",&a,&b,&h);
	n=(b-a)/h;
	if(n%2!=0.0)
	{
		n=n+1;
	}
	h=(b-a)/n;
	printf("refined values of h and n are %f ,%f\n",h,n);
	for(i=0;i<=n;i++)
	{
		x[i]=a+h*i;
		y[i]=f(x[i]);
		printf("y=%f\n",y[i]);
	}
	for(i=1;i<n;i++)
	{
		sum+=y[i];
	}
	ans=h/2*(y[0]+y[n]+2*sum);
	printf("Final answer is %f",ans);
}
