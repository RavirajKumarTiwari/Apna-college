
//DATE:- 10-08-2021
//WAP to binary search

#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){//function
    int s = 0,e = n;
    while (s <= e)
    {
        int mid = (s+e)/2;
        if (arr[mid] == key){
            cout<<"index = ";
            return mid;
            cout<<endl;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else{
            s = mid+1;
        }
        
    }
    cout <<"Not found!\n";
    return -1;
    }
int main()
{
    cout <<"Enter the size of the array :- ";
    int n;
    cin >>n;
    cout <<"Enter the elements of the array :-\n";
    int arr[n];
    for (int i = 0;i<n;i++){
        cin >>arr[i];
    }
    cout <<"Enter the element that find in the array :- ";
    int key;
    cin>>key;
    cout <<binarySearch(arr,n,key)<<endl;
    return 0;
}