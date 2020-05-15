/*************************************************************************
	> File Name: 3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月15日 星期五 22时13分32秒
 ************************************************************************/
#include<iostream>
#include<cstdio>
using namespace std;

int arr(int n) {
    return n;
}
/*
int binary_search(int (*num)(int), int x, int n) {
    int r = 0, l = n - 1;
    while (r <= l) {
    int mid = (r + l) / 2;
    if (x == num(mid)) return mid;
    if (x < num(mid)) l = mid - 1;
    if (x > num(mid)) r = mid + 1;
    }
    return -1;
}
*/
int binary_search(int *num, int l, int r, int x) {
    if (l > r)  return -1;
    int mid = (l + r) >> 1;
    if (x == num[mid]) return mid;
    if (x < num[mid]) l = mid - 1;
    if (x > num[mid]) r = mid + 1;
    return binary_search(num, l, r, x);
}


int main() {
    int n, x;
    cin >> n >> x;
    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    
   cout <<  binary_search(num, 0, n, x) << endl;
    return 0;
}

