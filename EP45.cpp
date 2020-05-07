/*************************************************************************
	> File Name: EP45.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月07日 星期四 19时39分41秒
 ************************************************************************/

#include<iostream>
#include<inttypes.h>
#include<cstdio>
using namespace std;

int64_t Triangle(int64_t n) {
    return n * (n + 1) / 2;
}

int64_t Petagonal(int64_t n) {
    return n * (3 * n - 1) / 2;
}

int64_t Hexagonal(int64_t n) {
    return n * (2 * n - 1);
}

int binary_search(int64_t (*func)(int64_t n), int64_t x) {
    int64_t head = 1, tail = x, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (func(mid) == x) return mid;
        if (func(mid) > x) tail = mid - 1;
        else head = mid + 1;
  }
    return 0;
}

int main() {
    int n = 144;
    for (;; n++) {
        if (binary_search(Triangle, Hexagonal(n)) == 0) continue;
        if (binary_search(Petagonal, Hexagonal(n)) == 0) continue;
        cout << Hexagonal(n) << endl;
        break;
    }
    return 0;
}
