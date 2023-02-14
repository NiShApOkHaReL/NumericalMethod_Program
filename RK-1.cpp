#include<stdio.h>
#include<conio.h>
float fun(float x, float y)
{

	return (x+y);
	 
}
int main()
{
	float a,b,x,y,h,t,k;
	printf("Enter the value x0, y0, h, xn :");
	scanf("%f%f%f%f", &a, &b, &h, &t);
	x=a;
	y=b;
	printf("\n x\t y\n");
	while(x<t)
	{
		k=h*fun(x,y);
		y=y+k;
		x=x+h;
		printf("%.3f\t%.3f\n",x,y);
	}
}
