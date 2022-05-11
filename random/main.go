package main

import (
	"crypto/rand"
	"fmt"
)

func main() {
	rand, err := generateRandomBytes(32)
	var secret [32]byte
	copy(secret[:], rand)
	if err != nil {
		return
	}

	rand, err = generateRandomBytes(24)
	var nonce [24]byte
	copy(nonce[:], rand)
	if err != nil {
		return
	}

	rand, err = generateRandomBytes(8)
	if err != nil {
		return
	}

	// fmt.Println(reflect.TypeOf(nonce))
	fmt.Printf("%x \n", nonce)
	fmt.Println("--------------------------------")
	// fmt.Println(reflect.TypeOf(secret))
	fmt.Printf("%x \n", secret)
	fmt.Println("--------------------------------")

	concat := append(nonce[:], secret[:]...)

	concat2 := append(concat[:], rand...)

	fmt.Println()
	fmt.Printf("%x \n", concat)
	fmt.Printf("%x \n", concat2)
}

func generateRandomBytes(length int) ([]byte, error) {
	key := make([]byte, length)
	_, err := rand.Read(key)
	if err != nil {
		return key, err
	}
	return key, nil
}
