package main

import (
	"fmt"
	"reflect"
)

func main() {

	// a := []int{1, 2, 3, 4, 5}
	// fmt.Println("a:", a)

	// // real copy slice
	// b := make([]int, len(a))
	// copy(b, a)
	// b[1] = 100
	// fmt.Println("b:", b)

	// // from index 1 and behind (include index 1)
	// c := a[1:]
	// fmt.Println("c:", c)

	// // from begining to index 2 (but not include index 2)
	// d := a[:2]
	// fmt.Println("d:", d)

	// // from index 2 to index 4 (but not include index 4)
	// e := a[2:4]
	// fmt.Println("e:", e)

	// // from index 2 to index 4 (but not include index 4)
	// f := a[:0]
	// fmt.Println("f:", f)

	x := []int{1, 2, 3, 4, 5, 6, 7, 8}
	g := x[7:]
	fmt.Println(reflect.TypeOf(g))
	fmt.Println("g:", g)
}
