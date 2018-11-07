#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long int a;
    cout<<"請輸入你的卡號";
    cin>>a;
    cout<<"您的卡號為"<<a<<endl;
    int b=a/pow(10,15),
    c=a/100000000000000 % 10,
    d=a/10000000000000 % 10,
    e=a/1000000000000 % 10,
    f=a/100000000000 % 10,
    g=a/10000000000 % 10,
    h=a/1000000000 % 10,
    i=a/100000000 % 10,
    j=a/10000000 % 10,
    k=a/1000000 % 10,
    l=a/100000 % 10,
    m=a/10000 % 10,
    n=a/1000 % 10,
    o=a/100 % 10,
    p=a/10 % 10,
    q=a % 10,
    B=(b*2>=10)?b*2-9:b*2,
    C=c,
    D=(d*2>=10)?d*2-9:d*2,
    E=e,
    F=(f*2>=10)?f*2-9:f*2,
    G=g,
    H=(h*2>=10)?h*2-9:h*2,
    I=i,
    J=(j*2>=10)?j*2-9:j*2,
    K=k,
    L=(l*2>=10)?l*2-9:l*2,
    M=m,
    N=(n*2>=10)?n*2-9:n*2,
    O=o,
    P=(p*2>=10)?p*2-9:p*2;
    if (10-(B+C+D+E+F+G+H+I+J+K+L+M+N+O+P)%10==q){
    if (b == 4 )
        cout<<"這張卡合法"<<endl<<"這張卡是visa卡";
    else if (c+b*10 > 50 || c+b*10 < 56  )
        cout<<"這張卡合法"<<endl<<"這張卡是master卡";
    }
    else 
        cout<<"這是廢物";
        return 0;
}

