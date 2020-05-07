/*************************************************************************
	> File Name: EP15.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月05日 星期二 20时53分56秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    long long  m = 40, n = 20, ans = 1;
    while (m != 20 || n) {
        if (m != 20) ans *= (m--);
        if (n != 0 && ans % n == 0) ans /= (n--);
    }
    cout << ans << endl;
    return 0;
}
