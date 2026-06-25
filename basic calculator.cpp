#include <iostream>
using namespace std;

int main() {
    int c;
    cout<<"1.Addition\n";
    cout<<"2.Subtraction\n";
    cout<<"3.Multiplication\n";
    cout<<"4.Division\n";
    cout<<"Enter the choice no:";
    cin>>c;
    if (c<1 || c>4){
        cout<<"Invalid Choice";
        return 0;
    }
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    int x;
    char m;
    switch(c){
        case 1:
         x=a+b;
         m='+';
         break;
        case 2:
         x=a-b;
         break;
         m='-';
        case 3:
         x=a*b;
         m='X';
         break;
        case 4:
         x=a/b;
         m='/';
         break;
    }
cout<<"Result: "<<a<<m<<b<<" = "<<x;
    return 0;
}