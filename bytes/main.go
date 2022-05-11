package main

import (
	"bytes"
	"crypto/rand"
	"encoding/binary"
	"fmt"
	"reflect"
)

func main() {

	str := "343647193632373121003F00"

	fmt.Println(len(str))
	dis := 32 - len(str)
	if dis < 0 {
		return
	}
	for i := 0; i < dis; i++ {
		str = str + string("A")
	}
	fmt.Println(str)

	var strBytes [32]byte
	copy(strBytes[:], []byte(str))

	fmt.Println(strBytes)
	fmt.Printf("%x, %d\n", strBytes, len(strBytes))
}

func main2() {
	fmt.Println("byte array")

	b := bytes.NewBuffer(make([]byte, 20))

	src := b.Bytes()
	// 4 bytes for version, insert version
	version := 2
	binary.LittleEndian.PutUint32(src, uint32(version))

	// 6 bytes for features, insert feature
	// selfVerify := 1
	// // coverDetection := 1
	// // analogValue := 1

	// from index 4 and behind (include index 4)
	//little endian means in the beggining part is the smaller part of number
	binary.LittleEndian.PutUint32(src[4:], uint32(1234))
	binary.LittleEndian.PutUint32(src[10:], uint32(5678))

	//PutUvarint encodes a uint64 into buf and returns the number of bytes written. If the buffer is too small, PutUvarint will panic.
	binary.PutUvarint(src[16:], 20)
	binary.PutUvarint(src[17:], 22)
	binary.PutUvarint(src[18:], 3)
	binary.PutUvarint(src[19:], 4)

	// fmt.Println(src, num)

	fmt.Printf("%x, %d\n", src, len(src))

	//version

	// //features
	// src[4] = 0
	// src[5] = 0
	// src[6] = 0
	// src[7] = 1
	// src[8] = 1
	// src[9] = 1

	// //classes
	// src[10] = 0
	// src[11] = 0
	// src[12] = 0
	// src[13] = 50
	// src[14] = 100
	// src[15] = 250

	// //data 2022/April/25th
	// src[16] = 20
	// src[17] = 22
	// src[18] = 4
	// src[19] = 25

	// strByte := []byte(4)
	// ascii code

	fmt.Println(reflect.TypeOf(src))

	// fmt.Printf("%x, %d\n", src, len(src))

	// dst := make([]byte, hex.EncodedLen(20))
	// hex.Encode(dst, src)
	// fmt.Println(dst)

	// int32ToBytes()

}

// func int32ToBytes() {
// 	i := 56789

// 	fmt.Println(i)

// 	b := make([]byte, 4)
// 	binary.LittleEndian.PutUint32(b, uint32(i))

// 	fmt.Println(b)

// }

// func intToBytes(i uint16) []byte {
// 	buf := new(bytes.Buffer)
// 	_ = binary.Write(buf, binary.LittleEndian, i)
// 	return buf.Bytes()
// }

func generateRandomBytes(length int) ([]byte, error) {
	key := make([]byte, length)
	_, err := rand.Read(key)
	if err != nil {
		return key, err
	}
	return key, nil
}
