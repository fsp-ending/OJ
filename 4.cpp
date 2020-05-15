/*************************************************************************
	> File Name: 4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月15日 星期五 22时14分55秒
 ************************************************************************/
#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

#define EPSL 1e-6

inline double F(double x, double n) {
    return x * x - n;
}

inline double f(double x) {
    return 2 * x;
}

double NewTon(double (*F)(double, double), double (*f)(double), double n) {
    double x1 = -n / 2.0;
    while (fabs(F(x1, n)) > EPSL) {
       x1 -= F(x1, n) / f(x1);
        x1 = fabs(x1);
    }
    return x1;
}



int main() {
    double n;
    while (~scanf("%lf\n", &n)) {
        printf("%g\n", NewTon(F, f, n));
    }
    return 0;
}

