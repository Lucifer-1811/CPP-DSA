#include<iostream>
using namespace std;

class student{
    private:
      string name;
      int rollno;
      int age;
      char grade;

      public:
      student(){}

      student(string name,int rollno,int age,char grade){
   this->name=name;
   this->rollno=rollno;
   this->age=age;
   this->grade=grade;
    
     }

string getname(){

    return name;
}

int getrollno(){
    return rollno;
}

int getage(){
    return age;
}

char getgrade(){
    return grade;
}

void setname(string newname){
    name=newname;
}
void setrollno(int roll){
    rollno=roll;
}
void setage(int nage){
    age=nage;
}
void setgrade(char ngrade){
    grade=ngrade;
}

void print(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rollno<<endl;
    cout<<"age"<<age<<endl;
    cout<<"grade"<<grade<<endl;
}
};

int main()
{


student s("neeraj",10,22,'a');
s.setname("raj");
cout<<s.getname()<<endl;
 s.print();





 return 0;
}