/*
	Serve is a very simple static file server in go
	Usage:
	Navigating to http://localhost:8080/images will display the directory listing file.
*/
package main

import (
	"log"
	"net/http"
	"net/url"
)

func main() {

	server_url := "http://localhost:8080/images/"

	u, err := url.Parse(server_url)

	if err != nil {
		return
	}

	http.Handle(u.Path, http.StripPrefix(u.Path, http.FileServer(http.Dir("/home/qi/www/images"))))

	log.Fatal(http.ListenAndServe(":"+u.Port(), nil))
}
