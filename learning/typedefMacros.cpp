#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pair<int,string>> vp;

#define mp make_pair
#define pb push_back

#define loopo(a) for(int i =0; i< a; ++i)

int main(){

    int a;
    string name;

    cin >> a >> name;

    vp x;
    x.pb(mp(a,name));


    loopo(10){
        cout << x[0].first << endl;
        cout << x[0].second << endl; 
    }


    return 0;
}