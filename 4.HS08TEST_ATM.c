#include<stdio.h>
int main()
{
    int x;
    float y;
    scanf("%d",&x);
    scanf("%f",&y);
    if(x%5 == 0 && x+0.5f <= y) 
    {
        printf("%.2f\n",y - (x+0.5f));
    }
    else
    {
        printf("%.2f\n",y);
    }
    return 0;
}
