#include <iostream>
using namespace std;
int main(){
    int unit;
    cin>>unit;
    int bill=0;
    if(unit>300){
        bill=(unit-300)*12+1500;
    }
    else if((unit>200) || (unit ==300)){
        bill=(unit-200)*10+500;
    }
    else if((unit>100) ||(unit==200)){
        bill=(unit-100)*5;
    }
    else{
        bill=0;
    }
    cout<<bill;
    return 0;

}