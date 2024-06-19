// /////////////////////////////////////////////////////----+*+*+*+*   POLYMORPHISM    *+*+*+*----//////////////////////////////////////////////////////////////////////
// //same entity behave differntly in different situation
// //////////////////////////////////////////////////////
// // compile time polymorphism & runtime ppolymorphism

// #include<iostream>
// using namespace std;

// class count{
//     private:
//     int val;
    
//     public:
//      count(){
//         val=5;

//     }
//     void operator ++(){
//         val+=10;

//     }
//     void print(){
//         cout<<"count "<<val<<endl;
//     }

// };


// int main()
// {
//     count c;
//     c.print();

//     ++c;

//     c.print();

//  return 0;
// }

////////////////////////////////////////////////////virtual function////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;

// class base{
//     public:
//    virtual void print(){
//         cout<<"from base"<<endl;
//     }
// };
// class derived :public base{
//     public:
//     void print() override{

//         cout<<"from derived"<<endl;

//     }
// };

// int main()
// {
// derived d;
// base *ptr=&d;
// ptr->print();
//  return 0;
// }
///////////////////////actual use of pointer/////////////////////////////
///////////////if a function deoesn't have any use in the base class but the function must be 
//implemented by all its derived classes...

// 
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     virtual void show()=0;

// };
// class B:public A{
//        void show(){

//        }
// };
// class C:public  A{
//         void show(){
        
//        }
// };
// int main()

// {
//     B b1;
//     C c1;

//  return 0;
// }

// #include<iostream>
// using namespace std;

// class Date
// {
//     private:
//         short int dd, mm, yy;

//     public:
//         Date()
//             {
// 		 dd=0;
// 		 mm=0;
// 		 yy=0;
//             }

//         void getdata(int i, int j, int k)
//             {
//                 dd = i;
//                 mm = j;
//                 yy = k;
//             }


//         void printdate()
//             {
//                 cout<<"\nDate is "<<dd<<"/"<<mm<<"/"<<yy<<"\n";
//             }
// };

// int main()
// {
//     Date D1;
//     Date *dptr;

//    cout<<"printing members using the object ";//value can be stored in the stack memory::
//    D1.getdata(20,10,2020);       
//    D1.printdate();

//     dptr = &D1;
//     cout<<"Printing members using the object pointer ";//value can be stored in the heap memory:primary use of pointer
   
//     dptr->getdata(20,10,2020);
//     dptr->printdate();
   
//    return 0;
// }
////////////////////////////////////////////////friend class and friend function///////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;

// class Distance{
//     private:
//     int meter;

//     friend int increaseDistance(Distance);
//     public:
//     Distance(){
//         meter = 0;
//     }
// };
    
//     int increaseDistance(Distance d){
//         d.meter += 10;

//         return d.meter;

//     }


// int main()
// {
//     Distance d1;
//     cout<<increaseDistance(d1);
//  return 0;
// }

//////////////////////////////////----------------templtes------////////////////////////////
// #include <iostream>
// using namespace std;


// template<class T>//where for class 
// class Number{
// public:

// T add(T a , T b ){
//     cout << a+b << endl;
//     return a+b;
// }



// };
// int main(){
//     Number<int> n;
//     Number<float>n2;
//     n2.add(2.0,6.3);
//     n.add(5,7);

    

//     return 0;
// }
#include <iostream>
using namespace std;


template<class T>//where for class 
class add{
public:

T add(T a , T b ){
    cout << a+b << endl;
    return a+b;
}




};
template<typename T>  //for function
T addi(T a,T b){
    return a + b;

}

int main(){
    add<int> n;
    add<float>n2;
    n2.add(2.0,6.3);
    n.add(5,7);
    add<int,float> n3(5,3.2);


    

    return 0;
}