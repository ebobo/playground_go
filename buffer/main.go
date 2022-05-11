package main

import (
	"bytes"
	"encoding/binary"
	"fmt"
)

func main() {
	// buf := new(bytes.Buffer)
	buf := bytes.NewBuffer(make([]byte, 20))
	// var pi float64 = math.Pi

	err := binary.Write(buf, binary.LittleEndian, uint8(2))
	if err != nil {
		fmt.Println("binary.Write failed:", err)
	}
	fmt.Printf("% x\n", buf.Bytes())
}
