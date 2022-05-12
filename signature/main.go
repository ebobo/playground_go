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

	// get private key
	prif, err := os.Open("privateKey")

	if err != nil {
		log.Println(err)
	}
	defer prif.Close()

	privateKey, err := ioutil.ReadAll(prif)
	if err != nil {
		log.Println(err)
		return
	}

	// get public key
	pubf, err := os.Open("publicKey")

	if err != nil {
		log.Println(err)
	}
	defer pubf.Close()

	publicKey, err := ioutil.ReadAll(pubf)
	if err != nil {
		log.Println(err)
		return
	}

	// signaturePayload
	signaturePayload := []byte("Autronica")

	// sign the payload
	sign := ed25519.Sign(privateKey, signaturePayload[:])

	// verify the signature with publicKey, signaturePayload, sign
	if !ed25519.Verify(publicKey, signaturePayload[:], sign) {
		log.Println("can not verify")
		return
	} else {
		log.Println("signature verified")
	}

	signPlusPayload := append(sign, signaturePayload...)

	log.Printf("signature length: %d \nsignature: %v \n", len(signPlusPayload), hex.EncodeToString(signPlusPayload))

}
