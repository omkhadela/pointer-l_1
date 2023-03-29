#include<stdio.h>
main()

{
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n],i,*ptr;
	
	ptr=&a;
	
	for(i=0;i<n;i++)
	{
		printf("Enter elements : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\nThe square of all  elements is : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",(*(ptr+i)*(a[i])));
	}
	
}
