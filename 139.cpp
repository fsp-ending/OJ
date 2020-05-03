/*************************************************************************
	> File Name: 139.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月03日 星期日 20时38分35秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for (int j = 0; j < n-i; j++){
            cout << " ";
        }
        for(int j = 0; j < 2 * i; j++){
            cout << 'A';
        }
        cout << endl;
    }
    for(int s = n - 1; s > 0; s --){
        for (int t = 0; t < n - s; t++){
            cout << " ";
        }
        for(int t = 0; t < 2 * s; t ++){
            cout << 'A';
        }
        cout << endl;
    }
    return 0;
}

