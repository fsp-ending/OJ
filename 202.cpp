/*************************************************************************
	> File Name: 202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月02日 星期六 09时52分46秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

#define swap(a, b) { \
    __typeof(a) __temp = a;\
    a = b; b = __temp;\
}

int main() {
    int n, num[1005] = { 0 };
    int num2[1005] = { 0 };
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        num2[i] = i;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            if (num[j] > num[j + 1]) {
                swap(num[j], num[j + 1]);
                swap(num2[j], num2[j + 1]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << " ";
        }
        cout << num2[i];
    }
    cout << endl;
    

    return 0;
}
