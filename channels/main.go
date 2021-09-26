package main

import (
	"fmt"
	"sync"
)

func main() {
	fmt.Println("test channel")

	// The make() function, on the other hand, 
	// is a special built-in function that is used to 
	// initialize slices, maps, and channels. 
	// Note that make() can only be used to initialize slices,
	// maps, and channels, and that, unlike the new() function, make() does not return a pointer.

	wg := &sync.WaitGroup{}
	ch := make(chan int)

	wg.Add(2)
	//revice only channel
	go func(ch <-chan int, wg *sync.WaitGroup) {
		fmt.Println(<-ch)
		wg.Done()
	}(ch, wg)

	//send only channel 
	go func(ch chan<- int, wg *sync.WaitGroup) {
		ch <- 29
		wg.Done()
	}(ch,wg)
	
	wg.Wait()
}
