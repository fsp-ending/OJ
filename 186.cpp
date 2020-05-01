/*************************************************************************
	> File Name: 186.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 May 2020 08:12:02 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int n,num[100005];
int f(int x, int p) {
    if (p >= n) {
        return x - 1;
    }
    return f(x + 1, p + num[p]);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cout << f(1,0) << endl;


    return 0;
}
