use fasta_multiple_cmp::get_filenames;

fn main() {
    get_filenames();
}
mod.rs:

pub mod fasta_multiple_cmp;

pub mod build_sequences_matrix;
fasta_multiple_cmp.rs:

pub mod fasta_multiple_cmp {

...

    pub fn get_filenames() {
    let args: Vec<String> = env::args().collect();
    ...
build_sequences_matrix.rs:

pub mod build_sequences_matrix {

    use simple_matrix::Matrix;
    ...