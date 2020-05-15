/*************************************************************************
	> File Name: 2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月15日 星期五 22时12分20秒
 ************************************************************************/
#include<iostream>
#include <inttypes.h>
#include<cstdio>
using namespace std;

int32_t init(int32_t n) {
    static int32_t num1[20] = {
        0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3,
        6, 6, 8, 8, 7, 7, 9, 8, 8
    };
    static int32_t num2[10] = {
        0, 0, 6, 6, 5, 5, 5, 7, 6, 6
    };
    if (n < 20) {
        return num1[n];
    } else if (n < 100) {
        return num1[n % 10] + num2[n / 10];
    } else if (n < 1000) {
        int32_t temp = init(n % 100);
        if (temp) temp += 3;
        return num1[n / 100] + 7 + temp;
    } else if (n == 1000) {
        return 11;
    } else {
    return 0;
    }
}

int main() {
    int ans = 0;
    for (int i = 1; i <= 1000; i++) {
        ans += init(i);
    } 
    printf("%d\n", ans);
    return 0;
}

