/*************************************************************************
	> File Name: 素数筛.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月10日 星期日 18时28分39秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define max_n 100

int prime[max_n + 5] = { 0 };
void init_prime() {
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;
        for (int j = i * i; j <= max_n; j += i) {
            prime[j] = 1;
        }
    }
    return ;
}

int main() {
    init_prime();
    int n;
    cin >> n;
    for (int i = 1; i * i <= n; i++) {
        for (int j = i; j < n; j++) {

        }
    }
    printf("%d\n", prime[1]);
    printf("%d\n", prime[prime[0]]);
    return 0;
}
