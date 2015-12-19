#include<stdio.h>
int main()
{
    int t,c;
    long long int n,x,r;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        r=5;
        scanf("%lld",&n);
        x=n/r;
        //printf("x is <%lld>\n",x);
        while(x)
        {
            c+=x;
            //printf("c is <%lld>\n",c);
            r=r*5;
            //printf("r is <%lld>\n",r);
            x=n/r;  
            //printf("x is <%lld>\n",x);
        }
        printf("%d\n",c);
    }
    return 0;
} 
