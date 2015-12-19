#include<stdio.h>
int main()
{
    long n,k,val,counter;
    scanf("%lu",&n);
    scanf("%lu",&k);
    while(n--){
        scanf("%lu",&val);
        if(val%k == 0)
            counter++;
    }
    printf("%lu\n",counter);
    return 0;
}
