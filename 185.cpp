/*************************************************************************
	> File Name: 185.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 May 2020 11:40:18 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int f(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return f(n - 1) + f(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;

    return 0;
}
