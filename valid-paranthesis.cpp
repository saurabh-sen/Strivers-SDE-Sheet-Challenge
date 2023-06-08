#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string expression)
{
    stack<char>s;
    for(int i=0;i<expression.size();++i){
        if(s.empty())s.push(expression[i]);
        else if(s.top() == '[' and expression[i] == ']')s.pop();
        else if (s.top() == '{' and expression[i] == '}')s.pop();
        else if (s.top() == '(' and expression[i] == ')')s.pop();
        else s.push(expression[i]);
    }
    return s.empty();
}

int main(){
    
    return 0;
};