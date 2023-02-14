#include<stdio.h>

#include<math.h>
float f(float x)
{
	return (1/(1+pow(x,2)));
}
int main()
{
	int i, n;
	float xo,sum=0, xn, h, y[20],ans, x[20];
	printf("Enter the values of xo, xn, h:\n");
	scanf("%f%f%f",&xo,&xn,&h);
	n=(xn-xo)/h;
	if(n%2 != 0)
	{
		n=n+1;
	}
	h=(xn-xo)/n;
	printf("\nRefined value of n and h are: %d, %f\n",n,h);
	printf("\nY values \n");
	for(i=0;i<=n;i++)
	{
		x[i]=xo + i*h;
		y[i]=f(x[i]);
		printf("\n%f\n",y[i]);
	}
	
	for(i=1;i<n;i++)
	{
		 sum=sum+ y[i];
	}
	ans=h/2*(y[0]+y[n]+2*sum);
	printf("\n Final integration is %f",ans);
	
}
