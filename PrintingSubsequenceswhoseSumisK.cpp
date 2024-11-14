#include<bits/stdc++.h>
using namespace std ; 
void PrintS(int ind , vector<int>ds,int s,int sum ,int arr[],int n ){
    if(ind ==n){
        if(s==sum){
            for(auto it:ds){
                cout<<it<<" ";
                
            }
                cout<<endl;
            
        }
                return;
    }
        ds.push_back(arr[ind]);
        s+=arr[ind];
        PrintS(ind+1,ds,s,sum,arr, n);
        s-=arr[ind];
        ds.pop_back();
        PrintS(ind+1,ds,s,sum,arr, n);
        return;
    }

int main(){
    
    int arr[] ={1,2,1};
    int n = 3;
    vector<int>ds;
     int sum =2;
    PrintS(0,ds,0,sum,arr,n);
       return 0 ;
}
