/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月15日 星期五 22时11分06秒
 ************************************************************************/
#include<iostream>
#include<cstdio>
using namespace std;

long long gcd(long long a, long long b) {
    return (b ? gcd(b, a % b) : a);
}



int main() {
    long long sum = 1;
    for (int i = 1; i <= 20;  i++) {
        sum = sum * i / gcd(sum, i);
    }
    printf("%lld\n", sum);

    return 0;
}

