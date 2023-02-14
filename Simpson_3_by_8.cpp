#include<stdio.h>

#include<math.h>
float f(float x)
{
	return (1/(1+pow(x,2)));
}
int main()
{
	int i, n;
	float xo, xn, h, y[20], so, se, ans, x[20];
	printf("Enter the values of xo, xn, h:\n");
	scanf("%f%f%f",&xo,&xn,&h);
	n=(xn-xo)/h;
	if(n%2 == 1)
	{
		n=n+1;
	}
	h=(xn-xo)/n;
	printf("\nRefined value of n and h are: %d %f\n",n,h);
	printf("\nY values \n");
	for(i=0;i<=n;i++)
	{
		x[i]=xo + i*h;
		y[i]=f(x[i]);
		printf("\n%f\n",y[i]);
	}
	so=0;
	se=0;
	for(i=1;i<n;i++)
	{
		if(i%3 ==0)
		{
			so=so+y[i];
		}
		else
		{
			se =se+y[i];
		}
	}
	ans=3*h/8*(y[0]+y[n]+2*so+3*se);
	printf("\n Final integration is %f",ans);
	
}
