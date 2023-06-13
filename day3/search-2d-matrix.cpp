#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) {
        for(auto i: mat){
            if(binary_search(i.begin(), i.end(), target))return true;
        }
        return false;
}

int main(){
    return 0;
};