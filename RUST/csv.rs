use csv::Error;

fn main() -> Result<(), Error> {

let csv_data = "

101,Edith,Masao,Edith.Masao@mail.io,Colombia,doctor

102,Kellen,Yusuk,Kellen.Yusuk@mail.io,Nicaragua,police officer

";

let mut reader = csv::Reader::from_reader(csv_data.as_bytes());

for row in reader.records() {

let row = row?;

println!(

"id {} | firstname: {} | lastname: {} | email: {} | country: {} | profession: {} |",

&row[0],

&row[1],

&row[2],

&row[3],

&row[4],

&row[5],

);

}

Ok(())

}