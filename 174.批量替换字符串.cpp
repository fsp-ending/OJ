/*************************************************************************
	> File Name: 174.批量替换字符串.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 May 2020 10:05:01 AM CST
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;

char s[1000005] = {0};
char a[3000005] = {0};

int main() {
    fgets(s, 1000005, stdin);
    for (int i = 0, j = 0; s[i]; i++) {
        if (s[i] != ' '){
        a[j] = s[i];
        j++;
    } else {
        a[j] = '%';
        a[j + 1] = '2';
        a[j + 2] = '0';
        j += 3;
    }
    
}
    cout << a << endl;
    return 0;
}
