#include<stdio.h>
#include<string.h>


int main()
{
    int t=0,counter=0,i=0,count=0;
    char n[10];
    scanf("%d",&t);
    while(t--){
        counter=0;
        scanf("%s",n);
        count = strlen(n);
        for(i=0;i<count;i++){
            if(n[i] == '4')
                counter++;
        }
        printf("%d\n",counter);
    }
    return 0;
}
