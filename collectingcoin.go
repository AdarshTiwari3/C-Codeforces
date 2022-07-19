package main
import( 
    "fmt"
    "math"
    )
func main(){
    var t int
    fmt.Scan(&t)
    for t>0{
        var a,b,c,n float64
        fmt.Scan(&a,&b,&c,&n)
        var s float64=a+b+c+n
        if math.Mod(s,3)==0 && s/3>= math.Max(a,math.Max(b,c)){
            fmt.Println("YES")
            
        }else {
            fmt.Println("NO")
        }
        t--
    }
}