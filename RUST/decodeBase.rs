use base64::decode;

use std::str;

use std::error::Error;

fn main() -> Result<(), Box<dyn Error>>{

let b64 = "V2VsY29tZSB0byBMaW51eGhpbnQ=";

let decoded = &decode(b64).unwrap()[..];

println!("String: {:?}", str::from_utf8(decoded));

Ok(())

}