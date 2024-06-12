// // /////////////////////////////////////////class///////////////////////
// // // #include<iostream>
// // // using namespace std;

// // // class calculation{
// // //     public:
// // //     int length;
// // //     int height;
// // //     int breadth;

// // //     int calculatearea(){
// // //         return length*breadth;

// // //     }
// // //      int calculatevolume(){
// // //         return length*breadth*height;

// // //     }
// // // };
// // // int main(){
// // //      calculation c1;
// // //      c1.length=10;
// // //      c1.height=5;
// // //      c1.breadth=7;

// // //      cout<<c1.calculatearea()<<endl;

// // //      cout<<c1.calculatevolume()<<endl;

// // //   return 0
// // // }

// // ////////////////////////////////////////////////////////////////////constructor
// // //a specaail mebmber function which is called automatically when an object is created,
// // // this how we created.it have same classname and no return type


// // //default constructor::

// // #include<iostream>
// // using namespace std;

// // class emp{
// //     public:
// //         emp(){
// //             cout<<"constructor called"<<endl;
// //         }
// // }

// // int main()
// // {
// //     emp e1;
// //  return 0;
// // }

// // //////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// class employee{
//     public:
//     int id;
//     string name;
//     double sal;
//     employee(){
//         name="Neeraj kumar mahananda";
//         sal=1000000;
//         id=007;
// }
// void print(){
//     cout<<"Employee id is :"<<id<<endl;
//     cout<<"Employee name is :"<<name<<endl;
//     cout<<"salary is :"<<sal<<endl;


// }
// };
// int main()
// {
//     employee e1;
//     e1.print();
//  return 0;
// }
