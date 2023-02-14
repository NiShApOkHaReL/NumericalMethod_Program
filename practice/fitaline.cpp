#include<stdio.h>
int main()
{
	
	int i,n;
	float x[30],y[30],sumx2=0,sumx=0,sumxy=0,sumy=0,a,b;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("Enter %d terms for x",n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("Enter %d terms for y",n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		sumx2+=x[i]*x[i];
		sumx+=x[i];
		sumxy+=x[i]*y[i];
		sumy+=y[i];
		
	}
	a=(sumx2*sumy-sumx*sumxy)/(n*sumx2-sumx*sumx);
	b=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
	printf("the required eqn is y=%f+%fx",a,b);
	
	
	
}
