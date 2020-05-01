/*************************************************************************
	> File Name: 176.寻找字符串.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 May 2020 09:17:21 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
//using namespace std;

int main() {
    char s1[1005], s2[1005];
    gets(s1);
    gets(s2);
    int ans = 0;
    int l1 = strlen(s1), l2 = strlen(s2);
    for (int i = 0; i <= l1 - l2; i++) {
        if (strncmp(s2, &s1[i], l2) == 0) {
            ans ++;
        }
    }
    printf("%d\n", ans);

    return 0;
}
