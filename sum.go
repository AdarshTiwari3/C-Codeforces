package main
import "fmt"
func main(){
	var a,b,t int
	fmt.Scanln(&t)
	for t>0 {
	//fmt.Printf("Enter two number:")
	fmt.Scanln(&a,&b)
	fmt.Println(a*b)
	t--;
	}
}