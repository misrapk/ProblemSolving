#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int player[n];
    for (int i =0; i<n; i++){
        cin>>player[i];
    }
    //swaping
    int s =0;
    
    for(int i = n-1;i>0; i--){
        if(player[i] == i+1){
            //some conde
            player[i] = player[i];
        }
        else{
            if(player[i-1] == i+1){
                //some code
                swap(player[i-1], player[i]);
                s++;
            }
            else if(player[i-2] == i+1){
                //some code
                swap(player[i-2],player[i]);
                s++;
            }
            else{
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES\n";
    cout<<s;
    return 0;
    
    
    
    
}
