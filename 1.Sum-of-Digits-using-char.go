package main 
import (
"fmt"
"strings"
"strconv"
)

func main(){
    var t int;
    var ans int;
    var n string;
    fmt.Scanf("%d",&t);
    for(t>0) {
        fmt.Scanf("%s",&n);
        var list = strings.Split(n,"");
        var i=0;
        ans = 0;
        for(i<len(list)){
            w, err := strconv.Atoi(list[i]);
            j, err := strconv.Atoi("0");
            ans += w + j;
            i++;
            //fmt.Println(err);
            _ = err;
        }
        fmt.Println(ans)
        t = t - 1;
     }
}
