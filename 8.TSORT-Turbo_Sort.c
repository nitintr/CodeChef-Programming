#include<stdio.h>
#include<stdlib.h>

int compareAscSort (const void * a, const void * b)
{
      return ( *(int*)a - *(int*)b );
}

int compareDescSort (const void * a, const void * b)
{
      return ( *(int*)b - *(int*)a );
}

int main()
{
    int t,i=0;
    int *ptr;
    scanf("%d",&t);
    ptr = (int *) malloc (t*sizeof(int));
    for(i=0;i<t;i++)
        scanf("%d",ptr+i);
    qsort(ptr, t, sizeof(int), compareAscSort);
    for(i=0;i<t;i++)
        printf("%d\n",*(ptr+i));
    return 0;
}
