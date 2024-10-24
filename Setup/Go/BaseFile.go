package main

import "fmt"

func main() {
	fmt.Println("Hello, World!")

	var num1 int = 10
	var num2 int = 5
	

	sum := num1 + num2 
	fmt.Println("Addition:", sum)

	// Subtraction
	difference := num1 - num2
	fmt.Println("Subtraction:", difference)
 
	// Multiplication
	product := num1 * num2
	fmt.Println("Multiplication:", product)

	if num2 != 0 {
		quotient := num1 / num2
		fmt.Println("Division:", quotient)
	} else {
		fmt.Println("Error: Cannot Divide by Zero")
	}

	// Modulus (remainder)
    remainder := num1 % num2
    fmt.Println("Modulus:", remainder)
}