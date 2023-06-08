#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    //print the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;


}
int main()
{
    //declare
    int number[15];
    // accessing array
    //cout<<"value at 0 index:"<<number[13]<<endl;
    //cout<<"value at 0 index:"<<number[20]<<endl;

    //initialising array
    int second[3]={5,7,11};
    //cout<<"value at 2 index:"<<second[2]<<endl;

    int third[15]={2,7};
    int n=15;
    printArray(third,1);

    // initialising all elemnt with 0
    int forth[10]={0};
    int x=10;
    printArray(forth,1);

    int fifth[10]={5};
    int y=10;
    printArray(fifth,0);


    return 0;
}