/*
Describe an algorithm that takes as input a list of n distinct integers and finds the location of
the largest even integer in the list or returns 0 if there are no even integers in the list. Write a
C++ program to test your algorithm
*/

#include <iostream>
using namespace std;
int arr[]= {9,2,4,-42,36,-4};
int z = 0; //this variable will save the current highest even number
int main(){
    for (int i = 0; i<6; i++){
        int x = arr[i];
        if (x>0 && x%2==0){
            z = i;
        } 
    }
        z = z+1;
        cout << "The largest even integer in the list is the number - " << z << " number in the array!" << " ";
        return 0;
}
