//PROBLEM DESCRIPTION HERE
Given two strings s1 and s2, return the length of their longest common subsequence (LCS). If there is no common subsequence, return 0.

A subsequence is a sequence that can be derived from the given string by deleting some or no elements without changing the order of the remaining elements. For example, "ABE" is a subsequence of "ABCDE".

Examples:

Input: s1 = "ABCDGH", s2 = "AEDFHR"
Output: 3
Explanation: The longest common subsequence of "ABCDGH" and "AEDFHR" is "ADH", which has a length of 3.
Input: s1 = "ABC", s2 = "AC"
Output: 2
Explanation: The longest common subsequence of "ABC" and "AC" is "AC", which has a length of 2.
Input: s1 = "XYZW", s2 = "XYWZ"
Output: 3
Explanation: The longest common subsequences of "XYZW" and "XYWZ" are "XYZ" and "XYW", both of length 3.
Constraints:
1<= s1.size(), s2.size() <=103
Both strings s1 and s2 contain only uppercase English letters.

//CPP CODE HERE
public:
    int lcsRec(int m, int n, string &s1,string &s2,vector<vector<int>>&clist){
        if(m==0||n==0) return 0;
        if(clist[m][n]!=-1) return clist[m][n];
        if(s1[m-1]==s2[n-1]) return clist[m][n]=(1+
        lcsRec(m-1,n-1,s1,s2,clist));
        return clist[m][n]=max(lcsRec(m-1,n,s1,s2,clist),
        lcsRec(m,n-1,s1,s2,clist));
    }
    int lcs(string &s1, string &s2) {
        // code here
        int m=s1.length();
        int n=s2.length();
        vector<vector<int>>clist(m+1,vector<int>(n+1,-1));
        return lcsRec(m,n,s1,s2,clist);
    }
