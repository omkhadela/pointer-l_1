#include<stdio.h>
main()
{
	int o,m;
	printf("Enter the value of o : ");
	scanf("%d",&o);
	printf("Enter the value of m : ");
	scanf("%d",&m);
   
    int *ptr,*ptr2;
	
	ptr=&o;
	ptr2=&m;
	
	printf("===============================\n");
	o=o+m;
	m=o-m;
	o=o-m;
	
	printf("After swapping o is :%d\n",*ptr);
	printf("After swapping m is :%d",*ptr2);
}
