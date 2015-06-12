package main

import ("fmt"
	"strings"
)

func main() {
	strs := []string{"ALİ", "veli", "özkan", "İsmet", "ÖZTÜRK", "ümit", "ilteriş", "Mahmut", "Dağcan", "şevket", "Şevket"}

	for i := 0; i < 11; i++ {
		fmt.Println(strings.ToLower(strs[i]))
	}
	
	fmt.Println("---")
	
	for i := 0; i < 11; i++ {
		fmt.Println(strings.ToUpper(strs[i]))
	}
}
