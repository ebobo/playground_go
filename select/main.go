package main

import (
	"fmt"
	"sync"
)


var cars = []string{"Honda", "Toyota","Volvo","BMW","Audi"}
var euro_cars = []string{"Volkswagen","BMW","Audi","Citroen","Peugeot"}

func main() {
	fmt.Println("------Select-------")

	ch1 := make(chan string)
    ch2 := make(chan string)

	wg := &sync.WaitGroup{}

	wg.Add(2)
    go func (ch chan string, w *sync.WaitGroup)  {
		for _, car := range cars {
			ch <- car
		} 
		// decrese wait group count by 1
		wg.Done()
	}(ch1, wg)

	go func (ch chan string, w *sync.WaitGroup)  {
		for _, car := range euro_cars {
			ch <- car
		} 
		wg.Done()
	}(ch2, wg)

	for i := 0; i<10; i++{ 
	select {
	case c := <- ch1:
		fmt.Println("ch1", c)
		
	case c := <- ch2:
		fmt.Println("ch2",c)
	}
}
	wg.Wait()

}