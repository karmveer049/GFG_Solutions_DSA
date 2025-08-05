You are given two strings s1 and s2, of equal lengths. The task is to check if s2 is a rotated version of the string s1.

Note: A string is a rotation of another if it can be formed by moving characters from the start to the end (or vice versa) without rearranging them.

Examples :

Input: s1 = "abcd", s2 = "cdab"
Output: true
Explanation: After 2 right rotations, s1 will become equal to s2.
Input: s1 = "aab", s2 = "aba"
Output: true
Explanation: After 1 left rotation, s1 will become equal to s2.
Input: s1 = "abcd", s2 = "acbd"
Output: false
Explanation: Strings are not rotations of each other.
Constraints:
1 ≤ s1.size(), s2.size() ≤ 105
s1, s2 consists of lowercase English alphabets.

//CPP CODE HERE

bool areRotations(string &s1, string &s2) {
        // code here
        string s11=s1+s1;
        int n=s11.size();
        int m=s2.size();
        int i=0;
        int j=0;
        while(i<n){
            if(s11[i]==s2[j]){
                i++;
                j++;
            }
            if(j==m) return true;
            else {
                if(s11[i]!=s2[j]) i++;
            }
        }
        return false;
    }
