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
  
  //choice
  int choice;
  
  //main loop
  bool run = 1;
  while(run){
    //printing menu
    for(size_t i=0; i<len; ++i){
      std::cout<<menu[i]<<std::endl;
    }
    
    //input choice
    std::cin>>choice;
    
    switch(choice){
      case 0:
        run = 0;
        break;
      case 1:
        //func()
        break;
      case 2:
        //func()
        break;
      default:
        std::cout<<"Error command"<<std::endl;
        break;
    }
  }
  
  return 0;
}