package main

import (
	"fmt"
	"reflect"
)

func main() {
	fmt.Println("Crypto")

	var nonce = getNonce()

	fmt.Println(reflect.TypeOf(nonce))
	fmt.Printf("%x \n", nonce)
}

func getNonce() [24]byte {
	var nonce [24]byte
	return nonce
}
