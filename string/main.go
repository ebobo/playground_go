package main

import (
	"fmt"
	"path"
	"strings"
)

func main() {
	dwg_name := "Autronica.HQ-Floor1.dwg"
	// filePath := "../converter/dwg_files/Autronica-HQ-Floor2/output/_MULTI_WIRE.svg"

	// ext := path.Ext(filePath)
	// name := strings.Replace(path.Base(filePath), ext, "", 1)

	// fileType := strings.Replace(ext, ".", "", 1)

	// fmt.Println(dwg_name+"-"+name, fileType)
	getNameAndType(dwg_name)

	bz2_name := "AC_4_75_AM422TestLeft.tar.bz2"

	getNameAndType2(bz2_name)
	getNameAndType2(dwg_name)

}

func getNameAndType(fileName string) {
	ext := path.Ext(fileName)
	name := strings.Replace(path.Base(fileName), ext, "", 1)
	// fileType := strings.Replace(ext, ".", "", 1)
	fmt.Println(name, ext)
}

func getNameAndType2(fileName string) {
	if strings.Contains(fileName, ".tar.bz2") {
		name := strings.Replace(path.Base(fileName), ".tar.bz2", "", 1)
		fmt.Println("match", name)
	} else {
		fmt.Println("not match", fileName)
	}

}
