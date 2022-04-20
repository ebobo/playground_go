package main

import (
	"archive/tar"
	"bytes"
	"compress/bzip2"
	"fmt"
	"io"
	"io/ioutil"
	"log"
	"os"
	"path/filepath"
)

func main() {
	var file *os.File
	var err error

	if file, err = os.Open("multi.tar.bz2"); err != nil {
		log.Fatalln(err)
	}
	defer file.Close()

	reader := tar.NewReader(bzip2.NewReader(file))

	var header *tar.Header
	for {
		header, err = reader.Next()
		if err == io.EOF {
			break
		}
		if err != nil {
			log.Fatalln(err)
		}

		path := filepath.Join("output/", header.Name)
		info := header.FileInfo()

		if info.IsDir() {
			if err = os.MkdirAll(path, info.Mode()); err != nil {
				fmt.Println(err)
			}
			continue
		}

		buf := new(bytes.Buffer)
		if _, err = io.Copy(buf, reader); err != nil {
			log.Fatalln(err)
		}

		if err = ioutil.WriteFile(path, buf.Bytes(), info.Mode()); err != nil {
			log.Fatal(err)
		}
	}
}
