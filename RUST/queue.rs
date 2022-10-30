#[macro_use] extern crate queues;
use queues::*;
fn main() {
println!("Demo pragrma to show queue in rust !!");
let mut demoqueue: Queue<isize> = queue![];
demoqueue.add(200);
demoqueue.add(300);
demoqueue.add(400);
demoqueue.add(500);
demoqueue.add(600);
println!(" value inside the queue is {}", demoqueue );
}