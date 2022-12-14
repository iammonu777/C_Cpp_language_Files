#include<stdio.h>
main()
{
	int r;
	float ans;
	float PI = 3.14;
	
	printf("enter radius of circle :");
	scanf("%d ,&r");
	
	ans = PI * r *r;
	
	printf("\n area of circle : %f = ",ans);
}
