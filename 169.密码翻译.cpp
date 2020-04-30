/*************************************************************************
	> File Name: 169.密码翻译.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 May 2020 12:25:10 AM CST
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;

int main() {
    int n, num[128] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        char a;
        int b;
        cin >> a >> b;
        num[(int)a] = b;
    }
    string str;
    cin >> str;
    int ans = 0;
    for (int i = 0; i < str.size(); i++) {
        ans += num[(int)str[i]];
    }
    cout << ans << endl;

    return 0;
}
