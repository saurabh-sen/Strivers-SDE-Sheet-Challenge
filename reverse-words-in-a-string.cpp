#include<bits/stdc++.h>
using namespace std;

string reverseString(string &str){
	string ans="", temp="";
	for(int i=0;i<str.size();++i){
		if(str[i] != ' ')temp+=str[i];
		else if(str[i] == ' ' and temp.size()){
			ans = " " + temp + ans;
			temp="";
		}
	}
	if(temp.size()){
		ans = temp + ans;
	}
	 if (ans.size() > 0 && ans[0] == ' ') {
        ans.erase(0, 1);
    }
	return ans;
}

int main(){
    string s = "the sky is blue";
    reverseString(s);
    return 0;
};