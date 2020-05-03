/*************************************************************************
	> File Name: 142.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月03日 星期日 20时43分54秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
int f(int n){
    int x = n;
    int tmp = 0;
    while(x){
    tmp = tmp * 10 + (x % 10);
    x /= 10;
    }
    return tmp == n;
}
int  init(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return 0;
    }
   return 1;
}
int main(){
    int m , n;
    cin >> m >> n;
    int cnt = 0;
    for(int i = m; i <= n; i++){
        if(init(i) && f(i)) {
            cnt == 0 || cout << " ";
            cout << i;
            cnt++;

        }
    }
    return 0;
}

