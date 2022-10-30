pub fn linear_search<T: PartialEq>(item: &T, arr: &[T]) -> i32 {
    let mut idx_pos = -1; // -1 indicates not found

    for (idx, data) in arr.iter().enumerate() {
        if item == data {
            idx_pos = idx as i32;
            return idx_pos;
        }
    }
    idx_pos
}
fn main() {
    let index = linear_search(&"Rust", &vec!["Python", "Php", "Java", "C", "C++", "Rust"]);
    println!("Position: {}", index);

    let index = linear_search(&25, &vec![25, 62, 29, 43, 77]);
    println!("Position: {}", index);

    let index = linear_search(&855, &vec![25, 62, 29, 43, 77]);
    println!("Position: {}", index);
