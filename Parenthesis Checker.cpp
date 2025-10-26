//PROBLEM DESCRIPTION
Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']'. Determine whether the Expression is balanced or not.
An expression is balanced if:

Each opening bracket has a corresponding closing bracket of the same type.
Opening brackets must be closed in the correct order.
Examples :

Input: s = "[{()}]"
Output: true
Explanation: All the brackets are well-formed.
Input: s = "[()()]{}"
Output: true
Explanation: All the brackets are well-formed.
Input: s = "([]"
Output: false
Explanation: The expression is not balanced as there is a missing ')' at the end.
Input: s = "([{]})"
Output: false
Explanation: The expression is not balanced as there is a closing ']' before the closing '}'.
Constraints:
1 ≤ s.size() ≤ 106
s[i] ∈ {'{', '}', '(', ')', '[', ']'}

//CPP CODE HERE
  bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for(char x:s){
            if(x=='(' || x=='{'||x=='['){
                st.push(x);
            }
            else if(x==')' || x=='}'||x==']'){
                if(st.empty()) return false;
             char top=st.top();
             if((x==')' && top!='(')||
                (x=='}'&& top!='{')||
                (x==']'&& top!='[')){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
