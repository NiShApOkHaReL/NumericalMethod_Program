#include<stdio.h>
float f(float x, float y)
{
	return x+y;
}
int main()
{
	float a,b,h,xn,x,y,k;
	printf("ENter the value of x0,y0,h,xn");
	scanf("%f%f%f%f",&a,&b,&h,&xn);
	x=a;
	y=b;
	printf("\nx\ty\n");
	while(x<xn)
	{
		k=h*f(x,y);
		y=y+k;
		x=x+h;
		printf("%f\t%f\n",x,y);
	}
	
}
