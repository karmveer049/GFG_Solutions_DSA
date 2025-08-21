Given a string s of length n, find all the possible non-empty subsequences of the string s in lexicographically-sorted order.

Example 1:

Input : 
s = "abc"
Output: 
a ab abc ac b bc c
Explanation : 
There are a total 7 number of subsequences possible for the given string, and they are mentioned above in lexicographically sorted order.
Example 2:

Input: 
s = "aa"
Output: 
a a aa
Explanation : 
There are a total 3 number of subsequences possible for the given string, and they are mentioned above in lexicographically sorted order.
Your Task:
You don't need to read input or print anything. Your task is to complete the function AllPossibleStrings() which takes a string s as the input parameter and returns a list of all possible subsequences (non-empty) that can be formed from s in lexicographically sorted order.

Expected Time Complexity: O( n*2n  )
Expected Space Complexity: O( n * 2n )

Constraints: 
1 <= n <= 16
s constitutes of lower case english alphabets

//CPP CODE HERE
vector<string> AllPossibleStrings(string s) {
        // Code here
        vector<string> ans;
        int n=s.size();
       for(int i=0;i<((int)pow(2,n));i++){
           string res="";
           for(int j=0;j<n;j++){
               if((i/(int)pow(2,j))%2==1) res=res+s[j];
           }
           ans.push_back(res);
       }
       sort(ans.begin(),ans.end());
        return ans;
    }
