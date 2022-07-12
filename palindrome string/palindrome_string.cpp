/// https://leetcode.com/problems/valid-palindrome

//Note :-> we have to ignore special character and spaces and only consider if it is a number or alphabets

//Time Complexity :->O(N)
//space Complexity :->O(1)

/*
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/
class Solution {
public:
    bool isPalindrome(string A) {
        int s=0;
        int n = A.size();
        int e = n-1;
        
        while(s<=e){
            
            while(s<e && !isalnum(A[s])) s++;
            while(s<e && !isalnum(A[e])) e--;
            
            if(toupper(A[s]) != toupper(A[e])) return false;
            
            s++;
            e--;
        }
        return true;
    }
};
