package main

import (
	"fmt"
)

func condition() {	
	for i := 0; i < 5; i++ {
		fmt.Println(i)
	}
}

func infinite() {	
	i := 0
	for {
		i++
		if i == 5{
			break;
		}
		fmt.Println(i)
	}
}

func collections() {
	slice := []int{23,24,25,26,27}
	for i, v := range slice {
		fmt.Printf("index %d  value is %d \n", i, v )
	}
	fmt.Println("--------------")
	myMap := map[int]string{1:"first", 2:"second", 3:"third"}
	for i, v := range myMap {
		fmt.Printf("index %d  value is %s \n", i, v )
	}
}

func main() {
	// condition();
	// infinite();
	collections();
}
