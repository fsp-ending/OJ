/*************************************************************************
	> File Name: log.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月16日 星期六 12时53分33秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define DEBUG
#ifdef DEBUG
#define log(frm, args...) {\
    printf("[%s : %d] ", __func__, __LINE__);\
    printf("%s = ", #args);\
    printf(frm, ##args);\
    printf("\n");\
}
#else
#define log(frm, args...)
#endif


#define con__(a, b) a##b

int main() {
    int a = 3, abs, dfdg;
    log("%d", a);
    log("hello world");
    return 0;
}
