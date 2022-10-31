#include<iostream>
#include <sys/stat.h>
bool FileExists(const std::string& name) {
  struct stat buffer;
  return (stat (name.c_str(), &buffer) == 0);
}

int main() {
   std::string filename = "C:/file_name.txt";
   std::cout << "Does file_name.txt Exists ? " << FileExists(filename) << std::endl;
   return 0;
}