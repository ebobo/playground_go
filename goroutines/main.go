package main

import (
	"fmt"
	"sync"
)

var string_array = map[string]string{"001":"Qi", "002":"Ellen","003":"PiPi", "004":"DouDou", "005":"BoBo", "006":"XingXing","007":"James", "008":"MaoMao" }
// var num_array = map[int]string{1:"Qi", 2:"Ellen",3:"PiPi", 4:"DouDou", 5:"BoBo", 6:"XingXing",7:"James", 8:"MaoMao" }


func test_goRouting() {
	wg := &sync.WaitGroup{}
	wg.Add(2)
	go func(waitgroup *sync.WaitGroup) {
		for i := range string_array {
			fmt.Printf("key is %s \n",  i,)
		}
		waitgroup.Done() 
	}(wg)

	go func(waitgroup *sync.WaitGroup) {
		for _, v := range string_array {
			fmt.Printf("value is %s \n",  v,)
		} 
		waitgroup.Done() 
	}(wg)

	wg.Wait()
}


// fully lock both write and read share memory
func test_goMutex() {
	wg := &sync.WaitGroup{}
	m := &sync.Mutex{}
	wg.Add(2)
	go func(waitgroup *sync.WaitGroup, m *sync.Mutex) {
		m.Lock()
		for i := range string_array {
			fmt.Printf("key is %s \n",  i,)
		}
		m.Unlock()
		waitgroup.Done() 
	}(wg, m)

	go func(waitgroup *sync.WaitGroup, m *sync.Mutex) {
		m.Lock()
	    string_array["009"] = "Walle"     
		string_array["010"] = "DiDi"   
		string_array["011"] = "MiMi"   
		string_array["012"] = "HeHe"
		m.Unlock()   
		for _, v := range string_array {
			fmt.Printf("value is %s \n",  v)
		}
		waitgroup.Done() 
	}(wg, m)

	wg.Wait()
}


// only fully lock when write to share memory
func test_goRwMutex() {
	wg := &sync.WaitGroup{}
	m := &sync.RWMutex{}
	wg.Add(2)
	go func(waitgroup *sync.WaitGroup, m *sync.RWMutex) {
		m.RLock()
		for i := range string_array {
			fmt.Printf("key is %s \n",  i,)
		}
		m.RUnlock()
		waitgroup.Done() 
	}(wg, m)

	go func(waitgroup *sync.WaitGroup, m *sync.RWMutex) {
		m.Lock()
	    string_array["009"] = "Walle"     
		string_array["010"] = "DiDi"   
		string_array["011"] = "MiMi"   
		string_array["012"] = "HeHe"
		m.Unlock()   
		for _, v := range string_array {
			fmt.Printf("value is %s \n",  v)
		}
		waitgroup.Done() 
	}(wg, m)

	wg.Wait()
}

func main() {
	
    // for i, v := range num_array {
	// 	fmt.Printf("key is %s,  value is %s \n", i, v )
	// } 

	// test_goRouting();
	// test_goMutex(); 
	test_goRwMutex()

}