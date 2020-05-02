/*************************************************************************
	> File Name: EP30.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月02日 星期六 19时06分49秒
 ************************************************************************/
#include<iostream>
#include<cstdio>
#include <math.h>
using namespace std;

#define MAX_N 1000000

int init(int n) {
    int x = n;
    int sum = 0;
    while (x) {
        sum += pow(x % 10, 5);
        x /= 10;
    }
    if (sum == n) return 1;
    return 0;
}

int main() {
    int ans = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (init(i)) 
        ans += i;
    }
    cout << ans << endl;


    return 0;
}

