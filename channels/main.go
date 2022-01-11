package main

import (
	"fmt"
	"time"
)

// func main() {
// 	fmt.Println("test channel")

// 	// The make() function, on the other hand,
// 	// is a special built-in function that is used to
// 	// initialize slices, maps, and channels.
// 	// Note that make() can only be used to initialize slices,
// 	// maps, and channels, and that, unlike the new() function, make() does not return a pointer.

// 	wg := &sync.WaitGroup{}

// 	// make a int channel
// 	ch := make(chan int)

// 	wg.Add(1)
// 	//revice only channel
// 	go func(ch <-chan int, wg *sync.WaitGroup) {
// 		fmt.Println(<-ch)
// 		wg.Done()
// 	}(ch, wg)

// 	//send only channel
// 	go func(ch chan<- int, wg *sync.WaitGroup) {
// 		ch <- 29
// 		wg.Done()
// 	}(ch, wg)

// 	wg.Wait()
// }

func main() {
	start := time.Now()

	jobs := make(chan int, 50)
	results := make(chan [2]int, 50)

	go worker(jobs, results, 1)
	go worker(jobs, results, 2)
	go worker(jobs, results, 3)
	go worker(jobs, results, 4)
	go worker(jobs, results, 5)
	go worker(jobs, results, 6)
	go worker(jobs, results, 7)
	go worker(jobs, results, 8)
	go worker(jobs, results, 9)
	go worker(jobs, results, 10)

	for i := 0; i < 50; i++ {
		jobs <- i
	}

	close(jobs)

	for j := 0; j < 50; j++ {
		result := <-results
		fmt.Println(result[0], result[1])
	}
	elapsed := time.Since(start)
	fmt.Printf("app took %s", elapsed)

	fmt.Println(" --- Done")
}

func worker(jobs <-chan int, results chan<- [2]int, workerid int) {
	// pull number from jobs and call fib to get result

	for n := range jobs {
		results <- [2]int{workerid, fib(n)}
	}
}

func fib(n int) int {
	if n <= 1 {
		return n
	}
	return fib(n-1) + fib(n-2)
}
