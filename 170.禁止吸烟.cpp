/*************************************************************************
	> File Name: 170.禁止吸烟.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 May 2020 12:07:43 AM CST
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        while (str.find("Ban_smoking") != -1) {
            int pos = str.find("Ban_smoking");
            str.replace(pos, 11, "No_smoking");


        
    }
        cout << str << endl;
    }


    return 0;
}
