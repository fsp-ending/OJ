/*************************************************************************
	> File Name: 138.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月03日 星期日 20时36分50秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    for(int i = n; i > 0; i --){
        for(int j = 0; j < 2 * i; j++){
            cout << 'A';
        }
        cout << endl;
    }
    
    return 0;
}

