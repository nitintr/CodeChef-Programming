int main()
{
    int t=0,i=0,ans=0,count=0; 
    char a0 = '0';
    char n[7];
    scanf("%d",&t);
    while(t--){
        ans=0;
        scanf("%s",n);
        count = strlen(n);
        for(i=0;i<count;i++){
            ans+= (n[i] - a0);
        }
        printf("%d\n",ans);
    }
    return 0;
}
