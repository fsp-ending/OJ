/*************************************************************************
	> File Name: 200.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月02日 星期六 06时49分21秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int  n, num[35] = {4, 7};
    cin >> n;
    double ans = 4.0 / 7;
    for (int i = 2; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
        ans += 1.0 * num[i - 1] / num[i];

    }
    printf("%d/%d\n", num[n - 1], num[n]);
    printf("%.2f\n", ans);
    return 0;
}
