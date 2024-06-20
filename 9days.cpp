// vector-----------------------------same data stored
//--vector are grows dynamically in between the runtime------not fixed just like array(array is fixe size of)
//----------------------------------------------------------to use vector ,we use #include<vector>
// stl:-standard-template-library

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1 = {1, 2, 3, 4};
    // vector1.push_back(5); // insert at the end

    // // access--------------if vector1[10],then op will garbage valuee but
    // cout << vector1[0] << endl;
    // // at---------in this case op will be out of bound vector;

    // cout << vector1.at(1) << endl;
    // /// modify----------------
    // vector1.at(2) = 20;
    // // delete
    // vector1.pop_back();

    vector<int>::iterator itr;
    itr= vector1.end()-1;//for begin  vector1.begin()
    cout<<*itr<<endl;

    for (itr=vector1.begin();itr !=vector1.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    

    //     for (int item : vector1)
    // {
    //     cout << item << " ";
    // }

    return 0;
}
//----op:1234
// after push:12345
//using vector1.begin()->get 1st element of the vector
//using vector.end()-1 will print the last element
//for itr using the loop         itr=vector.begin();itr!=vector.end();itr++{ cout<<*itr<<endl  }------------------------------------------------------------------------------------------------------------------------