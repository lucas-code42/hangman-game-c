package main

import "fmt"

func main() {
	x := []int{10, 2, 30}
	for i := 0; i < len(x); i++ {
		fmt.Println(i)
	}
}