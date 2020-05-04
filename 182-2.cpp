/*************************************************************************
	> File Name: 182-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月04日 星期一 13时26分28秒
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

