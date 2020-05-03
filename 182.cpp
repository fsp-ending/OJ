/*************************************************************************
	> File Name: 182.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月03日 星期日 15时05分24秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    int ans = num[0];
    for (int i = 0; i < n; i++) {
        if (ans < num[i]) ans = num[i];
    }
    cout << ans << endl;
    
    return 0;
}
