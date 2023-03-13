/*
Describe an algorithm that locates the last occurrence of the smallest element in a finite list
of integers, where the integers in the list are not necessarily distinct. Write a C++ program to
test your algorithm.
*/

#include <iostream>
using namespace std;
int arr[]= {5, 1, 2, 4, 8, 5, 2, 9, 1, 3};
int x = arr[0]; //first index of array
int ret;
int main(){
    for (int i =0;i<10;i++){
        int y = arr[i];
        if(y<x){
            x=y;
        }
    }
    for (int j =0;j<10;j++){
        int z = arr[j];
        if (z==x){
            ret = j;
        }
    }
    cout << "Index - " << ret << " has the smallest occurence of list!" << " ";
    return 0;
}