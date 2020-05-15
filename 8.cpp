/*************************************************************************
	> File Name: 8.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月15日 星期五 22时17分21秒
 ************************************************************************/
#include<iostream>
#include<cstdio>
using namespace std;
#define max_n 100
int num[max_n];
int binary_search(int *num, int r, int l, int x) {
    if (r > l) return -1;
    int mid = (r + l) >> 1;
    if (x == num[mid]) return mid;
    if (x < num[mid]) l = mid - 1;
    if (x > num[mid]) r = mid + 1;
    return binary_search(num, r, l, x);
}


int main() {
    int x;
    cin >> x;
    for (int i = 0; i < max_n; i++) {
        num[i] = i;
    }
    cout << binary_search(num, 0, max_n, x);
    return 0;
}

