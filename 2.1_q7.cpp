/*
Describe an algorithm for finding both the largest and the smallest integers in a finite sequence
of integers. Write a C++ program to test your algorithm.
*/

#include <iostream>
using namespace std;
int arr[]= {5, 1, 2, 4, 8, 5, 2, 9, 1, 3};
int largest = arr[0];
int smallest = arr[0];
int main(){
    for(int i =0;i<10;i++){
        int x = arr[i];
        if(x<smallest){
            smallest = x;
        }
    }
    for(int j =0;j<10;j++){
        int y = arr[j];
        if(y>largest){
            largest = y;
        }
    }
    cout << "Smallest - " << smallest <<  " ";
    cout << "Largest - " << largest <<  " ";
    return 0;
}