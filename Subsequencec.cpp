#include<bits/stdc++.h>
using namespace std ;
 void printF(int ind,vector<int>ds,int arr[], int n){
    if(ind==n){//base condition
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return ;
    }//take or print a particular index into th esubsequence
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,n);
    ds.pop_back();//not pick or not taken condition this elemetn is not added to yuor subsequence
    printF(ind+1,ds,arr,n);
}
int main(){
    int arr[]={3,1,2};
    int n = 3;
    vector<int>ds;
    printF(0,ds,arr,n);
    return 0 ;
}
