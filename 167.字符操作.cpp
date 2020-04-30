/*************************************************************************
	> File Name: 167.字符操作.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 May 2020 07:35:47 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main() {
    string a, b;
    int n;
    cin >> a >> n >> b;
    cout << a.size() << endl;
    cout << a.find("a") + 1 << endl;
    a = a.insert(n - 1, b);
    cout << a << endl;


    return 0;
}
