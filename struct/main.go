package main

import (
	"fmt"
)

type UserManagementService struct {
	user_list map[int]string
}

func newUserManagementService() *UserManagementService {
	s := UserManagementService{user_list: make(map[int]string)}
	return &s
}

func (service *UserManagementService) CreateUser(id int, name string) {
	if _, ok := service.user_list[id]; !ok {
		service.user_list[id] = name
	}
}

func (service *UserManagementService) PrintAllUser() {
	fmt.Println(service.user_list)
}

func main() {
	fmt.Println("Hello Qi")

	service := newUserManagementService()

	service.CreateUser(1, "Qi Xu")
	service.CreateUser(2, "Zhi Xing")

	service.PrintAllUser()
}
