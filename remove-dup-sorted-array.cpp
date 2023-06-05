#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	int k=1;
	for(int i=1;i<n;++i){
		if(arr[i] != arr[i-1])arr[k++] = arr[i];
	}
	return k;
}

int main(){
    removeDuplicates({1, 2, 2, 3, 4, 4, 4, 5, 6, 7, 8}, 11);
    return 0;
};