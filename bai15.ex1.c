#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
main()
{
	int i;
	for(i=1;i<=10;i++);
	printf("\nSquare of %d is %d",i,square(i));
}
squarer(int x)
{
	int j;
	j=x*x;
	return(j);
}
