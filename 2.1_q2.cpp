#include <iostream>
using namespace std;
int arr[]= {9,3,4,2,5,4};
int z = 0; //this variable will save the current highest difference
int main(){
    for(int i = 0; i < 6; i++) {
        int x = arr[i];
        int y = arr[i+1];
        if(y-x>z){ //if we find another difference that is bigger than current difference then save it into z
            z = (y-x);
        }
        //cout << arr[i] << " ";  just line of code to print array
        //cout << z << " ";
        }
    cout << "The biggest difference is - " << z << " ";
    return 0;
}
