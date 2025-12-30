
#include<iostream>

using namespace std;

int main() {
    cout<<"enter the marks of subject"<<endl;

    int math,chem,physics;
    cin>>math;
    cin>>chem;
    cin>>physics;
    

    float marks_average=(math+chem+physics)/3.0;
    cout<<"average marks="<<marks_average<< endl;

    return 0;
}