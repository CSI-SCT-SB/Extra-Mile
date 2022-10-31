use url::{Url, Host, ParseError};

fn main() -> Result<(), ParseError> {

let string = "https://linuxhint.com";

let url = Url::parse(string)?;

let scheme = url.scheme();

let host = url.host();

println!("Scheme: {}", scheme);

println!("Host: {:?}", host);

Ok(())

}