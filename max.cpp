/*************************************************************************
	> File Name: max.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月16日 星期六 11时56分52秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

#define MAX(a, b) ({\
    __typeof(a) __a = (a);\
    __typeof(b) __b = (b);\
    __a > __b ? __a : __b;\
})

int main() {
    int a = 7;
    printf("MAX(2, 3) = %d\n", MAX(2, 3));
    printf("5 + MAX(2, 3) = %d\n", 5 + (MAX(2, 3)));
    printf("MAX(2, MAX(3, 4)) = %d\n", MAX(2, MAX(3, 4)));
    printf("MAX(2, 3 > 4 ? 3 : 4) = %d\n", MAX(2, 3 > 4 ? 3 : 4));
    printf("MAX(a++, 6) = %d\n", MAX(a++, 6));
    printf("a = %d\n", a);
    return 0;
}
