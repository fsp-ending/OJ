/*************************************************************************
	> File Name: 145.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 30 Apr 2020 11:03:29 PM CST
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;

int main() {
    string ans;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        if (temp.size() > ans.size()) {
            ans = temp;
        }
    }
    cout << ans << endl;


    return 0;
}
