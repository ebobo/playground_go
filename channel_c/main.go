package main

import (
	"fmt"
	"sync"

	"github.com/ebobo/utilities_go/greeting"
)

func main() {
	greeting.Foreword("Learn Go channel")

	wg := sync.WaitGroup{}
	ch := make(chan string)

	wg.Add(2)
	go func(ch <-chan string) {
		msg := <-ch
		fmt.Printf("get message from channel %s", msg)
		wg.Done()
	}(ch)

	go func(ch chan<- string) {
		ch <- "hello"
		fmt.Printf("send message to channel %s \n", "hello")
		wg.Done()
	}(ch)

	wg.Wait()
}
