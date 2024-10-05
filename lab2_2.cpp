#include <iostream>
#include <cmath>
using namespace std;
using byte = unsigned char;
int main (){
    pair<byte,byte> positionA;
    cin>>positionA.first>>positionA.second;
    pair<byte,byte> positionB;
    cin>>positionB.first>>positionB.second;

    if (positionA.first == positionB.first or positionA.second == positionB.second){
        cout<<"Ладья угрожает позиции Б!"<<endl;
    }
    if (abs(positionA.first-positionB.first)==abs(positionA.second-positionB.second)){
        cout<<"Слон угрожает позиции Б!"<<endl;
    }
    if (abs(positionA.first-positionB.first)<=1 and abs(positionA.second-positionB.second)<=1){
        cout<<"Король может перейти на Б!"<<endl;
    }
    if ((positionA.first == positionB.first or positionA.second == positionB.second)or(abs(positionA.first-positionB.first)==abs(positionA.second-positionB.second))){
        cout<<"Ферзь угрожает позиции Б!"<<endl;
    }
    if ((positionA.first == positionB.first) and (positionA.second+1 == positionB.second)){
        cout<<"Пешка может перейти на Б!"<<endl;
    }
    if (abs(positionA.first-positionB.second)==1 and (positionA.second+1 == positionB.second)){
        cout<<"Пешка угрожает позиции Б!"<<endl;
    }
}
