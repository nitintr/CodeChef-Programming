def func():
    t=int(input(""))
    while t > 0:
        n=input("")
        ans=0
        for x in n: ans+=( ord(x) - ord('0') );
        print(ans)
        t=t-1
func()
