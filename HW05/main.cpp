#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

bool isBalanced(string s) {
  stack<char> st;
  for(int i = 0;i<s.length();i++){
    if(s[i] == '(' || s[i] == '{' || s[i] == '['){
      st.push(s[i]);
    }
    else{
      if(st.size() == 0){
        return false;
      }
      if(st.top() == '(' && s[i] == ')'){
        st.pop();
      }
      else if(st.top() == '{' && s[i] == '}'){
        st.pop();
      }
      else if(st.top() == '[' && s[i] == ']'){
        st.pop();
      }
    }
  }
  if(st.size() == 0){
    return true;
  }
  else{
    return false;
  }
}

int main() {
  string s;
  cin >> s;
  while (s != "-1") {
    if(isBalanced(s)) {
      cout << "Parentheses are balanced" << endl;
    } else {
      cout << "Parentheses are not balanced" << endl;
    }
    cin >> s;
  }
    
}
