// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]={2,3,4,5,6};
//     cout<< arr[0];
//  return 0;
// }

//--------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={2,3,4,5,6};

//     for(int item:arr){
//         cout<<item<<" ";
//     }
//  return 0;
// }
//---------------------------------------------------------------------------------------
// index of 0 is represent the name of the variBLE OF A DATATYPE..

// USER INPUT
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int arr[5];

//     cout<<"enter the number"<<endl;
//     for (int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     //printing elements

//     for(int item : arr){
//         cout<<item<<" ";
// }
//  return 0;
// }
//-------------------------------------------------------------------------
// array and function using for print

// #include<iostream>
// using namespace std;
// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

// }
// int main()
// {
//     int size;
//     cout<<"enter the size of array"<<endl;
//     cin>>size;
// // int arr[5]={1,2,3,4,5};

// int arr[size];
// cout<<"enter the elements of array"<<endl;
// for(int i=0;i<size;i++){
//     cin>>arr[i];
// }

// int arr2[5]={6,7,8,9,4};

// print(arr,size);
//  return 0;
// }
//---------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int getmax(int arr[],int size){
//     int max=0;

//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//              max=arr[i];
//            }
//         }
// return max;
// }

// int main()
// {
//     int arr[5]={3,4,5,6,7};

//    cout<< getmax(arr,5);
//  return 0;
// }
//------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// int getmin(int arr[],int size){
//     int min;

//     for(int i=0;i<size;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
// return min;
// }
// int main()
// {
//     int arr[5]={6,2,3,4,5};

//     cout<<getmin(arr,5);
//  return 0;
// }
//----------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// void update(int arr[],int size){

//     cout<<"entering update function"<<endl;
//     arr[1]=9;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//       }
//       cout<<endl;

//           cout<<"existing update function"<<endl;

// }

// int main()
// {
//     int arr[5]={1,2,3,4,5};

//     update(arr,5);

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";

//     }

//  return 0;
// }

//----------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;
// void update(int arr[], int n){
//     cout << "Inside update function" << endl;
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<endl;
//     }

// }
// int main(){
//     int size;
//     int arr[size];
//     cout << "Enter the size of the array: ";
//     cin >> size;
//     cout << "Enter the elements of the array: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];

//     }
//     update(arr,size);

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" "<<endl;
//     }
// }

//------------------------------------------------------------------------------
//////////////////////////Linear searching//////////////////////////////////////

// #include <iostream>
// using namespace std;
// bool linearsearch(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {

//             return i;
//         }
//     }
//     return false;
// }

// int main()
// {
//     int arr[5] = {1, 3, 4, 5, 2};

//     int key = 5;

//     int index=linearsearch(arr, 5, key);
//     cout<<index;

//     return 0;
// }
//-------------------------------------------------------Find the index------------------------------------
// #include <iostream>
// using namespace std;

// int linearsearch(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[5] = {1, 3, 4, 5, 2};

//     int key = 5;

//     int index = linearsearch(arr, 5, key);

//     if (index!= -1)
//     {
//         cout << "Key found at index " << index << endl;
//     }
//     else
//     {
//         cout << "Key not found" << endl;
//     }

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////REVERSE ARRAY////////////////////////////////////////////////
#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        
            start++;
            end--;
        
    }
}
int main()
{
    int arr[8] = {5, 2, 6, 7, 3, 1, 9, 10};

    cout << "Original array is: ";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

     reverseArray(arr, 8);

   cout<<"Reversed array is: ";
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//---------------------------SWAP ALTERNATE ELEMENTS OF ARRAY-----------------------------------------------------

//---------------------------PAIR SUM-----------------------------------------------------------------------------
//---------------------------TRIPLET SUM--------------------------------------------------------------------------
//---------------------------|SORT 0'S AND 1'S|----------10001-TO-0011--------------------------------------------
//---------------------------FIND DUPLICATE ELEMENTS--------------------------------------------------------------
//---------------------------FIND UNIQUE ELEMENTS-----------------------------------------------------------------
//---------------------------FIND INTERSECTION ELEMENTS-------------------IN TWO ARRAYS WHICH VALUES ARE COMMONS--
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||