// package main

// import (
// 	"fmt"
// )

// func main() {
// 	a := []int{2}
// 	a = append(a, 2,4,5)
// 	fmt.Println(a, len(a), cap(a));
// }

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
<<<<<<< HEAD
 fmt.Println("Hello World")


  balence = 1000

  var wg sync.WaitGroup
  wg.Add(2)

  // start a goroutine 
  go withdraw(700, &wg)
  go deposit(500, &wg)

  wg.Wait()

  fmt.Printf("New Balence %d\n", balence)
}
