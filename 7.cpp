/*************************************************************************
	> File Name: 7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月07日 星期四 18时48分15秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int f(int n) {
    if (n == 0 || n == 1) return 1;
    return n * f(n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
