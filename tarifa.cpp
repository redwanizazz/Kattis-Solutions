#include <iostream>
using namespace std;

int main(){

    int x, n;
    cin>>x>>n;

    int p[n];
    for(int i=0; i<n; i++){
        cin>>p[i];
    } 

    int ans = x;
    for(int i=0; i<n; i++){
        ans = ans - p[i];
        ans = ans + x;
    }

    cout<<ans;

    return 0;
}
