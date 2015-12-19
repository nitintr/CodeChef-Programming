#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,k,counter=0;
    int *ptr;
    scanf("%d",&n);
    scanf("%d",&k);
    ptr = malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",ptr+i);
    while(n--){
        if((*(ptr+n))%k == 0)
            counter++;
    }
    printf("%d\n",counter);
    return 0;
}
