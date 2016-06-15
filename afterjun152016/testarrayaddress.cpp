#include<iostream>
using namespace std;

int main(){
        int array[10];
        array[0]=10;
        int *pointer = &array[0];
        cout << pointer;
        cout << "\n";
        cout << *pointer;
}
