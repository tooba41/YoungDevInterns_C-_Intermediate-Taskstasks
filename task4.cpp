#include<iostream>
using namespace std;
class SampleClass
{
private:
    int num1;
    int num2;
public:
 SampleClass(int a,int b){
     num1=a;
     num2=b;
}
void setValues(int a,int b){
    num1=a;
    num2=b;
}
void displayValues() const{
    cout<<"Value 1:"<<num1<<endl;
    cout<<"Value 2:"<<num2<<endl;
}
};
int main(){
    SampleClass obj(10,20);
    obj.displayValues();
    obj.setValues(30,40);
    obj.displayValues();
    return 0;
}

