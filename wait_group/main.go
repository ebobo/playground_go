package main

import (
	"fmt"
	"sync"
	"time"
)

func main() {
	var wg = sync.WaitGroup{}

	fmt.Println("Hello Qi")
	wg.Add(1)
	go func() {
		fmt.Println("Go routine 1")
		time.Sleep(time.Second * 5)
		wg.Done()
	}()
	wg.Wait()
	fmt.Println("Goodbye Qi")
}
