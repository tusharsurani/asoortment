#include <stdio.h>
main()
{
    int n,i,pos,max,second_max;
    printf("enter the value of n =");
    scanf("%d",&n);
    
    int a[n];
    for(i=0;i<n;i++)
    {
      printf("a[%d] = ",i);
      scanf("%d",&a[i]);
    }
    max = second_max = a[0];
    
    for(i=0;i<n;i++)
    {
        if(max <= a[i])
        {
            max = a[i];
            pos = i;
        }
    }
    a[pos] = -1;
    
    for(i=0;i<n;i++)
    {
        if(second_max <= a[i])
            second_max = a[i];
    }
    printf("Largest no : %d\nSecond Largest no : %d",max,second_max);
}

