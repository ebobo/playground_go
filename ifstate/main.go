package main

import "fmt"

type User struct {
	ID int
	FirstName string
	LastName string
}

func newUser(id int, fisrtName string, lastName string) *User {
	u := User {
		ID: id,
		FirstName: fisrtName,
		LastName: lastName,
	}
	return &u
}


// can not use := in global scope

var u1 User = User {
	ID: 1,
	FirstName: "Qi",
	LastName:"Xu",
}

var u2 = newUser(2,"ZhiXing", "Wu")

func main(){
	
	fmt.Println("Hello")

	if u1.ID == u2.ID {
		fmt.Println("same Id")
	} else {
		fmt.Println("different ID")
	}

 
	// A statement can precede conditionals; 
	// any variables declared in this statement are available in all branches.
	// 在条件前可以先声明变量
	if num := u1.ID; num > 0 {
		fmt.Println("valid user id")
	}

}