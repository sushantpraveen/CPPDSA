 // array with function
#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[5]={10,11,15,19,39};
    printArray(arr,5);
    return 0;

}