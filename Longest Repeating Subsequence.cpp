//PROBLEM DESCRIPTION
Given string str, find the length of the longest repeating subsequence such that it can be found twice in the given string.

The two identified subsequences A and B can use the same ith character from string s if and only if that ith character has different indices in A and B. For example, A = "xax" and B = "xax" then the index of the first "x" must be different in the original string for A and B.

Examples :

Input: s = "axxzxy"
Output: 2
Explanation: The given array with indexes looks like
a x x z x y 
0 1 2 3 4 5
The longest subsequence is "xx". It appears twice as explained below.
subsequence A
x x
0 1  <-- index of subsequence A
------
1 2  <-- index of s
subsequence B
x x
0 1  <-- index of subsequence B
------
2 4  <-- index of s
We are able to use character 'x' (at index 2 in s) in both subsequences as it appears on index 1 in subsequence A and index 0 in subsequence B.
Input: s = "axxxy"
Output: 2
Explanation: The given array with indexes looks like
a x x x y 
0 1 2 3 4
The longest subsequence is "xx". It appears twice as explained below.
subsequence A
x x
0 1  <-- index of subsequence A
------
1 2  <-- index of s
subsequence B
x x
0 1  <-- index of subsequence B
------
2 3  <-- index of s
We are able to use character 'x' (at index 2 in s) in both subsequencesas it appears on index 1 in subsequence A and index 0 in subsequence B.
Constraints:
1 <= s.size() <= 103

//CPP CODE HERE
public:
    int lrsRec(int i,int j, string &s,vector<vector<int>> &clist){
        if(i==0||j==0) return 0;
        if(clist[i-1][j-1]!=-1) return clist[i-1][j-1];
        if((s[i-1]==s[j-1])&&i!=j) return clist[i-1][j-1]=(1+
        lrsRec(i-1,j-1,s,clist));
        
        
            return clist[i-1][j-1]= max(lrsRec(i-1,j,s,clist)
            ,lrsRec(i,j-1,s,clist));
        
    }
    int LongestRepeatingSubsequence(string &s) {
        // Code here
        int n=s.length();
        vector<vector<int>> clist(n,vector<int>(n,-1));
        return lrsRec(n,n,s,clist);
    }
