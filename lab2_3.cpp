#include <iostream>
using namespace std;
int n = 0;
int main(){
    for (int i = 1; i<10;++i){
        cout<<i<<" x "<<7<<" = "<<7*i<<endl;
    }
    cin>>n;
    for (int i = 1; i<10;++i){
        cout<<i<<" x "<<n<<" = "<<n*i<<endl;
    }
}