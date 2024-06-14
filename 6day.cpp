// // // // // // #include <iostream>
// // // // // // using namespace std;
// // // // // // class employee
// // // // // // {
// // // // // // private:
// // // // // // int id;
// // // // // // double salary;

// // // // // // public:
// // // // // // employee(){

// // // // // // }
// // // // // // employee(int id,double salalry){
// // // // // //     this->id=id;
// // // // // //     this->salary=salary;
    
// // // // // // }

// // // // // // int getid(){
// // // // // //     return  id;
// // // // // // }

// // // // // // void setid(int newid){
// // // // // //     id=newid;


// // // // // // }

// // // // // // };


// // // // // // int
// // // // // // main()
// // // // // // {
// // // // // //     employee e1(12,1000);
// // // // // //     cout<<e1.getid()<<endl;

// // // // // //     e1.setid(5);
// // // // // //     cout<<e1.getid()<<endl;
// // // // // //     return 0;
// // // // // // }
// // // // // ///////////////////////////////////////////////////////EncapTulatioN/////////////////////////////////////////////////////----------------------
// // // // // #include<iostream>
// // // // // using namespace std;

// // // // // class student{
// // // // //     private:
// // // // //       string name;
// // // // //       int rollno;
// // // // //       int age;
// // // // //       char grade;

// // // // //       public:
// // // // //       student(){}

// // // // //       student(string name,int rollno,int age,char grade){
// // // // //    this->name=name;
// // // // //    this->rollno=rollno;
// // // // //    this->age=age;
// // // // //    this->grade=grade;
    
// // // // //      }

// // // // // string getname(){

// // // // //     return name;
// // // // // }

// // // // // int getrollno(){
// // // // //     return rollno;
// // // // // }

// // // // // int getage(){
// // // // //     return age;
// // // // // }

// // // // // char getgrade(){
// // // // //     return grade;
// // // // // }

// // // // // void setname(string newname){
// // // // //     name=newname;
// // // // // }
// // // // // void setrollno(int roll){
// // // // //     rollno=roll;
// // // // // }
// // // // // void setage(int nage){
// // // // //     age=nage;
// // // // // }
// // // // // void setgrade(char ngrade){
// // // // //     grade=ngrade;
// // // // // }

// // // // // void print(){
// // // // //     cout<<"Name: "<<name<<endl;
// // // // //     cout<<"Roll No: "<<rollno<<endl;
// // // // //     cout<<"age"<<age<<endl;
// // // // //     cout<<"grade"<<grade<<endl;
// // // // // }
// // // // // };

// // // // // int main()
// // // // // {


// // // // //  student s("neeraj",10,22,'a');
// // // // // s.setname("raj");
// // // // // cout<<s.getname()<<endl;
// // // // //  s.print();





// // // // //  return 0;
// // // // // }

// // // // // //////////////////////////////////////////////////////////InherITancE//////////////////////////////////////////////////////////////-----------------
// // // // //it allow us to create a new class from an existing class
// // // // //the child class inherits the features from the parent class and can have additional feature of its own.
// // // // //the parent class is also known as the base class or superclass
// // // // #include<iostream>
// // // // using namespace std;
// // // // class animal{

// // // //     public:
// // // //     void eat(){
// // // //         cout<<"eating..."<<endl;
// // // //         }
// // // //         protected:
// // // //         void protectedb(){
// // // //             cout<<"protected";
// // // //         }
    
    
// // // // };
// // // // class dog:public animal{
// // // //     public:
// // // // void bark(){
// // // //     cout<<"barking..."<<endl;
// // // //         protectedb();
// // // // }

// // // // };
// // // // int main()
// // // // {
// // // // dog d1;
// // // // d1.bark();
// // // //  return 0;
// // // // }
// // // // //////////////////////////////////////////////////////////////
// // // #include<iostream>
// // // using namespace std;
// // // class base{
// // //     public:
// // //     int x;
// // //     private:
// // //     int z;
// // //     protected:
// // //     int y;
// // // }
// // // class derived:public base{
// // //     //x is public
// // //     //y is protected
// // //     //z is not accessible
// // // };
// // // class c2 : protected base{
// // //     //x is public
// // //     //y is protected
// // //     //z is not accessible

// // // };
// // // class c3 : private base{
// // //     //x is private
// // //     //y is private
// // //     //z is not accessible
// // // };
// // // int main()
// // // {

// // //  return 0;
// // // }
// // /////////////////////////////////////////////////multilevel ///////////////////////////////////////////
// // #include<iostream>
// // using namespace std;
// // class A{

// // };
// // class B:public A{

// // };
// // class C:public  B{

// // };
// // class D:public C{

// // };
// // int main()
// // {
// //  return 0;
// // }
// /////////////////////////////////////////////////////MultiplE inheritance///////////////////////////////////////
// //hierarchical//////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void print(){
//         cout<<"A"<<endl;
//     }

// };
// class B{

// };
// class C:public A,public B{

// };
// int main()
// {
//     C c1;
//   //  c1.print();//wrong
//     c1.A::print();
//  return 0;
// }
#include<iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"A"<<endl;
        }
        };
        class B:public A{
            public:
            void print(){
                cout<<"B"<<endl;
                }
                };

int main()
{
    // A d1;
    // d1.A::print();///done
    
    B d1;
//    B *ptr=&d1;
//    //A *ptr=&d1;
//    ptr->print();

   A *ptr= &d1;
   ptr->print();
 return 0;
}