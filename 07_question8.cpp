#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int pop1=2425785, pop2=47, pop3=9761;

    cout<<setw(8)<<"Location"<<setw(15)<<setfill('.')<<"Population"<<endl
        <<setw(8)<<"Portcity"<<setw(15)<<setfill('.')<<"pop1"<<endl
        <<setw(8)<<"Hightown"<<setw(15)<<setfill('.')<<"pop2"<<endl
        <<setw(8)<<"Lowville"<<setw(15)<<setfill('.')<<"pop3"<<endl;
    return 0;
}