/*************************************************************************
	> File Name: 140.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月03日 星期日 20时41分47秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    cin >> n;
    char a = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n -i; j++){
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++){
            cout << (char)(a + i - 1);
        }
        cout << endl;
    }
    for(int r = n - 1; r > 0; r--){
        for(int s = 1; s <= n - r; s++){
            cout << " ";
        }
        for(int t = 1; t <= 2 * r -1; t++){
            cout << (char)(a + r - 1);
        }
        cout << endl;
    }
    return 0;
}
