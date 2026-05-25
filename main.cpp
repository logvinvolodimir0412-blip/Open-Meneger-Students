#include <iostream>
#include <string>

//basic struct
struct Student {
  std::string name;
  unsigned int age;
};

int main(void){
  //main menu
  std::string menu[] = {
    "1. List students",
    "2. Add student",
    "0. Exit"
  };
  //menu len 
  size_t len = sizeof(menu)/
  sizeof(menu[0]);
  
  //title
  std::cout<<"\n\t\tOpen Meneger Students\n"<<std::endl;
  
  //printing menu
  for(size_t i=0; i<len; ++i){
    std::cout<<menu[i]<<std::endl;
  }
  
  return 0;
}