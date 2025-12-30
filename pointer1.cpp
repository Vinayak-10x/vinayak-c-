#include <iostream>
 using namespace std;
  int main(){
    int *ptr;
    int age = 25;
    ptr = &age;

    cout<<age<<"  "<<&age<<"  "<<&ptr<<endl;
    cout<<*ptr<<"  "<< &age ;

  }