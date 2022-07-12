// Vector :-> Inbuilt Dynamic Array and it is implemented using template


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> *vp = new vector<int>(); /// dynamic i.e., we ahve to delete it manually
    vector<int> v;   /// static i.e., It will automatically deleted , if it reaches end of scope

    vector<int> v2(10,-2);   /// initialise the vector of size 10 with -2
    vector<int> v3(100); 
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<endl;
    }
    
    sort(v2.begin(),v2.end()); //sort the vector  
    
  //For imserting elements  of vector using for loop
    for(int i=0;i<100;i++)
    {
      v.push_back(i+1);
      cout<<"Capacity "<<v.capacity()<<endl; //It will give how many elements you can insert in vector
      cout<<"Size "<<v.size()<<endl; //It will give how many elements are present
    }
  
    // for inserting an element in vector ==> we use push_back
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

  //for accessing the elements in array 
  for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
  
  // For manipulating the values of vectors
    v[1] = 100;

    // never use [] to insert elements as if we use this , size of vector will not increase and it will work like array 
    v[4] = 1002;
    v[5] = 1234;

  //Always use push_back for inserting an element in vector as it will automatically double the size of vector when vector completely filled   
  v.push_back(23);
    v.push_back(234);

    v.pop_back(); //remove the last element 
  
  // For printing elements of vector
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

  
  //at()  will take index and if that index is present then return value at that index
    cout<<v.at(4)<<endl;
     cout<<v.at(6)<<endl;
     

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;
    cout<<v[6]<<endl;



   return 0;
}
