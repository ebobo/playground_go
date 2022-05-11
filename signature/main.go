package main

import (
	"crypto/ed25519"
	"encoding/hex"
	"io/ioutil"
	"log"
	"os"
)

func main() {
	log.Println("Signature Go App")
	f, err := os.Open("privateKey")

	if err != nil {
		log.Println(err)
	}
	defer f.Close()

	privateKey, err := ioutil.ReadAll(f)
	if err != nil {
		log.Println(err)
		return
	}

	signaturePayload := []byte("Autronica")

	sign := ed25519.Sign(privateKey, signaturePayload[:])

	sign = append(sign, signaturePayload...)

	log.Printf("signature length: %d \nsignature: %v \n", len(sign), hex.EncodeToString(sign))
}
