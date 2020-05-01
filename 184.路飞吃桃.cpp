/*************************************************************************
	> File Name: 184.路飞吃桃.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 May 2020 11:15:54 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int init(int x, int n) {
    if (n == 1) {
        return x;
    }
    return init((x + 1) * 2, n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << init(1, n) << endl;


    return 0;
}
