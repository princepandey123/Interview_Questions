/// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
/// https://www.hackerrank.com/challenges/reduced-string/problem

//Method 1 :-> Using Stack 
//Time Complexity :->O(N)
//space Compexity :->O(N)


class Solution {
public:
    string removeDuplicates(string A) {
         stack<char> s;
         for(int i=0;i<A.size();i++)
         {
           //We will simply push the elements in the stack if eiter th stack is empty or if the string des not contain any 2 duplicate elements 
           
             if(s.empty() || A[i] != s.top())
             {
                 s.push(A[i]);
             } 
             //If there is a match , pop and move forward
             else {
                 s.pop();
             }
         }
        string ans="";
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
 

//Method 2 :->Implicitly use the concept of stack

//Time Complexity :->O(N)
//space Compexity :->O(1)



class Solution {
public:
    string removeDuplicates(string A) {   
        /// simulate inplace stack
        int stptr = -1;
        for(int i=0;i<A.size();i++){
             if(stptr ==-1 || A[i] != A[stptr] ){
                 stptr++;
                 A[stptr] = A[i];
             } else {
                 stptr--;
             }
         }
         string ans="";
        for(int i=0;i<=stptr;i++){
            ans.push_back(A[i]);
        }
        return ans;
    }
};
