#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle {
    int length = 10;
    int breadth = 5;
    char x;
    float b;
};
struct Rectangle R1,R2,R3;
int main(){
    struct Rectangle R1 = {10,5};
    R1.length= 15;
    R2.x= 20;
    R2.x= 'A';
    R1.breadth= 8;
    R3.length= 12;
    R3.length= 18;
    R3.length= 16;
    R2.x= 'B';
    cout<<"Length: "<<R1.length<<endl;
    cout<<"Breadth: "<<R1.breadth<<endl;
    printf("area of rectangle: %d", R1.length * R1.breadth);
    printf("\nsize of structure R2 is : %d", sizeof(R2));
    printf("\nsize of structure R1 is; %d", sizeof(R1));
    printf("\nsize of structure R3 is; %d", sizeof(R3));
    cout<<"     sum :"<<"    "<<(int)R2.x+R1.length;
    return 0;
}