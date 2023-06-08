#include<bits/stdc++.h>
using namespace std;

string longestPalinSubstring(string str)
{
  string longest = "";
  if (!str.size())
    return longest;
  for (int i = 0; i < str.size(); ++i)
  {
    string substr = "";
    for (int j = i; j < str.size(); ++j)
    {
      substr += str[j];
      if (pali(substr) and substr.size() > longest.size())
        longest = substr;
      // cout<<substr<<endl;
    }
  }
  return longest;
}

int main(){
    
    return 0;
};