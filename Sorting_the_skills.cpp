#inlcude<bits/stdc++.h>
using namespace std;

bool checksort(int *arr, int n)
{
  for(int i =0; i<n; i++)
  {
    if(arr[i]>ar[i+1]){
      if(arr[i+1] == arr[i]-1)
        {
        swap(arr[i],arr[i-1])
        }
      else
        return false;
    }
   }
   
   return true;
 }
 
 int main(){
int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  int *arr = new int[n];
  for(int i =0; i<n; i++)
  {
  cin>>arr[i];
  }
  if(checksort(arr,n))
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
  
  }
}
