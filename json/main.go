package main

import (
	"encoding/json"
	"fmt"
)


type person struct {
	Age int `json:"age,omitempty"`
	address string 
	Name string `json:"name,omitempty"`
	Gender string `json:"gender,omitempty"`
}

func main() {
   qi := person{38,"Ole tilseth veg","Qi", "Male"}

   json, _ := json.Marshal(&qi)

	// only show filed which can be exported (with capital letter)
   fmt.Println(string(json))
}