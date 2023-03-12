/*
Describe an algorithm that takes as input a list of n integers and finds the number of negative
integers in the list. Write a C++ program to test your algorithm.
*/

#include <iostream>
using namespace std;
int arr[]= {9,-3,4,-2,-5,-4};
int z = 0; //this variable will be the counter
int main(){
    for (int i=0;i<6;i++){
        int x = arr[i];
        if (x<0){
            z=z+1;
        }
    }
    cout << "The number of negative numbers is - " << z << " ";
    return 0;
}