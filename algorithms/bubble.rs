// https://doc.rust-lang.org/book/ch11-03-test-organization.html




pub fn bubble_sort(arr: &mut [i32]) {
    let mut i = 0;
    while i < arr.len() {
        let mut j = 0;
        while j < arr.len() - 1 - i {
            if arr[j] > arr[j + 1] {
                arr.swap(j, j + 1);
            }
            j += 1;
        }
        i += 1;
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn descending() {
        //descending
        let mut ve1 = vec![6, 5, 4, 3, 2, 1];
        bubble_sort(&mut ve1);
        for i in 0..ve1.len() - 1 {
            assert!(ve1[i] <= ve1[i + 1]);

            
        }
    }
    #[test]
}

