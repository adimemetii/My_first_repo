#include <iostream>
using namespace std;
//detyra e pare
//kemi funksionet e mbledhjes,zbritjes,shumezimit

double shuma(double a,double b){
    return a+b;
}

double zbritja(double a,double b){
    return a-b
}
double shumezimi(double a,double b){
    return a*b;
}
int main() {
    double num1,num2,rezultati,rezultati2,rezultati3;
    cout<<"Jepnu numrin e par";cin>>num1;
    cout<<"Jepni numrin e dyt";cin>>num2;
    rezulati=shuma(num1,num2);
    rezultati2=zbritja(num1,num2);
    rezultati3=shumezimi(num1,num2);
    cout<<"Shuma dhe zbritja e numrave eshte "<<rezultati<<rezulati2<<rezulati3<<endl;
    cout<<"\n\n";
    system("pause");
    return 0;
}
