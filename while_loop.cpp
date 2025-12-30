/*#include<iostream>
using namespace std;   
int main(){
    int i=1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }
    return 0;
}*/


//sum of first n numbers
/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}*/

// take input N followed by N numbers and print their sum
#include<iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        int number;
        cin>>number;
        sum=sum+number;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
