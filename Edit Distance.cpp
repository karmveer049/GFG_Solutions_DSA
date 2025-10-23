//PROBLEM DESCRIPTION
Given two strings s1 and s2. Return the minimum number of operations required to convert s1 to s2.
The possible operations are permitted:

Insert a character at any position of the string.
Remove any character from the string.
Replace any character from the string with any other character.
Examples:

Input: s1 = "geek", s2 = "gesek"
Output: 1
Explanation: One operation is required, inserting 's' between two 'e' in s1.
Input: s1 = "gfg", s2 = "gfg"
Output: 0
Explanation: Both strings are same.
Input: s1 = "abcd", s2 = "bcfe"
Output: 3
Explanation: We can convert s1 into s2 by removing ‘a’, replacing ‘d’ with ‘f’ and inserting ‘e’ at the end. 
Constraints:
1 ≤ s1.length(), s2.length() ≤ 103
Both the strings are in lowercase.
  
//CPP CODE HERE
class Solution {
  public:
    // Function to compute the edit distance between two strings
    int editDistRec(string&s1,string&s2,int m,int n,vector<vector<int>>&clist){
        if(m==0) return n;
        if(n==0) return m;
        if(clist[m][n]!=-1)return clist[m][n];
        if(s1[m-1]==s2[n-1]) return editDistRec(s1,s2,m-1,n-1,clist);
        return clist[m][n]=1+min({editDistRec(s1,s2,m-1,n,clist),
            editDistRec(s1,s2,m-1,n-1,clist),
            editDistRec(s1,s2,m,n-1,clist)
        });
    }
    int editDistance(string& s1, string& s2) {
        // code here
        int m=s1.length();
        int n=s2.length();
        vector<vector<int>> clist(m+1,vector<int>(n+1,-1));
        return editDistRec(s1,s2,m,n,clist);
    }
};
