fn increment(n: i32) -> i32 {
	n + 1
}

fn my_objective(arr: &mut [i32], f: fn(i32) -> i32) {
	for elem in arr.iter_mut() {
		*elem = f(*elem);
	}
}

fn main() {
	let mut arr: [i32; 5] = [0, 1, 2, 3, 4];
	my_objective(&mut arr, increment);

	for elem in arr.iter() {
		print!("{} ", elem);
	}
}
