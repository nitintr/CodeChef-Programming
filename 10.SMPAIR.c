#include<stdio.h>
#include<string.h>


int main()
{
    int t=0,counter=0,i=0,count=0,x=0;
    char n[10];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        counter=100;
        scanf(" %127[^\n]",n);
        count = strlen(n);
        for(i=0;i<count-1;i=i+2){
            counter = ((n[i] + n[i+2] - 96) < counter )?(n[i] + n[i+2] - 96):counter;
            //printf("%d %d\n",n[i], n[i+1]);
        }
        printf("%d\n",counter);
    }
    return 0;
}
