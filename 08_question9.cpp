#include<iostream>
using namespace std;

int main(){
    int a, b ,c, d;
    char char1 = '/';
    cout<<"Enter first fraction: ";
    cin>> a >> char1 >> b;

    cout<<"Enter second fraction: ";
    cin>> c >> char1 >> d;

    float ans1, ans2;
    ans1 =  (a*d + b*c) ;
    ans2 = b*d;
    cout<<"Answer is: "<< ans1<<'/'<<ans2 <<endl;
    return 0;
}