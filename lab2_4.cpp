#include <iostream>
using namespace std;
int main(){
    long int total = 1;
    for (int i = 8; i<16;++i){
        total*=i;
    }
    cout<<total<<endl;
    total = 1;
    int a = 0;
    cin>>a;
    int tmpa = a;
    for (tmpa; tmpa<21;++tmpa){
        total*=tmpa;
    }
    cout<<total<<endl;
    total = 1;
    int b = 0;
    cin>>b;
    int tmpb = b+1;
    for (int i = 1; i<tmpb;++i){
        total*=i;
    }
    cout<<total<<endl;
    total = 1;
    tmpa = a;
    for (tmpa; tmpa<tmpb;++tmpa){
        total*=tmpa;
    }
    cout<<total<<endl;
}