const EARTH_RADIS: f64 = 6378.1370;

fn main() {

let nairobi_lat_deg = -1.286389_f64;

let nairobi_long_deg = 36.817223_f64;

let el_paso_lat_deg = 31.772543_f64;

let el_paso_long_deg = -106.460953_f64;

let nairobi_lat = nairobi_lat_deg.to_radians();

let el_paso_lat = el_paso_lat_deg.to_radians();

let delta_lat = (nairobi_lat_deg - el_paso_lat_deg).to_radians();

let delta_long = (nairobi_long_deg - el_paso_long_deg).to_radians();

let angle_inner = (delta_lat / 2.0).sin().powi(2) +

nairobi_lat.cos() * el_paso_lat.cos() * (delta_long / 2.0).sin().powi(2);

let central_angle = 2.0 * angle_inner.sqrt().asin();

let distance = EARTH_RADIS * central_angle;

println!("Distance between Nairobi and El Paso is: {:.2} KM", distance);

}