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
		err := sub()
		if err != nil {
			fmt.Println(err)
		}
		fmt.Println("Go routine 1 done")
		wg.Done()
	}()

	wg.Wait()

	time.Sleep(time.Second * 5)
	fmt.Println("Goodbye Qi")
}

func sub() error {
	fmt.Println("Go routine 1")
	go func() {
		fmt.Println("Go routine 1-1")
		time.Sleep(time.Second * 3)
		fmt.Println("Go routine 1-1 done")
	}()
	return nil
}
