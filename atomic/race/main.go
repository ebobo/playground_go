package main

import (
	"fmt"
	"sync"
)

// use mutext , check "go run -race ."
func main() {
	var count int32
	wg := &sync.WaitGroup{}
	mu := &sync.Mutex{}

	wg.Add(4)
	// gorouting 1
	go func(w *sync.WaitGroup, m *sync.Mutex) {
		defer w.Done()
		m.Lock()
		count++
		m.Unlock()
	}(wg, mu)

	// gorouting 2
	go func(w *sync.WaitGroup, m *sync.Mutex) {
		defer w.Done()
		m.Lock()
		count = 100
		m.Unlock()
	}(wg, mu)

	// gorouting 3
	go func(w *sync.WaitGroup, m *sync.Mutex) {
		defer w.Done()
		m.Lock()
		count += 10
		m.Unlock()
	}(wg, mu)

	// gorouting 4
	go func(w *sync.WaitGroup, m *sync.Mutex) {
		defer w.Done()
		m.Lock()
		count--
		m.Unlock()
	}(wg, mu)

	wg.Wait()

	fmt.Println("count: ", count)
}
å