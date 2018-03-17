#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    
    cout << "#";
    bool flag = false;
    for(int i=0; i<n*2; i++){
        if(i%2==1){
            cout << "#";
            flag=!flag;
        }else{
            if(flag) cout << "#";
            else cout << " ";
        } 
    }
    cout << endl;
    
    cout << "#";
    for(int i=0; i<n*2; i++) cout << (i%2!=0?'#':' ');
    cout << endl;
    
    cout << "#";
    flag = true;
    for(int i=0; i<n*2; i++){
        if(i%2==1){
            cout << "#";
            flag=!flag;
        }else{
            if(flag) cout << "#";
            else cout << " ";
        } 
    }
    cout << endl;
    
    return 0;
}
