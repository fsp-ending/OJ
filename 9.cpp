/*************************************************************************
	> File Name: 9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月15日 星期五 22时18分26秒
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

double NEWTONE(double (*F)(double, double), double (*f)(double), double n) {
    double x1 = n / 2.0;
    while (fabs(F(x1, n)) > EPSL) {
        x1 -= F(x1, n) / f(x1);
    }
    return x1;
}


int main() {
    double n;
    cin >> n;
    cout << NEWTONE(F, f, n) <<endl;
    return 0;
}

