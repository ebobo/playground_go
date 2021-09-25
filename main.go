package main

import (
	"fmt"
)

func main() {
	a := []int{2}
	a = append(a, 2, 4, 5)

	a := "ok"
	fmt.Println(a, len(a), cap(a))
}
