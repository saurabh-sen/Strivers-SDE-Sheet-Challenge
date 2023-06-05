#include<bits/stdc++.h>
using namespace std;

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	sort(arr.begin(), arr.end());
	return {arr[k-1], arr[n-k]};
}

int main(){
    kthSmallLarge({1, 2, 2, 3, 4, 4, 4, 5, 6, 7, 8}, 11, 3);
    return 0;
};