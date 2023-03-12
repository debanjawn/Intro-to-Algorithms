/*
Describe an algorithm for finding the smallest integer in a finite sequence of natural numbers.
Write a C++ program to test your algorithm.
*/

#include <iostream>
using namespace std;
int arr[]= {1,2,3,4,5,6,7,8,9,10};
int x = arr[0];
int main(){
    for (int i=0;i<10;i++){
        int y = arr[i];
        if (y<x){
            x=y;
        }
    }
    cout << "The smallest integer in this finite sequence of natural numbers - " << x << " ";
    return 0;
}