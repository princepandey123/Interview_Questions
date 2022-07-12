 /// https://leetcode.com/problems/excel-sheet-column-number/
 
// We are given the column title , we have to find the column number 

//Sapce complexity :->O(1)
//Time Complexity :->o(n)

class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        long long pow = 1;
        int n = s.size();
        
        for(int i=n-1;i>=0;i--){
        
        //The value of ASCII Value of A is 65. Here , in this question , to get the value starting from 1 , we subtract it frm 64 . Hence , A starts from 64 
            ans = ans + (s[i]-64)*pow;
            pow = pow*26;
        }
        return ans;
    }
};
