#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the number of elements of array:";
    cin>>size;
    int* array=new int[size];
    cout<<"Array elements:"<<endl;
    for (int i = 0; i < size; ++i) {
        array[i] = i + 1; 
      cout << array[i] << " ";
      cout << endl;
    }
     delete[] array;

    return 0;
}


