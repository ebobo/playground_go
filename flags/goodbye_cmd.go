package main

import "fmt"

type goodbyeCmd struct {
	Name string `short:"n" long:"name" description:"Your name, for say goodbye" default:"Unknown"`
}

// Execute export
func (r *goodbyeCmd) Execute(args []string) error {
	fmt.Println("Bye Bye", r.Name)
	return nil
}
