package main

import "fmt"

func rearrange(arr []int) {
	n := len(arr)
	temp := make([]int, n)
	evenIndex := 0
	oddIndex := n / 2

	for _, num := range arr {
		if num%2 == 0 {
			temp[evenIndex] = num
			evenIndex++
		} else {
			temp[oddIndex] = num
			oddIndex++
		}
	}

	copy(arr, temp)
}

func main() {
	arr := []int{1, 2, 3, 4, 5, 6, 7, 8, 9}
	rearrange(arr)

	// Result: [2, 4, 6, 8, 1, 3, 5, 7, 9]
	for _, num := range arr {
		fmt.Printf("%d ", num)
	}
}
