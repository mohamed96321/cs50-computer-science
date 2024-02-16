def rearrange(arr)
  n = arr.length
  temp = Array.new(n)
  even_index = 0
  odd_index = n / 2

  arr.each do |num|
    if num.even?
      temp[even_index] = num
      even_index += 1
    else
      temp[odd_index] = num
      odd_index += 1
    end
  end

  arr.replace(temp)
end

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]

rearrange(arr)

# Result: [2, 4, 6, 8, 1, 3, 5, 7, 9]
puts arr.join(' ')
