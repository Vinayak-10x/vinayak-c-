/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}*/


//sum of the digit of a number
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=n;i>0;i=i/10){
        int digit=i%10;
        sum=sum+digit;
    }
    cout<<sum<<endl;
    return 0;
}