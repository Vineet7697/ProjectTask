#include<iostream>
#include<cmath>
using namespace std;
int  main(){
    int n1;
    cout<<"Enter the first number:";
    cin>>n1;
    char op;
    cout<<"Enter the  operator:";
    cin>>op;
    int n2;
    cout<<"Enter the second number:";
    cin>>n2;
    switch(op){
        case '+':
        cout<<"Additon:"<<n1+n2<<endl;
        break;
        case '-':
        cout<<"Subtrction:"<<n1-n2<<endl;
        break;
        case '*':
        cout<<"Multiplication:"<<n1*n2<<endl;
        break;
        case '/':
        cout<<"Division:"<<n1/n2<<endl;
        break;
    }
    return 0;
}