#include<stdio.h>
int main()
{
	int n,i;
	float sumx=0, sumy=0, sumxy=0, sumx2=0, x[10], y[10];
	printf("Enter the number of data in array:-");
	scanf("%d",&n);
	
	printf("Enter the array of x:");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
		printf("Enter the array of y:");
	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		sumx=sumx+x[i];
		sumy=sumy+y[i];
		sumxy=sumxy+x[i]*y[i];
		sumx2=sumx2+x[i]*x[i];
	}
	float a=((sumy*sumx2)-(sumx*sumxy))/((n*sumx2)-(sumx*sumx));
	float b=((n*sumxy)-(sumx*sumy))/((n*sumx2)-(sumx*sumx));
	
	printf("The required equation is y=%.3f+%.3fx",a,b);
}
