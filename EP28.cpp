/*************************************************************************
	> File Name: EP28.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月02日 星期六 19时05分28秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int sum = 1;
    for (int l = 3; l <= 1001; l += 2) {
        sum += 4 * l * l - 6 * l + 6;
    }
    cout << sum << endl;

    return 0;
}

