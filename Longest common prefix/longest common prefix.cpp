// https://leetcode.com/problems/longest-common-prefix/

//Time Complexity :->O(mn) where m is the length of smallest string and n is total no of string  
//Space Complexity :->O(m) in worst case 

/*
Example :->

  Input: strs = ["flower","flow","flight"]
  Output: "fl"
  
   Input: strs = ["dog","racecar","car"]
   Output: ""
   Explanation: There is no common prefix among the input strings.
*/

// It's a simple implementation problem where we are doing character by character matching 
//and if the charcater matches , appnd it into new string and if does not matches return the appended string 

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
       string ans = "";
        if(strs.size()==0) return "";
        
        string s = *min_element(strs.begin(),strs.end());  /// return min string i.e., the string with lowest length
        
        for(int i=0;i<s.size();i++){
            for(int j=0;j<strs.size();j++)
            {
                //here , we are compairing the i th character of smallest string with the i th character of the j th string 
                if(s[i] != strs[j][i]){
                    return ans;
                }
            }
            ans.push_back(s[i]);
        }
        return ans;
      
        }
};
       

//Method 2 :->We don't need to find the minimum element , we assume that the first word is the minimum element

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string ans = "";
        if(strs.size()==0) return "";
        
        string s = strs[0]; 
        
        for(int i=0;i<s.size();i++){
            for(int j=1;j<strs.size();j++){
              //we are compairing the i th character of string j hence check whether the i th character exist or not 
                if(i>=strs[j].size() || s[i] != strs[j][i]){
                    return ans;
                }
            }
            ans.push_back(s[i]);
        }
        return ans;
        
    }
};
