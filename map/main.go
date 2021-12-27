package main

import "fmt"


func main() {
	legoSets := map[int]string{
		10278: "Police Station",
		75192: "Millennium Falcon",
		10295: "Porsche 911",
	}

	set, ok := legoSets[10295]
	fmt.Println(set, ok)

	set, ok = legoSets[42115]
	fmt.Println(set, ok)

	fmt.Println(len(legoSets))

}

