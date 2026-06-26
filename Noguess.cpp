#include <iostream>
#include <bits//stdc++.h>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n=rand()%100;
    int g=0;
    while (true){
        cout<<"enter the guess number(0-100):";
        cin>>g;
        if(n>g){
            cout<<"To high\n";
        }
        else if(n<g){
            cout<<"To lower\n";
        }
        else{
            cout<<"you won\nThe no is "<<n<<endl;
            return 0;
        }
    }
    return 0;
}