#include<stdio.h>
#include<stdlib.h>

//typedef unsigned uint128_t __attribute__ ((mode (TI)));

//inline long factorial(int n) __attribute__((always_inline));
inline __uint128_t factorial(__uint128_t n) __attribute__((always_inline));

//long factorial(int n)
__uint128_t factorial(__uint128_t n)
{
    return (n==1) ? 1 :  n*factorial(n-1);
}

int main()
{
    int t,n=0;
    //unsigned long long int ans=0;
    __uint128_t ans=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ans = factorial(n);

        uint64_t low;
        low = (uint64_t)ans;
        uint64_t high;
        high = (ans >> 64);

        char buf[129];
        buf[0] = '\0';

        printf("Xlower is %llu\n",low);
        printf("Xhigher is %llu\n",high);
        sprintf(buf, "%llu", low);
        sprintf(buf+64, "%llu", high);
        printf("%s\n",buf);
        printf("ans %llu\n",ans);
    }
    return 0;
}
