// sets in c++
// dynamic nature,not fixed size data
// properties:-uniques elements ,immutable->elements type change nahi ho skta,we can add or remove elements but cant change the values of existing element
// sorted order,:-by default the order will be
//  #include<set>
//  #include<iostream>
//  using namespace std;

// int main()
// {
//     set<int> s1={5,3,4,1,2};

//     for(int i:s1){
//         cout<<i<<" ";
//     }

//  return 0;
// }
//-----------------------------------------------------------------------------------------------------

// #include<set>
// #include<iostream>
// using namespace std;

// int main()
// {
//     set<int, greater<int>> s1={5,3,4,1,2};//descending order for use greater

//     s1.insert(20);//for insertion
//     s1.erase(20);//for deletion
//    // s1.clear();//for delete eveerything
//     s1.count(4);

//     for(int i:s1){
//         cout<<i<<" ";
//     }

//  return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------
// #include <unordered_set>
// #include <iostream>
// using namespace std;

// int main()
// {
//     unordered_set<int> uset = {5, 3, 9, 7, 1};
//     uset.insert(20);
//     for (int i : uset)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }
//------------------------------------------------------------------------------------------------------
//1,1,2,2,2,3,3 and output will be the unique elements :1,2,3


// #include<iostream>
// #include<set>
// using namespace std;



// int main()
// {
//     set<int> s={1,1,2,2,2,3,3};
//     for(int i:s){
//         cout<< i<< " ";
//     }

//  return 0;
// }

#include<iostream>
using namespace std;

void unique(int arr[],int size){
   int count=0;

    for(int i=0;i<size;i++){
        if(arr[i]==arr[i]){
            cout<<arr[i]<<" ";
        }


    }
}
int main()
{
    int arr[7]={1,1,2,2,2,3,3};
    cout<<unique(arr,7);
 return 0;
}
//i=0,j on loop i+1 to size-1,if i==j j++