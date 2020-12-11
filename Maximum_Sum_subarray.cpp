#include <iostream>
int KadaneAlgorithm(int arr[], int n);
using namespace std;
int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Sum Subarrary:" << //endl;
     KadaneAlgorithm(arr, n);
}
int KadaneAlgorithm(int arr[], int n)
{
    int maximum_sum = 0;
    int maximum_so_far = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<"maximum_sum"<<maximum_sum<<endl;
        maximum_sum = maximum_sum + arr[i];
         cout<<"maximum_sum2"<<maximum_sum<<endl;
        maximum_sum = max(maximum_sum, 0);
        maximum_so_far = max(maximum_so_far, maximum_sum);
    }
    return maximum_so_far;
}
