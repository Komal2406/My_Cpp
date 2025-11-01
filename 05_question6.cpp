#include<iostream>
using namespace std;

int main(){
    int number;
    float answer1,answer2,answer3,answer4;
    cout<<"Enter amount in dollars"<<endl;
    cin>>number;
    answer1 = number*0.672;
    answer2 = number*5.81;
    answer3 = number*1.71;
    answer4 = number*104;
    cout<<"British pound: "<<answer1<<endl;
    cout<<"Frech franc: "<<answer2<<endl;
    cout<<"German deutschemark: "<<answer3<<endl;
    cout<<"japanese yen: "<<answer4<<endl;
    return 0;
}