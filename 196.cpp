/*************************************************************************
	> File Name: 196.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 May 2020 08:17:42 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n, num[55] = {0, 0, 1, 1};
    cin >> n;
    for (int i = 4; i <= n; i++) {
        num[i] = num[i - 2] + num[i - 3]; 
    }
    cout << num[n] << endl;

    return 0;
}
