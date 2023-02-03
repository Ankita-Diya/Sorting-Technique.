#include <iostream>
using namespace std;

int selection_sort(int arr[],int n){
  for(int i=0;i<=n-2;i++){
    int mini=i;
    for(int j=i;j<=n-1;j++){
      if(arr[j]<arr[mini])
        mini=j;
      }
    int temp=arr[mini];
    arr[mini]=arr[i];
    arr[i]=temp;
  }
}
int main() {
  int n;
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"array element before sort:"<<endl;
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  selection_sort(arr,n);
  cout<<"Array element after sort:";
  cout<<endl;
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  return 0;
}
