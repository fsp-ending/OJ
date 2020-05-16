/*************************************************************************
	> File Name: 线性筛.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月16日 星期六 18时38分01秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define max_n 200000
int prime[max_n + 5] = { 0 };

int main() {
    for (int i = 2; i <= max_n; i++) {
        if(!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    printf("%d\n", prime[100]);

    return 0;
}
