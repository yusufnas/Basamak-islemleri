#include <iostream>
#include <cmath>
using namespace std;
int main()
{

int birler,onlar, yuzler;

for(int i1=1;i1<10000;i1++) {

 if (i1<10){

 if (pow(i1,3)==i1){

 cout<<i1<<endl;
 }

 } else if (i1<100){

 if (pow((i1%10),3)+pow((i1/10),3)==i1){

 cout<<i1<<endl;
 }

 } else if (i1<1000) {

 birler=i1%10;
 yuzler=i1/100;
 onlar=(i1-(100*yuzler))/10;

 if (pow(birler,3)+pow(onlar,3)+pow(yuzler,3)==i1){
 cout<<i1<<endl;
}

 } else if (i1<10000) {

 if (pow((i1%10),3)+pow((i1/1000),3)+pow((i1%1000)/100,3)+pow(((i1%1000)%100)/10,3)==i1){
 cout<<i1<<endl;
}

 }

}
 return 0;
}