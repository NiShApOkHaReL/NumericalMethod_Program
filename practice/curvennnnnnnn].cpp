#include<stdio.h>
#include<math.h>
int main()
{
	
	int n,i;
	float sumxy=0,sumx=0,sumy=0,sumx2=0,x[30],y[30],Y[30],A,a,b;
	printf("Number of terms?");
	scanf("%d",&n);
	printf("enter the values of x:");
	for(i=0;i<n;i++)
	
	
	{
		scanf("%f",&x[i]);
	}
		printf("enter the values of y:");
	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}
		for(i=0;i<n;i++)
	{
		Y[i]=log(y[i]);
	}
	for(i=0;i<n;i++)
	{
		sumx2+=x[i]*x[i];
		sumy+=Y[i];
		sumxy+=x[i]*Y[i];
		sumx+=x[i];
		
	}
	A=(sumx2*sumy-sumx*sumxy)/(n*sumx2-sumx*sumx);
	b=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
	a=exp(A);

	printf("The required eqn is y=%fe^%fx",a,b);
	
	
}
