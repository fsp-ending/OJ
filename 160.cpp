/*************************************************************************
	> File Name: 160.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月02日 星期六 09时09分58秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

#define pi 3.14

int main() {
    double r, h;
    cin >> r >> h;
    printf("%.2f\n", pi * r * h + pi * r * r + r * r * 4 + 2 * r * h + sqrt(8 * r * r) * h);

    return 0;
}
