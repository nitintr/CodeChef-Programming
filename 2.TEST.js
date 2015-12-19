importPackage(java.io);
importPackage(java.lang);
S = new java.io.BufferedReader(new java.io.InputStreamReader(java.lang.System['in']));
while(true)
{
s = S.readLine();
if(s==42 || s==null) break;
print(s);
}

