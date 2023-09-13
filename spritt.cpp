#include <iostream>
using namespace std;

int main(){

    int n, x;
    cin>>n>>x;

    int array[n];
    for (int i=0; i<n; i++){
        cin>>array[i];
    }

    int sum = 0;

    for(int j=0; j<n; j++){
        sum = array[j] + sum;
    }

    if(sum <= x){
        cout<<"Jebb";
    }

    else {
        cout<<"Neibb";
    }

    return 0;
}
