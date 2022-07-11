/// https://leetcode.com/problems/length-of-last-word/

//Approach 1:-> Reverse the string and we have to finds the length of first word
//Approach 2 :-> start implementing from the end of string 
//Approach 3 :-> start iterating from the first 

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size();
        int i = 0;
        while(i<n){
            if(s[i]!=' '){
                count++;
                i++;
            }else{
                /// current char is a space
                while(i<n && s[i]==' ')i++;
                
                if(i==n){   /// end of string
                    return count;
                }else{
                    //WE are not reaching to end of string and there are still some character present
                    count = 0;
                }
                
            }
        }
        
        return count;
    }
};
