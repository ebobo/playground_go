package main

import "fmt"

func main() {

	a := []int{1, 2, 3, 4, 5}

	// copy slice
	b := make([]int, len(a))
	copy(b, a)

	c := a[1:]
	b[1] = 100

	fmt.Println(a)
	fmt.Println(b)
	fmt.Println(c)
}
