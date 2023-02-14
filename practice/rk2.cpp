#include<stdio.h>
float f(float x,float y)
{
	return x+y;
}
int main()
{
	float a,b,h,xn,x,y,k1,k2;
	printf("Enter the value of x0,y0,h,xn:");
	scanf("%f%f%f%f",&a,&b,&h,&xn);
	x=a;
	y=b;
	printf("\nx\ty\n");
	while(x<xn)
	{
		k1=h*f(x,y);
		k2=h*f(x+h,y+k1);
		x=x+h;
		y=y+(k1+k2)/2;
		printf("\n%f\t%f",x,y);
	}
}
