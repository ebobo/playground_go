package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	f, err := os.Create("files/data.lic")

	if err != nil {
		log.Fatal(err)
	}

	defer f.Close()

	data := []byte("hello qi")

	_, err2 := f.Write(data)

	if err2 != nil {
		log.Fatal(err2)
	}

	fmt.Println("done")

	// system_name := "system1"
	// panel_name := "panel1"
	// file_name := "data.txt"
	// filePath := path.Join("temp", system_name, panel_name, file_name)

	// fmt.Println(filePath)

}
