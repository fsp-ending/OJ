/*************************************************************************
	> File Name: 180-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月04日 星期一 13时32分25秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
long long pow_a(int n) {
    long long sum = 1;
    for (int i = 1; i <= n; i++) {
        sum *= 2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    printf("%lld\n", pow_a(n));


    return 0;
}

