/*************************************************************************
	> File Name: gcd.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月07日 星期四 20时27分38秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    int a, b;
    while (~scanf("%d%d", &a, &b)){
    cout << gcd(a, b) << endl;
}
    return 0;
}
