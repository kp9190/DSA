#include<stdio.h>

void main()
{
	int num=10;
	int *ptr;
	
	clrscr();
	printf("num : %d", num);//10
	printf("\nnum : %u", &num);//address
	printf("\nptr : %d",*ptr); // value
	
	ptr =&num;
	
	printf("\nptr : %d",ptr); // pass the value address
	printf("\nptr : %u",&ptr); // address
	printf("\nptr : %u",*ptr); // value
	printf("\nptr : %d",*ptr); // value
	
	
	
getch();

// return 0;
}
