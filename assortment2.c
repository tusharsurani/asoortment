#include<stdio.h>

main()
{
	int a[100],i,largest,second_largest,n;
	printf("enter a value = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);	
	}
    printf("\nsecond largest number in arry : ");
    for(i=0;i<n;i++)
    {
    	if(largest<a[i])
    	{
    		second_largest=largest;
    		largest=a[i];
    	}
    	else if(second_largest<a[i])
    	{
    		second_largest=a[i];
		}
	}
	printf("%d",second_largest);
}
