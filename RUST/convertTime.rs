use chrono::prelude::*;

fn main() {

let local_time = Local::now();

let utc = DateTime::<Utc>::from_utc(local_time.naive_utc(), Utc);

let est = FixedOffset::east(5 * 3600);

println!("Local Time: {} EAT", local_time);

println!("UTC Time now: {}", utc);

println!("EST Time Now: {}", utc.with_timezone(&est));



}