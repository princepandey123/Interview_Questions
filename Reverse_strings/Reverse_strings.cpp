/// https://leetcode.com/problems/reverse-string/
//Approach 1 :-> Using Stack
     //Time Complexity :->O(N)
     //space Complexity :->O(N)

class Solution {
public
    void reverseString(vector<char>& A) {
        stack <char> st;
        for(int i=0;i<A.size();i++){
           //  pushing every char inside stack
            st.push(A[i]);
        }
        
        // pop every character
        for(int i=0;i<A.size();i++){
            A[i] = st.top();
            st.pop();
        }
      }
};      
        
//Approach 2:-> 2 Pointers Approach

//Time Complexity :->O(N)
// Space Complexity :->O(1)

class Solution {
public
    void reverseString(vector<char>& A) {
        int s=0;
        int e = A.size()-1;
        
        while(s<=e){
            swap(A[s],A[e]);
            s++;
            e--;
        }
    }
};

//Method 3 :->Using inbuild reverse Functions 

class Solution {
public
    void reverseString(vector<char>& A)
      {
           reverse(A.begin(),A.end());       
       }
};
