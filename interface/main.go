package main

import (
	"fmt"
	"sync"
)

type Store interface {
	UserStore
	BuildingStore
}

// UserStore is the store interface for model.User
type UserStore interface {
	AddUser(userName string) error
	GetUser(userId int) (string, error)
	DeleteUser(userName string) error
}

// BuildingStore is the store interface for model.Building
type BuildingStore interface {
	// AddBuilding(buildingName string) error
	GetBuilding(buildingId int) (string, error)
	DeleteBuilding(buildingName string) error
}

type nintendoStore struct {
	mu               sync.RWMutex
	numberOfUser     int
	numberOfBuilding int
}

func (s *nintendoStore) AddUser(userName string) error {
	s.mu.Lock()
	defer s.mu.Unlock()
	fmt.Println("New user", userName)
	s.numberOfUser++
	return nil
}

func (s *nintendoStore) GetUser(userId int) (string, error) {
	s.mu.RLock()
	defer s.mu.RUnlock()
	fmt.Println("user ID", userId)
	return "user", nil
}

func (s *nintendoStore) DeleteUser(userName string) error {
	s.mu.Lock()
	defer s.mu.Unlock()
	fmt.Println("Delete user", userName)
	s.numberOfUser--
	return nil
}

func (s *nintendoStore) AddBuilding(buildingName string) error {
	s.mu.Lock()
	defer s.mu.Unlock()
	fmt.Println("New building", buildingName)
	s.numberOfBuilding++
	return nil
}

func (s *nintendoStore) GetBuilding(buildingId int) (string, error) {
	s.mu.RLock()
	defer s.mu.RUnlock()
	fmt.Println("user ID", buildingId)
	return "user", nil
}

func (s *nintendoStore) DeleteBuilding(buildingName string) error {
	s.mu.Lock()
	defer s.mu.Unlock()
	fmt.Println("Delete user", buildingName)
	s.numberOfBuilding--
	return nil
}

// Error on cannot use (nintendoStore literal) (value of type nintendoStore)
// as Store value in return statement:
// missing method AddUser (AddUser has pointer receiver)
// This error happens because the pointer to a type is its own unique type.
// In this example, *nintendoStore is a different type to nintendoStore.
// The method receiver AddUser is defined on the *nintendoStore type,
// not the nintendoStore type. So only *nintendoStore satisfies the interface Foo.

func getStore(brand string) Store {
	if brand == "nintendo" {
		return &nintendoStore{numberOfUser: 0, numberOfBuilding: 0}
	}
	return &nintendoStore{numberOfUser: 0, numberOfBuilding: 0}
}

func main() {
	fmt.Println("Hello Qi")
	s := getStore("nintendo")
	s.AddUser("Qi")
}
