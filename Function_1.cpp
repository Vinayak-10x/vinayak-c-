#include<iostream>
using namespace std;
void play_music(){
    cout<<"Playing music"<<endl;
}
void sayHi(string name){
    cout<<"Hi"+name<<endl;

}
void sayHello(string name){
    cout<<"Hello" + name;
}
int main(){
    play_music();
    sayHi("Vasundhara");
    sayHello("Vinayak ");
    sayHello("arya");
    return 0;
}