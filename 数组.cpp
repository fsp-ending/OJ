/*************************************************************************
	> File Name: 数组.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月10日 星期日 20时10分49秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

void func(int *a) {
    printf("&a = %p\n", a);
    printf("*a = %d\n", *a);
    char *p;
    printf("&a = %d\n", *a);
    printf("p = %p, p + 1 = %p\n", p, p + 1);
    return ;
}

void func2(int (*b)[9]) {
    printf("b = %p, b + 1 = %p\n", b, b + 1);
    return ;
}

void func3() {
    int **c;
    printf("c = %p, c + 1 = %p\n", c , c + 1);
}

int main() {
    int arr[100] = { 1, 2, 3 };
    char str[10] = { 0 };
    int arr2[4][9];
    printf("arr = %p, arr[1] = %p\n", arr, &arr[1]);
    printf("str = %p, str[1] = %p\n", str, &str[1]);
    int n;
    printf("arr2 = %p, arr2 + 1 = %p\n", arr2, arr2 + 1);
    func(arr);
    func2(arr2);
    func3();
    return 0;
}
