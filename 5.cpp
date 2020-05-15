/*************************************************************************
	> File Name: 5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月15日 星期五 22时15分44秒
 ************************************************************************/
#include<iostream>
#include<cstdio>
using namespace std;

#define max_n 100

int prime[max_n] = { 0 };
void in_prime() {
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;
       //  prime[++prime[0]] = i;
        for (int j = 2; j <= max_n; j += 1) {
           // (j % 6) ? prime[j] = i : prime[j] = 2;
             prime[j] = i; 
        }
    }
    return ;
}

int main() {
    in_prime();
    for (int i = 2; i <= max_n; i++) {
        cout << i << "=" << prime[i] << endl;
    }
    return 0;
}

