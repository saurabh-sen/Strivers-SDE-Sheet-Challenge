#include<bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
   sort(arr, arr+n);
}

int main(){
    sort012({0, 2, 1, 2, 0}, 5);
    return 0;
};