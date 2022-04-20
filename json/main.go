package main

import (
	"encoding/json"
	"fmt"
)

const (
	ellen = `{"age": 39, "address": "Ole tilseth veg 21c", "name": "ZhiXing", "gender": "Female"}`
)

type person struct {
	Age     int `json:"age,omitempty"`
	address string
	Name    string `json:"name,omitempty"`
	Gender  string `json:"gender,omitempty"`
}

func main() {
	qi := person{38, "Ole tilseth veg 21c", "Qi", "Male"}

	js, _ := json.Marshal(&qi)

	// only show filed which can be exported (with capital letter)
	fmt.Println("struct obj to json : ", string(js))

	//-------------------------------------------
	qiJson := `{
	   	"age": 38,
		"name": "Qi",
		"gender": "Male"
   }`

	personObj := person{}

	err := json.Unmarshal([]byte(qiJson), &personObj)

	if err != nil {
		fmt.Println(err)
	}

	fmt.Printf("json unmarshal : %v, %v  \n", personObj.Name, personObj.Age)

	person2 := person{}

	err = json.Unmarshal([]byte(ellen), &person2)

	if err != nil {
		fmt.Println(err)
	}

	fmt.Printf("json unmarshal : %s, %d, %s \n", person2.Name, person2.Age, person2.Gender)
}
