#include<stdio.h>
float f(float x,float y)
{
	return x+y;
}
int main()
{
	float a,b,h,xn,x,y,k1,k2,k3,k4;
	printf("Enter the value of x0,y0,h,xn:");
	scanf("%f%f%f%f",&a,&b,&h,&xn);
	x=a;
	y=b;
	printf("\nx\ty\n");
	while(x<xn)
	{
		k1=h*f(x,y);
		k2=h*f(x+(h/2),y+(k1/2));
		k3=h*f(x+(h/2),y+(k2/2));
		k4=h*f(x+h,y+k3);
		x=x+h;
		y=y+(k1+2*k2+2* k3+k4)/6;
		printf("\n%f\t%f",x,y);
	}
}
