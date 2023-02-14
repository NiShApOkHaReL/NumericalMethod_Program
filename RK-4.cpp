#include<stdio.h>
#include<conio.h>
float fun(float x, float y)
{
	
	return x+y;
	
}
int main()
{
	float a,b,x,y,h,t,k1,k2,k3,k4;
	printf("Enter the value x0, y0, h, xn :");
	scanf("%f%f%f%f", &a, &b, &h, &t);
	x=a;
	y=b;
	printf("\n x\t y\n");
	while(x<t)
	{
		k1=h*fun(x,y);
		k2=h*fun(x+(h/2),y+(k1/2));
		k3=h*fun(x+(h/2),y+(k2/2));
		k4=h*fun(x+h,y+k3);
		y=y+(k1+(2*k2)+(2*k3)+k4)/6;
		x=x+h;
		printf("%.3f\t%.3f\n",x,y);
	}
}
