package main
import "fmt"
func main(){
	var age int
	fmt.Print("Enter the age: ")
	fmt.Scan(&age)
	if age>=18{
		fmt.Println("Ah! You can drive")
	} else if age<18 && age>12{
		fmt.Printf("You have to wait %d years",18-age)
	} else if age<=12 && age>5{
		fmt.Println("You are kid, you can't ride")

	} else {
		fmt.Println("cant ride")
	}

}