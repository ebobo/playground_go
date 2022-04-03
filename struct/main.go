package main

import (
	"fmt"
)

type UserManagementService struct {
	serverId  int32
	user_list map[int]string
}

func newUserManagementService() *UserManagementService {
	s := UserManagementService{serverId: 1, user_list: make(map[int]string)}
	return &s
}

func (service *UserManagementService) CreateUser(id int, name string) {
	if _, ok := service.user_list[id]; !ok {
		service.user_list[id] = name
	}
}

func (service *UserManagementService) PrintAllUser() {
	for i, v := range service.user_list {
		fmt.Printf("id: %d  name: %s \n", i, v)
	}
}

func (service UserManagementService) PrintServerID() {
	fmt.Println(service.serverId)
}

func main() {
	fmt.Println("Hello Qi")

	service := newUserManagementService()

	service.CreateUser(1, "Qi Xu")
	service.CreateUser(2, "Zhi Xing")

	service.PrintServerID()
	service.PrintAllUser()
}
