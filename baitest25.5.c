#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	int a,b,sum;
	printf("\nNhap a =");
	scanf("%d",&a);
	printf("\nNhap b =");
	scanf("%d",&b);
	printf("\nSo a vua nhap la %d",a);
	printf("\nSo b vua nhap la %d",b);
	printf("\n Tong la %d",a,b,sum);
}
sum(int a,int b)
{
	int sum;
	sum =a+b;
	return(sum);
}


