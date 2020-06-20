#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    // Complete this function
    stack <char> mystack;
    for(int i =0;i<s.length();i++)
    {
        if((s[i] == '{') ||(s[i] == '[') || (s[i] == '('))
        {
            mystack.push(s[i]);
        }else if((!mystack.empty()) && (s[i] == '}')){
            if (mystack.top() == '{')
                mystack.pop();
            else
                return "NO";
        }else if ((!mystack.empty()) && (s[i] == ']')){
            if(mystack.top() == '[')
                mystack.pop();
            else
                return "NO";
        }else if ((!mystack.empty()) && (s[i] == ')')){
            if(mystack.top() == '(')
                mystack.pop();
            else
                return "NO";
        }else{
            return "NO";
        }
    }
    if(mystack.empty())
        return "YES";
    else
        return "NO";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
