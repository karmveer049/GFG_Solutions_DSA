PROBLEM DISCRIPTION//
Given a string s, which may contain duplicate characters, your task is to generate and return an array of all unique permutations of the string. You can return your answer in any order.

Examples:

Input: s = "ABC"
Output: ["ABC", "ACB", "BAC", "BCA", "CAB", "CBA"]
Explanation: Given string ABC has 6 unique permutations.
Input: s = "ABSG"
Output: ["ABGS", "ABSG", "AGBS", "AGSB", "ASBG", "ASGB", "BAGS", "BASG", "BGAS", "BGSA", "BSAG", "BSGA", "GABS", "GASB", "GBAS", "GBSA", "GSAB", "GSBA", "SABG", "SAGB", "SBAG", "SBGA", "SGAB", "SGBA"]
Explanation: Given string ABSG has 24 unique permutations.
Input: s = "AAA"
Output: ["AAA"]
Explanation: No other unique permutations can be formed as all the characters are same.
Constraints:
1 <= s.size() <= 9
s contains only Uppercase english alphabets


//CPP CODE HERE//
 public:
    vector<string> findPermutation(string &s) {
        // Code here there
       vector<string> ans;
       sort(s.begin(),s.end());
       vector<bool> used(s.size(),false);
       string path;
       backtrack(s,path,used,ans);
       return ans;
    }
    void backtrack(string &s,string &path, vector<bool> &used,vector<string>&ans){
        if(path.size()==s.size()){
            ans.push_back(path);
            return;
        }
        for(int i=0;i<s.size();i++){
            if(used[i]) continue;
            if(i>0&&s[i]==s[i-1]&&!used[i-1]) continue;
            used[i]=true;
            path.push_back(s[i]);
            backtrack(s,path,used,ans);
            path.pop_back();
            used[i]=false;
        }
    }
};
