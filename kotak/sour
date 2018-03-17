#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int g=0; g<t; g++){
        cout << "Test case" << g+1 << " : ";
        int data[4];
        for(int i=0; i<4; i++) cin >> data[i];
        sort(data,data+4);
        if(data[0]+data[1]+data[2]<=data[3])
            cout << "Bukan Ketiganya" << endl;
        else{ 
            if(data[0]==data[3])
                cout << "Persegi" << endl;
            else if(data[0]==data[1] && data[2]==data[3])
                cout << "Persegi Panjang" << endl;
            else cout << "Segi Empat" << endl;
        }
    }
    return 0;
}
