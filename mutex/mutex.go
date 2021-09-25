package main

import (
	"fmt"
	"sync"
)

var ( 
	mutex sync.Mutex
	balence int 
)

func deposit(value int, wg *sync.WaitGroup){
    mutex.Lock()
	fmt.Printf("Depositing %d to account with balance %d\n", value, balence)
    balence += value
	mutex.Unlock()
	wg.Done()
}

func withdraw(value int, wg *sync.WaitGroup){
	mutex.Lock()
	fmt.Printf("Withdawing %d from account with balance %d\n", value, balence)
    balence -= value
	mutex.Unlock()
	wg.Done()
}


func main() {
  	fmt.Println("Mutex example")

  	balence = 1000

  	var wg sync.WaitGroup
  	wg.Add(2)

  	// start a goroutine 
  	go withdraw(700, &wg)
  	go deposit(500, &wg)

  	wg.Wait()

  	fmt.Printf("New Balence %d\n", balence)
}