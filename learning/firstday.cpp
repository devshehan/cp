#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);

    int a, b;
    string name;

    cin >> a >> b >> name;

    // take entire line of string
    string sentence;
    getline(cin,sentence);


    cout << "\n Hello world" << a << "\n" << b << "\n" << name << "\n" << sentence;

    return 0;
}