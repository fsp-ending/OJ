/*************************************************************************
	> File Name: 180.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月02日 星期六 09时34分26秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int pow_a(int n) {
    int sum = 1;
    for (int i = 1; i <= n; i++) {
        sum *= 2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    printf("%d\n", pow_a(n));


    return 0;
}
