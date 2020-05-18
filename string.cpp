/*************************************************************************
	> File Name: string.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月19日 星期二 06时19分06秒
 ************************************************************************/

#include<iostream>
#include <string.h>
#include<cstdio>
using namespace std;

int main() {
    char str[10] = { 0 };
    int n;
    while (cin >> n) {
        sprintf(str, "%x", n);
        cout << strlen(str) << endl;
    }
    return 0;
}
