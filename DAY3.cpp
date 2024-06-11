// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // /*
// // // // // void fun1(){
// // // // //     cout << "Hello, World!" << endl;
// // // // // }
// // // // // int main()
// // // // // {
// // // // //     fun1();
// // // // //  return 0;
// // // // // }


// // // // //    //////////////////////////////////pehle declare krna hai call krne se pehle

// // // // // int main(){
// // // // //     func();

// // // // // }
// // // // // void func(){
// // // // //     cout << "1" << endl;

    
// // // // // }


// // // // //////////////////////////////////////////////////////////////////////
// // // // // #include<iostream>
// // // // // using namespace std;

// // // // // int fun2(){
// // // // //     return 10;
// // // // // }
// // // // // int main()
// // // // // {
// // // // //     int x = fun2();
// // // // //     cout << x << endl;
// // // // //  return 0;
// // // // // }

// // // // /////////////////////////////////////////////////////////////////////////
// // // // #include<iostream>
// // // // using namespace std;

// // // // void fun(int n){
// // // //     cout <<n;
// // // // }
// // // // int main(){
// // // //     fun(10);

// // // //  return 0;
// // // // }

// // /////////////////////////////////////////////////////////////////////////////////////////////////////
// // // #include<iostream>
// // // using namespace std;
// // // int fun(int n,int m){
    
// // //     return <<n+m;
// // // }
// // // int main()
// // // {
// // //    int ans= fun(10,20);
// // //    cout << ans << endl;
// // //  return 0;
// // // }

// // ///////////////////////////////////////////////////////////////////////////////////////////////
// // //default value right se start hoti hai("neeraj",int age=10,int height) nahi haisahi height ki value dene ka baad hi sahi hoga
// // #include<iostream>
// // using namespace std;

// // string p(string name,int age,int height){
// //     cout<<"my name" << name <<"age is"<<age <<"height is :"<<height;
// // }
// // int main()
// // {
// //     p("neeraj",20,170);

// //  return 0;
// // }
// //////////////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int temp=  1;
// int factorial(int n){
// for (int  i = 1;i<= n;i++)
// {
//      temp=i*temp;
// }
// return temp;
// }
// int main()
// {
//    int ans=factorial(5);
//    cout<<ans;
//  return 0;
// }
//////////////////////////////////////////////////////////////////////////////wrong

// #include<iostream>
// using namespace std;
// int temp=  1;
// int factorial(int n){
// for (int  i = 1;i<= n;i++)
// {
//      temp=i*temp;
// }
// return temp;
// }

// int temp2=  1;
// int factor2(int n){
// for (int  j = 1;j<= n;j++)
// {
//      temp2=j*temp2;
// }
// return temp2;
// }


// int ncr(temp,temp2){
//     int ans=temp/2*temp2;
// }
// int main()
// {
//  return 0;
// }

// int main(){
//     ncr(5,3);
// }
/////////////////////////////////////////////////////////////////////////////ncr
#include<iostream>
using namespace std;

int factorial(int n){
    int temp=1;
    for (int  i = 1;i<= n;i++)
    {
        temp=i*temp;
        }
        return temp;
}
int nCr(int n,int r){
    int num=factorial(n);
    int dem=factorial(r) * factorial(n-r);
    return num/dem;
}
int main()
{
   int ans= nCr(5,3);
   cout<<ans;
 return 0;
}