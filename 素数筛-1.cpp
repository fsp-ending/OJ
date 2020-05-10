/*************************************************************************
	> File Name: 素数筛-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月10日 星期日 19时39分15秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define max_n 100

int prime[max_n + 5] = { 0 }; 

void init_prime() {
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;
        prime[i] = i;
        for (int j = i * i; j <= max_n; j += i) {
            (j % 6) ? prime[j] = i : prime[j] = 2;

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
