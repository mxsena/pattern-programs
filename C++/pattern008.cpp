#include <iostream>
using namespace std;
int main(void){
    int n=5;
    int x=2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<x<<" ";
            x += 2;
        }
        cout<<endl;
    }
    return 0;
}