package main

import (
	"fmt"
	"io"
	"log"
	"os"
)

func main() {
	fmt.Println("Copy files in to one")

	source, err := os.Open("data/abc.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer source.Close()

	source2, err := os.Open("data/acb.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer source2.Close()

	source3, err := os.Open("data/123.c")
	if err != nil {
		log.Fatal(err)
	}
	defer source3.Close()

	destination, err := os.Create("out.txt")
	if err != nil {
		log.Fatal(err)

	}
	defer destination.Close()

	_, err = io.Copy(destination, source)

	if err != nil {
		log.Fatal(err)

	}
	_, err = io.Copy(destination, source2)
	if err != nil {
		log.Fatal(err)

	}
	_, err = io.Copy(destination, source3)
	if err != nil {
		log.Fatal(err)
	}

}
