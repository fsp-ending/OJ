/*************************************************************************
	> File Name: 168.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 30 Apr 2020 11:38:28 PM CST
 ************************************************************************/

#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string a[105];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i][0] >= 'a' && a[i][0] <= 'z') {
            a[i][0] -= 32;
        }
        for (int j = 1; j < a[i].size(); i++) {
            if (a[i][j] >= 'a' && a[i][j] <= 'z') {
                a[i][j] += 32;
            }
        }
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }


    return 0;
}
