#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x*x-3*x+2;
}
float df (float x)
{
    return 3*x*x-3;
}
int main()
{
    int itr=1, maxmitr;
    float h, x0, x1, allerr;
    printf("\nEnter x0(initial value), allowed error and maximum iterations\n");
    scanf("%f %f %d", &x0, &allerr, &maxmitr);
    
        h=f(x0)/df(x0);
        x1=x0-h;
        printf(" At Iteration no. %3d, x = %9.6f\n", itr, x1);
//        printf("Iteration=%d\tx0=%f\tf(x0)=%f\tf'(x0)=%f\tx=%f\n",itr,x0,f(x0),df(x0),x1);
        do 
        {
            printf("After %3d iterations, root = %8.6f\n", itr, x1);
//            printf("Iteration=%d\tx0=%f\tf(x0)=%f\tf'(x0)=%f\tx=%f\n",itr,x0,f(x0),df(x0),x1);
		x0=x1;
			return 0;
        }while(fabs(h) > allerr && itr<=maxmitr);
        
    
    printf(" The required solution does not converge or iterations are insufficient\n");
    return 1;
//    
//    do{
//    	 h=f(x0)/df(x0);
//        x1=x0-h;
//        printf("Iteration=%d\tx0=%f\tf(x0)=%f\tf'(x0)=%f\tx=%f\n",itr,x0,f(x0),df(x0),x1);
//        x0=x1;
//        itr++;
//        printf("Root is=%f",x1);
//
//	}while(fabs(h) < allerr  && itr<=maxmitr);
	 
}
