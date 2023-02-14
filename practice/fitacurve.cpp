#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float x[30],y[30],Y[30],sumx2=0,sumx=0,sumxy=0,sumy=0,a,b,A;
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
		Y[i]+=log(y[i]);
	}
	for(i=0;i<n;i++)
	{
		sumx2+=x[i]*x[i];
		sumx+=x[i];
		sumxy+=x[i]*Y[i];
		sumy+=Y[i];
		
	}
	
	A=((sumx2*sumy-sumx*sumxy)*1.0)/((n*sumx2-sumx*sumx)*1.0);
	b=((n*sumxy-sumx*sumy)*1.0)/((n*sumx2-sumx*sumx)*1.0);
	a=exp(A);
	printf("the required eqn is y=%fe^%fx",a,b);
	return 0;
	
	
}
