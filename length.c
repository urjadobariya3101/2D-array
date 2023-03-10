#include<stdio.h>
int main()
{
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	
	int raw,col;
	
	raw = sizeof(a)/sizeof(a[0]);
	col = sizeof(a[0])/sizeof(a[0][0]);
	
	printf("raw : %d\n",raw); 
	printf("column : %d",col);
	
	return 0;
}
