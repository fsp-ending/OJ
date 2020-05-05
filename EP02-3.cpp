/*************************************************************************
	> File Name: EP02-3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月05日 星期二 19时05分13秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define max_m 4000000

int fib[3] = { 0, 1, 2 };

int main() {
    int n = 2, sum = 2;
    while (fib[(n - 1) % 3] + fib[(n - 2) % 3] < max_m) {
        n += 1;
        fib[n % 3] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
        if (fib[n % 3] & 1) continue;
        sum += fib[n % 3];
    }
    cout << sum << endl;

    return 0;
}
