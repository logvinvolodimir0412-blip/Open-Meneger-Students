#include <iostream>
#include <vector>
#include <string>

//basic struct
struct Student {
  std::string name;
  unsigned int age;
};

//add new student to vector
void AddStudent(Student* student, std::vector<Student>* db){
  //Name
  std::cout<<"Name:";
  getline(std::cin>>std::ws, student->name);
  
  //Age
  std::cout<<"Age:";
  std::cin>>student->age;
  
  db->push_back(*student);
}

//printing students
void ListStudents(std::vector<Student>* db){
  for(size_t s=0; s < db->size(); ++s){
    std::cout<<db->at(s).name<<std::endl;
    std::cout<<db->at(s).age<<std::endl;
    std::cout<<std::endl;
  }
}

int main(void){
  Student NewStudent;
  
  //db students
  std::vector<Student>Students = {};
  
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
        ListStudents(&Students);
        break;
      case 2:
        AddStudent(&NewStudent, &Students);
        break;
      default:
        std::cout<<"Error command"<<std::endl;
        break;
    }
  }
  
  return 0;
}