#include <iostream>
using namespace std;

void tr (){
    cout<<"condition is true"<<endl;
}
void fa(){
    cout<<"condition is false"<<endl;
}

int main(){
    int x = 0;
    int y = 0;
    int z = 0;
    cin>>x;
    cin>>y;
    cin>>z;
    if (x%2==1 && y%2==1){
        tr();
    } else {
        fa();
    }
    if (x<20 xor y<20){
        tr();
    } else{
        fa();
    }
    if (x==0 or y==0){
        tr();
    } else{
        fa();
    }
    if (x<0 and y<0 and z<0){
        tr();
    } else{
        fa();
    }
    int xcond = x%5==0;
    int ycond = y%5==0;
    int zcond = z%5==0;
    if (xcond+ycond+zcond == 1){
        tr();
    } else {
        fa();
    }
    if (x>100 or y>100 or z>100){
        tr();
    } else{
        fa();
    }
}