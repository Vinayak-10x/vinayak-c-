#include<iostream>
using namespace std;

int main(){  
    int x;
    cin>>x;
    x % 2 ==0 ?cout<<"even"<<endl:cout<<"odd"<<endl;
    string weather;
    weather = x >=23?"Hot":"cool";
    cout<<weather;
}