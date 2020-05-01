/*************************************************************************
	> File Name: 166.字符串操作.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 May 2020 07:56:05 AM CST
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int n;
    cin >> a >> n >> b;
    if (a.size() > 100) {
        cout << 100 << endl;
    } else {
        cout << a.size() << endl;
    }
    a = a.insert(n - 1, b);
    cout << a << endl;
    for (int i = a.size() - 1, j = 1; i >= 0; j++, i--) {
        if (a[i] == 'x') {
            cout << j << endl;
            break;
        }
    }
    return 0;
}
