//copy construcor
#include<iostream>
using namespace std;

class employee{
       public:
    int id;
    string name;
    employee(){

    }

 
    employee(int id,string n){
        this->id=id;
        this->name=n;
        }
        employee(employee &e){
            id=e.id;
            name=e.name;
            
            }
            void display(){
                cout<<"id="<<id<<endl;
                cout<<"name="<<name<<endl;

            }

};

int main(){
    int id;
    string name;
    cin>>id>>name;
    employee e1(id,name);
    employee e2(e1);
    e1.display();
cout<<e2.id;
    return 0;

}