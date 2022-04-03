package main

import (
	"fmt"
	"sync"
	"sync/atomic"
)

// use mutext , check "go run -race ."
func main() {
	var count int32
	wg := &sync.WaitGroup{}

	wg.Add(4)
	// gorouting 1
	go func(w *sync.WaitGroup) {
		defer w.Done()
		//count++
		atomic.AddInt32(&count, 1)
	}(wg)

	// gorouting 2
	go func(w *sync.WaitGroup) {
		defer w.Done()
		//count = 100
		atomic.StoreInt32(&count, 100)
	}(wg)

	// gorouting 3
	go func(w *sync.WaitGroup) {
		defer w.Done()
		//count += 10
		atomic.AddInt32(&count, 10)
	}(wg)

	// gorouting 4
	go func(w *sync.WaitGroup) {
		defer w.Done()
		//count--
		atomic.AddInt32(&count, -1)
	}(wg)

	wg.Wait()

	fmt.Println("count: ", count)
}
