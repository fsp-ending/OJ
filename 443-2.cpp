/*************************************************************************
	> File Name: 443-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月04日 星期一 13时28分00秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define max_n 10000
int arr[max_n + 5] = { 0 };

void change_flag(int a, int b) {
    for (int i = a; i <= b; i++) {
        arr[i] = 1;
    }
    return ;
}

int cnt_num(int l) {
    int cnt = 0;
    for (int i = 0; i <= l; i++) {
        !arr[i] && (cnt += 1);
    }
    return cnt;
}

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        change_flag(a, b);
    }
    cout << cnt_num(m) << endl;


    return 0;
}

