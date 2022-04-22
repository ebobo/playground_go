package main

import (
	"crypto/rand"
	"fmt"
	"log"
)

func main() {
	key := make([]byte, 24)

	_, err := rand.Read(key)
	if err != nil {
		// handle error here
		log.Println(err)
	}

	fmt.Println(key)
	fmt.Printf("%x \n", key)
}
