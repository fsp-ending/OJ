/*************************************************************************
	> File Name: Ep02.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月05日 星期二 18时16分40秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define max_n 44
#define max_m 4000000
int fib[max_n] = { 0 };

int main() {
    int n = 2;
    long long sum = 0;
    fib[0] = 1;
    fib[1] = 2;
    while (fib[n - 1] + fib[n - 2] < max_m) {
        fib[n] = fib[n - 1] + fib[n - 2];
        n++;
    }
    for (int i = 0; i < n; i++) {
        if (fib[i] & 1) continue;
        sum += fib[i];
    }
    cout << sum << endl;

    return 0;
}
