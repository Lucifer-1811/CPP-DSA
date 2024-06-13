// // // #include<iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     int var = 5;
// // //     int *ptr = &var;
// // //     int **ptr2 = &ptr;

// // //     cout <<  &var << endl;// address var
// // //     cout << ptr << endl;//address of var
// // //     cout << *ptr << endl;//address var where

// // //     cout << &ptr << endl;//address of ptr
// // //     cout << ptr2 << endl;//address of value
// // //  return 0;
// // // }

// // ////////////////////////////////type of pointers
// // //null pointer
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int *ptr = NULL;
// //     cout << ptr << endl;
// //     return 0;
// //     }

// //dangling pointers  : whenever we delete an value which is address is stored by a pointer then,the pointer print the garbage value;; 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int *ptr;
    
//         int var = 5;
//         ptr = &var;
        
//         cout << *ptr << endl;

//         return 0;

// }

// //void pointers: :void ptr can store any type of adrress like :- int, double, char - - - - - - - - - - - - - - - - - - - - - - - - - - -
// #include<iostream>
// using namespace std;
// int main()
// {
//     void *ptr;


// }


 // wild pointer:which not initialize

//////////////////////////////////copy  constructor
#include<iostream>
using namespace std;
class employee{
    public:

    int id;
    string name;
    employee(){

    }
    employee(int i,string n){
        this->id=id;
        this->name=n;
    }
    employee(employee &e){
        id=e.id;
        name=e.name;
    }
    void display(){
        cout<<id<<" "<<name<<endl;
        }
        

};

int main(){
    employee e1(20,"Rahul");
    cout<<e1.id<<endl;
    employee e2(e1);
    cout<<e2.id<<endl;
    e1.display();
    e2.display();

}

    


