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
    cout<<"Age: "<<age<<endl;
    cout<<"Grade: "<<grade<<endl;
}
};

int main()
{
    string name;
    int rollno;
    int age;
    char grade;

    cout << "Enter student name: ";
    cin>>name;

    cout << "Enter student roll number: ";
    cin >> rollno;

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter student grade: ";
    cin >> grade;

    student s(name, rollno, age, grade);

    cout << "Student details: " << endl;
    s.print();

    cout << "Enter new name: ";
  cin>>name;
    s.setname(name);

    cout << "Updated student details: " << endl;
    s.print();

    return 0;
}