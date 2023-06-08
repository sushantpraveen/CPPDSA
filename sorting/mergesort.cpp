#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int mainArray=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArray++];
    }
    mainArray=mid+1;
    // merge 2 sorted array
    int index1=0;
    int index2=0;
    mainArray=s;
    while (index1<len1 && index2<len2)
    {
       if(first[index1]<second[index2]){
        arr[mainArray++]=first[index1++];

       }else{
        arr[mainArray++]=second[index2++];
       }
    }
    while(index1<len1){
        arr[mainArray++]=first[index1++];
    }
    while(index1<len1){
        arr[mainArray++]=first[index2++];
    }
    
}
void mergeSort(int *arr,int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    //left part sort karna h
    mergeSort(arr,s,mid);
    //right part sort karna h
    mergeSort(arr,mid+1,e);
    //merge 
    merge(arr,s,e);
}
int main()
{
    int arr[5]={2,5,1,6,9};
    int n=5;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}