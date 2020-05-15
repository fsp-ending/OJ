/*************************************************************************
	> File Name: 6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月15日 星期五 22时16分31秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define max_n 10000000
int num[max_n];


int binary_search(int *num, int n, int x) {
    int r = 0, l = n;
    while (r <= l) {
    int mid = (r + l) >> 1;
    if (x == num[mid]) return mid;
    if (x < num[mid]) l = mid - 1;
    if (x > num[mid]) r = mid + 1;
    }
    return -1;
}

int main() {
  //  int num[max_n];
    int x;
    cin >> x;
    for (int i = 0; i < max_n; i++) {
        num[i] = i;
    }
    cout << binary_search(num, max_n, x) << endl;
    return 0;
}

