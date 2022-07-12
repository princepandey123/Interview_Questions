// https://leetcode.com/problems/evaluate-reverse-polish-notation/

//Basically :-> Calculator converts the infix notation to postfix notation and then evaluate our expression  

//How to convert infix to postfix :->

//simply move all the operators to the closing brackets . and then read the expression from left to right 

//Rules to Evaluate the postfix expressions :->
/*
1. If it is operand , then simply push 
2. If it is operator , 
     a)simply pop the top 2 elements from stack 
     b)perform +,-,*,/
     c)push the result into stack 
3.Pop the result stored in stack with the help of stack.top()

*/
// Example :-> (4+(13/5)) ==> [4,13,5,/,+] 

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(int i=0;i<tokens.size();i++){
            
        if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
              /// 2 elements
             int v1 = st.top();
            st.pop();
            int v2 = st.top();
            st.pop();
            
            if(tokens[i]=="+"){
                st.push(v2+v1);  /// push result inside stack
            } 
            else if(tokens[i]=="-"){
                st.push(v2-v1);  /// push result inside stack
            }
             else if(tokens[i]=="*"){
                st.push(v2*v1);  /// push result inside stack
            }
             else if(tokens[i]=="/"){
                st.push(v2/v1);  /// push result inside stack
            }
        }
        
        else {
            /// operands
          
          //IN c++ , we have 2 types of string :-> 1.C stylei.e., char a[]  2.string class i.e., string s 
          //But atoi works only for c style string , so we ahve to convert string type to c style string  
          st.push(atoi(tokens[i].c_str()));
        }
    }
        
    /// one element inside the stack
        
        return st.top();
    }       
            
};
