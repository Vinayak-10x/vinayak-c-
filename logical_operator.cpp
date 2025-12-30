#include<iostream>
using namespace std;
 int main(){
    int money=20;
    int phone=15;
    bool if_sales_is_going_on = false;
    cout<<((money>phone)&&(if_sales_is_going_on))<<endl;//and operator
    cout<<((money>phone)||(if_sales_is_going_on))<<endl;// or operator
    cout<<!((money>phone)||(if_sales_is_going_on));//not operator
    return 0;
}