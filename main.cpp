#include <iostream>
using namespace std;
//detyra e pare
double shuma(double a,double b){
    return a+b;
}
int main() {
    double num1,num2,rezultati;
    cout<<"Jepnu numrin e par";cin>>num1;
    cout<<"Jepni numrin e dyt";cin>>num2;
    rezulati=shuma(num1,num2);
    cout<<"Shuma e numrave eshte "<<rezultati;
    cout<<"\n\n";
    system("pause");
    return 0;
}
