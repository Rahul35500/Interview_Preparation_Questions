#include<iostream>
void display(int arr[],int i,int j);
void FindLongestSubarray(int arr[],int n);
using namespace std;
int main()
{
    int arr[]={ 1, -2, 6, 4, -3, 2, -4, -3};
    int n=sizeof(arr)/sizeof(arr[0]);
    FindLongestSubarray(arr,n);
}
void FindLongestSubarray(int arr[],int n)
{
    int max_length=1;
    int ending_index;
    int curent_length=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]*arr[i-1]<0)
        {
            curent_length++;
            if(max_length<curent_length)
            {
                max_length=curent_length;
                ending_index=i;
            }
        }
        else
        {
            curent_length=1;
        }
        
    }
    display(arr,(ending_index-max_length+1),ending_index);

}
void display(int arr[],int i,int j)
{
    cout<<"Longest alternate subarray: "<<"\n" <<"{";
    for(int k=i;k<=j;k++)
    {
        cout<<arr[k]<<",";
    }
    cout<<"}";

}
