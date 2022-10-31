fn log(command: &str) {

log::debug!("Running command: {}", command);

}

fn main() {

env_logger::init();

log("ps aux | grep bash");

// run with command:

// RUST_LOG=debug cargo run

}