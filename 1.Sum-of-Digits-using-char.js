importPackage(java.io);
importPackage(java.lang);
var S = new java.io.BufferedReader(new java.io.InputStreamReader(java.lang.System['in']));
var t = S.readLine();
while(t>0)
{
    var ans = 0;
    var n = S.readLine();
    for(i=0;i<n.length();i++)
    {
        ans += (n.charCodeAt(i) - "0".charCodeAt(0));
    }
    print(ans);
    t = t - 1;
}

