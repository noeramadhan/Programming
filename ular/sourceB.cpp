#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    bool flag = false;
    for(int j=0; j<3; j++){
        flag=(j==2&&!flag?!flag:flag);
        cout << '#';
        for(int i=0; i<n*2; i++){
            if(i%2==1){
              cout << '#';
              flag=(j!=1?!flag:flag);
            }else cout << (j!=1?(flag?'#':' '):' ');
        }
        cout << endl;
    }
    return 0;
}
