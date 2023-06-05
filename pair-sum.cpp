#include <bits/stdc++.h>
// Pair sum in array
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>>ans;
   sort(arr.begin(), arr.end());
   for(int i=0;i<arr.size();++i){
      for(int j=i+1;j<arr.size();++j){
         if(arr[i]+arr[j]==s)ans.push_back({arr[i], arr[j]});
      }
   }
   return ans;
}

int main(){
    pairSum({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10);
    return 0;
}