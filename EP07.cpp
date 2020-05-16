/*************************************************************************
	> File Name: EP07.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月16日 星期六 13时35分08秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define max_n 3000000
long long num[max_n] = { 0 };
void init() {
    for (long long i = 2; i <= max_n; i++) {
        if (num[i]) continue;
        num[++num[0]] = i;
           for (long long j = i * i; j <= max_n; j += i) {
               num[j] = 1;
        }
    }
    return ;
}

int main() {
    init();
    long long ans = 0, i = 1;
    while (num[i] < 2000000) {
        ans += num[i];
        i += 1;
    }
    printf("%lld\n", ans);
    return 0;
}
