package main

type Number interface {
    int64 | float64
}

func main() {
   sum(2,1)  
}


func sum(i NuNumber, j NUNumber) Number {
	return i+j
}