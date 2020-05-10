/*************************************************************************
	> File Name: EP05.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月10日 星期日 14时22分46秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    int ans = 1;
    for (int i = 1; i <= 20; i++) {
        ans *= i / gcd(ans, i);
    }
    printf("%d\n", ans);
    return 0;
}
