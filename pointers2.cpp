//how to use pointers on array
#include <iostream>
#include <stdio.h>
using namespace std;
#include <bits/stdc++.h>
 int main(){
    int A[5] = {5,6,3,2,9};
    int *p;
    p =A;
    for (int i=0;i<5; i++){
    std:: cout<<A[i]<<std ::endl;
    cout<<p[4-i]<<endl;
  
    }
    
    return 0;

 }





/*#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a =10;
    int *p;
    p= &a;
     cout<<a<<endl;
     printf("using pointer %d",*p);
     return 0;
}*/




/*#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
   int *p;
   p= new int[5];
   p[0]=10; p[1]=15; p[2]=14; p[3]= 21; p[4]=31;
   for (int i=0;i<5;i++)
   cout<<p[i]<<endl;
   return 0;
}*/



/*#include <iostream>*/
#include <stdio.h>
#include<stdlib.h>
using namespace std;

struct rectangle{
      int length;
      int breadth;   
};
int main(){
   int p1;
   float p2;
   char p3;
   double p4;  
   struct rectangle *p5;
   cout<<sizeof(p1)<<endl;
   cout<<sizeof(p2)<<endl;
   cout<<sizeof(p3)<<endl;
   cout<<sizeof(p4)<<endl;
   cout<<sizeof(p5)<<endl;
   return 0;   

}  


