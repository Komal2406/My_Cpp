#include<iostream>
using namespace std;

int main(){
    float num, ans;
    cout<<"Enter temperature in degree celsius: "<<endl;
    cin>>num;
    ans = ((num*9)/5) +32;
    cout<< "Temperature in fahrenheit is: " <<ans<<endl;
    return 0;
}