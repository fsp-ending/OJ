/*************************************************************************
	> File Name: 173.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 30 Apr 2020 11:12:01 PM CST
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    char s[10005] = {0};
    gets(s);
    int end = 0, num = 0, spa = 0, oth = 0;
    for (int i = 0; s[i] != 0; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' ||
            s[i] >= 'A' && s[i] <= 'Z') {
                end++;
            } else if (s[i] >= '0' && s[i] <= '9') {
                num++;
            } else if (s[i] == ' ') {
                spa++;
            }
        else {
            oth++;
        }
    }
    cout << end << " " <<num  << " " << spa << " " << oth << endl;
    

    return 0;
}
