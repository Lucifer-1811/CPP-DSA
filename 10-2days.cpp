// #include<iostream>
// using namespace std;
// int uniqueelements(int arr[],int size){
//     for(int i=0;i<size;i++){
//         int count=0;
//         for(int j=0;j<size;j++){
//             if(arr[i]==arr[j] && i!=j){
//                 count++;
//                 }
//                 }
//                 if(count==0){
//                     cout<<arr[i]<<" ";
//                     }
//                     }

// }

// int main()
// {
//     int arr[7]={1,1,2,2,2,3,3};
//     cout<<uniqueelements(arr,7);

//  return 0;
// }
//-------------------------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;
// int unique_elements(int arr[], int size)
// {
//     int i = 0;
//     for (int j = i + 1; j < size; j++)
//     {
//         if (arr[i] != arr[j])
//         {
//             i++;
//             arr[i] = arr[j];
//         }
//     }
//     return i;
// }

// int main()
// {
//     int arr[7] = {1, 1, 2, 2, 2, 3, 3};
//     int size = unique_elements(arr, 7);
//     for (int i = 0; i <= size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
// max subarray sum--kadane algorithm{{}}------------------------------task
/////////////////////////////////////////////binary search/////////////////////////////////////////////////
#include <iostream>
using namespace std;
bool binarySearch(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return true;
        }
            if (arr[mid] < key)
            {
                start = mid + 1;
             } else
                {
                   end=mid-1;
                }
            mid=(start+end)/2;
        
        
    }
    return false;
}
    int main()
    {
        int arr[8] = {2, 3, 5, 7, 8, 10, 12, 15};
        
        cout << binarySearch(arr, 8,5);

        return 0;
    }
