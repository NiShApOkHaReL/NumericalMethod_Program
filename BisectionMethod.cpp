//Program for Bisection Method in C
#include<stdio.h>

//function used is x^3-4x- 9
double func(double x)
{
    return x*x*x - 4*x - 9;
}

double e=0.001;
double c;

void bisection(double a,double b)
{
    if(func(a) * func(b) >= 0)
    {
        printf("Incorrect a and b");
        return;
    }

    c = a;

    while ((b-a) >= e)
    {
    	    	

        c = (a+b)/2;
        if (func(c) == 0.0){
        	
                printf("xa=%.3lf\txb=%.3lf\tfa=%.3lf\tfb=%.3lf\txc=%.3lf\tfc=%.3lf\n",a,b,func(a),func(b),c,func(c));
            break;
        }
        else if (func(c)*func(a) < 0){
        	
                printf("xa=%.3lf\txb=%.3lf\tfa=%.3lf\tfb=%.3lf\txc=%.3lf\tfc=%.3lf\n",a,b,func(a),func(b),c,func(c));

                b = c;
        }
        else{
           
                printf("xa=%.3lf\txb=%.3lf\tfa=%.3lf\tfb=%.3lf\txc=%.3lf\tfc=%.3lf\n",a,b,func(a),func(b),c,func(c));

                a = c;
        }
    }
}

int main()
{
    double a,b;
    a=2;
    b=3;

    printf("The function used is x^3-4x-9\n");
    printf("a = %lf\n",a);
    printf("b = %lf\n",b);
    bisection(a,b);
    printf("\n");
    
    printf("Accurate Root calculated is = %lf\n",c);

    return 0;
}


