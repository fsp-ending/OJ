/*************************************************************************
	> File Name: 215.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月02日 星期六 12时07分42秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include<cstdio>
using namespace std;

struct student {
    int sum;
    string name;
};

bool cmp (student a, student b) {
    return a.sum > b.sum;
}

int main() {

    student stu[50];
    int n;
    cin >> n;
    for (int i =0; i < n; i++) {
        cin >> stu[i].name;
        stu[i].sum = 0;
        for (int j = 0; j < 4; j++) {
            int temp;
            cin >> temp;
            stu[i].sum += temp;
        }
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < 3; i++) {
        cout << stu[i].name << endl;
    }
}
