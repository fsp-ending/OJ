/*************************************************************************
	> File Name: 163.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月02日 星期六 09时24分07秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include <math.h>
using namespace std;

#define pi acos(-1)

int main() {
    double a, b, x;
    cin >> a >> b >> x;
    printf("%.6f\n", sqrt(a * a + b * b - 2 * a * b * cos(pi / 180 * x)));
    return 0;
}
