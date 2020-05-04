/*************************************************************************
	> File Name: 207.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月04日 星期一 15时58分30秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

struct strudent {
    string name;
    int num[4], sum;
};

int main() {
    strudent stu[35];
    int n;
    cin >> n;
    int maxn = 0;
    int mmax = 0, mmin = 400;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        stu[i].sum = 0;
        for (int j = 0; j < 4; j++) {
            int temp;
            cin >> temp;
            stu[i].num[j] = temp;
            stu[i].sum += temp;
            if (mmax < temp) {
                mmax = temp;
            }
            if (mmin > temp) {
                mmin = temp;
            }
        }
        cout << stu[i].sum << endl;
        if (stu[maxn].sum < stu[i].sum) {
            maxn = i;
        }
    }
    cout << stu[maxn].name << endl;
    cout << mmax << " " << mmin << endl;
    return 0;
}
