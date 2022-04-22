package main

import (
	"crypto/sha512"
	"fmt"
	"io/ioutil"
	"log"
	"os"
	"path"
	"path/filepath"
	"sort"
)

func main() {
	fmt.Println("Calc Checksum")
	// file, err := os.Open("data/abc.txt")
	// if err != nil {
	// 	log.Fatal(err)
	// }
	// defer file.Close()

	// fileBytes, err := ioutil.ReadAll(file)
	// if err != nil {
	// 	log.Fatal(err)
	// }

	// sha256 := sha512.Sum512(fileBytes)
	// fmt.Printf("%x\n", sha256)

	//---------------------------------------------
	// hash := sha512.New()

	// file, err := os.Open("data/abc.txt")
	// if err != nil {
	// 	log.Fatal(err)
	// }
	// defer file.Close()

	// if _, err := io.Copy(hash, file); err != nil {
	// 	log.Fatal(err)
	// }

	// file2, err := os.Open("data/acb.txt")
	// if err != nil {
	// 	log.Fatal(err)
	// }
	// defer file2.Close()

	// if _, err := io.Copy(hash, file2); err != nil {
	// 	log.Fatal(err)
	// }

	// fmt.Println(hash)
	// sum := hash.Sum(nil)

	// fmt.Printf("%x\n", sum)

	//--------------------------------------------------

	// hash := sha512.New()

	// file, err := os.Open("data/abc.txt")
	// if err != nil {
	// 	log.Fatal(err)
	// }
	// defer file.Close()

	// file2, err := os.Open("data/acb.txt")
	// if err != nil {
	// 	log.Fatal(err)
	// }
	// defer file2.Close()

	// fileBytes, err := ioutil.ReadAll(file)
	// if err != nil {
	// 	log.Fatal(err)
	// }

	// fileBytes2, err := ioutil.ReadAll(file2)

	// if err != nil {
	// 	log.Fatal(err)
	// }

	// hash.Write(fileBytes)
	// hash.Write(fileBytes2)

	// sum := hash.Sum(nil)

	// fmt.Printf("%x\n", sum)

	//---------------------------------------------
	hash := sha512.New()
	files, err := ioutil.ReadDir("data/")
	SortFileNameAscend(files)

	if err != nil {
		log.Fatal(err)
	}

	for _, f := range files {

		ext := path.Ext(f.Name())
		if ext != ".c" {
			log.Println("not c file")
			continue
		}

		path := filepath.Join("data", f.Name())

		fmt.Printf("%s\n", path)

		file, err := os.Open(filepath.Join(path))
		if err != nil {
			log.Println(err)
			continue
		}
		defer file.Close()
		fileBytes, err := ioutil.ReadAll(file)
		if err != nil {
			log.Println(err)
			continue
		}
		hash.Write(fileBytes)
	}

	sum := hash.Sum(nil)

	fmt.Printf("%x\n", sum)

}

func SortFileNameAscend(files []os.FileInfo) {
	sort.Slice(files, func(i, j int) bool {
		return files[i].Name() < files[j].Name()
	})
}

func SortFileNameDescend(files []os.FileInfo) {
	sort.Slice(files, func(i, j int) bool {
		return files[i].Name() > files[j].Name()
	})
}

// func sortFolder(path string) {
// 	files, err := ioutil.ReadDir("/data/")
// 	if err != nil {
// 		log.Fatal(err)
// 	}

// 	for _, f := range files {
// 		file, err := os.Open(f.Name())
// 		if err != nil {
// 			log.Println(err)
// 			continue
// 		}
// 		defer file.Close()
// 		fileBytes, err := ioutil.ReadAll(file)
// 		if err != nil {
// 			log.Fatal(err)
// 		}
// 		hash.Write(fileBytes)
// 	}

// 	sum := hash.Sum(nil)

// 	fmt.Printf("%x\n", sum)

// }
