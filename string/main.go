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
}

func getNameAndType(fileName string) {
	ext := path.Ext(fileName)
	name := strings.Replace(path.Base(fileName), ext, "", 1)
	// fileType := strings.Replace(ext, ".", "", 1)
	fmt.Println(name, ext)
}
