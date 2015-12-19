#include<stdio.h>
int main()
{
    int t=0;
    long a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%lu",&a);
        scanf("%lu",&b);
        printf("%lu\n",a+b);
    }
    return 0;
}
