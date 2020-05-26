#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float adder(int a,int b);
main()
	{
	 float a, b, c;
	 a = b = c = 0;
	 printf("\nEnter 1st integer: ");
	 scanf("%f", &a);
	 printf("\nEnter 2nd integer: ");
	 scanf("%f", &b);
	 c = adder(a, b);
	 printf("\n\na & b in main() are: %.1f, %.1f", a, b);
	 printf("\n\nc in main() is: %.1f", c);
	 /* c gives the addition of a and b */
	}
	float adder(int a,int b)
	{
	 float c;
	 c = a + b;
	 a *= a;
	 b += 5;
	 printf("\n\na & b within adder function are: %.1f, %.1f ", a, b);
	 printf("\nc within adder function is : %.1f",c);
	return(c);
	}
