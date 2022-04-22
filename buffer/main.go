package main

import (
	"bytes"
	"fmt"
)

func main() {

	var buf bytes.Buffer

	buf.WriteRune(1234)

	bytes := buf.Bytes()
	fmt.Println(bytes, len(bytes))
}
