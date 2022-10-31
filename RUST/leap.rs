pub fn is_leap_year(year: u64) -> bool {
"This should return if a year is either a leap one or not";
return year % 4 == 0 && (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0));
}