#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0; i<3; i++){
        cout << '#';
        for(int j=0; j<n; j++)
            cout << ((i==0&&j%2==1)||(i==2&&j%2==0)?"##":" #");
        cout << endl;
    }

    return 0;
}
