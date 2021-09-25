package main

import (
	"fmt"
)

func condition() {
	i := 0
	for i < 5 {
		fmt.Println(i)
		i++
	}
}

func main() {
	condition()
}
