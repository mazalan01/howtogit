#include<iostream>

using namespace std;

void buzz(){
    for(int i=0;i<=100;i++){
        if(i%4==0)cout<<"Buzz"<<endl;
        else cout<<i<<endl;
    }
}

void irni(){
cout<<"HAHA";
}

int main(){
    for(int i=0;i<=100;i++){
        if(i%3==0){
            cout<<"Fizz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}
