/*************************************************************************
	> File Name: gcd-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月07日 星期四 20时58分26秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int a, int b, int *x, int *y) {
    if (!b) {
        *x = 1, *y = 0;
        return a;
    }
    int xx, yy, ret = gcd(b, a % b, &xx, &yy);
    *x = yy;
    *y = xx - a / b * yy;
    return ret;
}

int main() {
    int a, b, x, y;
    while (~scanf("%d%d", &a, &b)) {
        printf("%d\n", gcd(a, b, &x, &y));
        printf("%d * %d + %d * %d = %d", a, x, b, y, a * x + b * y);
    }
    return 0;
}
