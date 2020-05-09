/*************************************************************************
	> File Name: 变参函数样例.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月09日 星期六 14时41分44秒
 ************************************************************************/

#include<iostream>
#include <stdarg.h>
#include<cstdio>
using namespace std;
int max_int(int n, ...) {
    int ans = INT32_MIN, temp;
    va_list arg;
    va_start(arg, n);
    while (n--) {
        temp = va_arg(arg, int);
        if (temp > ans) ans = temp;
    }
    va_end(arg);
    return ans;
}

int main() {
    cout << max_int(3, 1, 5, 3) << endl;
    cout << max_int(2, 1, 6) << endl;
    cout << max_int(3, 1, 6, 5, 27) << endl;
    return 0;
}

