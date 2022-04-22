package main

import (
	"encoding/binary"
	"fmt"
)

func main() {
	fmt.Println("byte array")

	src := make([]byte, 20)

	//version
	src[0] = 2

	//features
	src[4] = 0
	src[5] = 0
	src[6] = 0
	src[7] = 1
	src[8] = 1
	src[9] = 1

	//classes
	src[10] = 0
	src[11] = 0
	src[12] = 0
	src[13] = 50
	src[14] = 100
	src[15] = 250

	//data 2022/April/25th
	src[16] = 20
	src[17] = 22
	src[18] = 4
	src[19] = 25

	// strByte := []byte(4)
	// ascii code

	// fmt.Println(reflect.TypeOf(src))

	// fmt.Printf("%x, %d\n", src, len(src))

	// dst := make([]byte, hex.EncodedLen(20))
	// hex.Encode(dst, src)
	// fmt.Println(dst)

	int32ToBytes()

}

func int32ToBytes() {
	i := 56789

	fmt.Println(i)

	b := make([]byte, 4)
	binary.LittleEndian.PutUint32(b, uint32(i))

	fmt.Println(b)

}
