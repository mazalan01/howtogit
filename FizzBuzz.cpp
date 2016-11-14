#include<iostream>

using namespace std;

void ir(){
    for(int i=0;i<=100;i++){
        if(i==1)cout<<"1";
        else cout<<i;
    }
}

void buzz(){
    for(int i=0;i<=100;i++){
        if(i%4==0)cout<<"Buzz"<<endl;
        else cout<<i<<endl;
    }
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
