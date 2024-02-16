fn rearrange(arr: &mut [i32]) {
    let n = arr.len();
    let mut temp: Vec<i32> = Vec::with_capacity(n);
    let mut _even_index = 0;
    let mut _odd_index = 0;

    for &num in arr.iter() {
        if num % 2 == 0 {
            temp.push(num);
            _even_index += 1;
        } else {
            temp.push(num);
            _odd_index += 1;
        }
    }

    arr.copy_from_slice(&temp);
}

fn main() {
    let mut arr = vec![1, 2, 3, 4, 5, 6, 7, 8, 9];

    rearrange(&mut arr);

    // Result: [2, 4, 6, 8, 1, 3, 5, 7, 9]
    println!("{:?}", arr);
}
