#include<iostream>
using namespace std;

int main(){
    int pounds, shillings, pence;
    int decimal_pounds, decimal_pence;
    cout<<"Enter pounds: "<<endl;
    cin>>pounds;
    cout<<"Enter pounds: "<<endl;
    cin>>shillings;
    cout<<"Enter pounds: "<<endl;
    cin>>pence;
    decimal_pounds= pounds;
    decimal_pence = shillings*5+pence*0.416;
    cout<<"Decimal pounds = "<< decimal_pounds<<'.'<<decimal_pence<<endl;
    return 0;

}