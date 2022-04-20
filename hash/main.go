package main

import (
	"fmt"
	"io"
	"log"
	"os"
)

func main() {
	fmt.Println("Calc Checksum")
	// file, err := os.Open("data/abc.txt")
	// if err != nil {
	// 	log.Fatal(err)
	// }
	// defer file.Close()

	// fileBytes, err := ioutil.ReadAll(file)
	// if err != nil {
	// 	log.Fatal(err)
	// }

	// sha256 := sha512.Sum512(fileBytes)

	// fmt.Printf("%x\n", sha256)
	// hash := sha512.New()

	// file, err := os.Open("data/abc.txt")
	// if err != nil {
	// 	log.Fatal(err)
	// }
	// defer file.Close()

	// if _, err := io.Copy(hash, file); err != nil {
	// 	log.Fatal(err)
	// }

	// file2, err := os.Open("data/acb.txt")
	// if err != nil {
	// 	log.Fatal(err)
	// }
	// defer file2.Close()

	// if _, err := io.Copy(hash, file2); err != nil {
	// 	log.Fatal(err)
	// }

	// fmt.Println(hash)
	// sum := hash.Sum(nil)

	// fmt.Printf("%x\n", sum)

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

	destination, err := os.Create("data/out.txt")
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
