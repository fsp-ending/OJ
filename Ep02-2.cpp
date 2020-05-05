/*************************************************************************
	> File Name: Ep02-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月05日 星期二 18时47分42秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define max_m 4000000
int main() {
    int a = 1, b = 2;
    int sum = 2;
    while ( a + b < max_m) {
        b = a + b;
        a = b - a;
        if (b & 1) continue;
        sum += b;
    } 
    cout << sum << endl;
    return 0;
}
