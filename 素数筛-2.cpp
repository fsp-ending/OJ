/*************************************************************************
	> File Name: 素数筛-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月10日 星期日 19时51分51秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define max_n 100
int prime[max_n + 5] = { 0 };
void init_prime() {
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;
        for (int j = i; j <= max_n; j += i) {
            prime[j] = i;
        }
    }
    return ;
}

int main() {
    init_prime();
    for (int i = 2; i <= max_n; i++) {
        printf("%d = %d\n", i, prime[i]);
    }
    return 0;
}
