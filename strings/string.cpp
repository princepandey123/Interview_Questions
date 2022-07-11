
/*
String is a inbuilt class but we use it as a data type  .

string behaves like a character array 


*/


#include<bits/stdc++.h>
using namespace std;

int main(){
  //create string statically 
    string s = "abc";
  //printing the string 
  cout<<s<<endl;

  //create string dynamically  
   string *sp = new string;
   *sp = "mno";
  
   cout<<sp<<endl;    //It print the address of string 
   cout<<*sp<<endl;    // It print the value stored in the array 

  //Note :-> we can use vector of string in place of 2 d character array (ie., char ch[10][10])
   vector<string> v;
   v.push_back(s);
   v.push_back("hello");

   for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
    sort(v[i].begin(),v[i].end());
    cout<<v[i]<<endl;
   }

   string s2;
   s2 = "def";
   cout<<s2<<endl;
  
   string s3;
  
  //We are using getline in cases when we want input string  with spaces 
  
   getline(cin, s3);
   cout<<s3<<endl;

  //string manipulation
   s3 = "abcabc";
   cout<<s3[1]<<endl;
   s3[0] = 'd';
   cout<<s3<<endl;

  //string concatenation
   string s4 = "";
   s4 += s3 + s2 + "hello coding";
   cout<<s2<<endl;
   cout<<s3<<endl;
   cout<<s4<<endl;
  //size() and length() zre same function 
   cout<<s4.size()<<endl;
   cout<<s4.length()<<endl;

   cout<<s4.substr(3)<<endl; //starting from index 3 , it will print it every thing 
   string s5 = s4.substr(3,5); //return the substring starting from index 3 print till length = 5
   cout<<s5<<endl;

   cout<<s4.find("abc")<<endl;  // It will return the index if it able to find the string 

   int a = 123;
   string s6 = to_string(a); //convert int to string 
   cout<<s6<<endl;
   s6[1] = '4';
   cout<<s6<<endl;

    s6.push_back('5');  //For inserting an element
    cout<<s6<<endl;

  //For removing the element , we have pop_back()
  
    a = atoi(s6.c_str()); // It will take string and return an integer
    cout<<a<<endl;

   return 0;
}
 
