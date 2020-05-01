/*************************************************************************
	> File Name: 183.递归函数.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 May 2020 10:52:37 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int f(int x) {
    if (x <= 0) {
        return 0;
    } else if (x == 1) {
        return 1;
    } else if (x > 1 && x % 2 == 0){
        return 3 * f(x / 2) - 1;

    } else {
        return 3 * f((x + 1) / 2) - 1;
    }
}

int main() {
    int x;
    cin >> x;
    cout << f(x) << endl;
    return 0;
}
