package main

import (
	"bufio"
	"fmt"
	"os"
    "strconv"
)
func main(){
	 in:= bufio.NewScanner(os.Stdin)
	//fmt.Print("Enter something: ")
	fmt.Printf("Enter your DOB: ") 
	in.Scan()
	 input ,_:= strconv.ParseInt(in.Text(), 10 , 64) 
	//always takes input as a string for others we have to use strconv.ParseInt...
    fmt.Printf("You are %d year old in 2021: ", 2021-input)
}