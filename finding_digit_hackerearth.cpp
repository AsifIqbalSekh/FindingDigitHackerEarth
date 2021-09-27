#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
   //finding min and max for hash table
    int mx=INT_MIN;int mn=INT_MAX;
    
    for(int i=0;i<n;i++){
        mx=max(mx,A[i]);
        mn=min(mn,A[i]);
    } mn=-mn;
   
   //hash table for 1st array
    int P[mx+1]={0}; int N[mn+1]={0};int X[n]; int counter=0;
   


    //hash table for 2nd array
    int count=0; int Y[n];
   
    int P1[mx+1]={0}; int N1[mn+1]={0};
   
    //logic for both 1st and 2nd
    for(int i=0,j=n-1;j>0||i<n;i++,j--){
        if(A[i]>0){
            if(P[A[i]]==0){
                X[i]=counter++;
                P[A[i]]++;
            }
            else{
                
                X[i]=counter;
                if(counter>0)
                counter--;
            }
        }
        else if(A[i]<0){
            
            if(N[-A[i]]==0){
                X[i]=counter++;
                N[-A[i]]++;
            }
            else{
                
                X[i]=counter;
                if(counter>0)
                counter--;
            }
        }
        //for 2nd array
        if(A[j]>0){
            if(P1[A[j]]==0){
                Y[j]=count++;
                P1[A[j]]++;
            }
            else{
                
                Y[j]=count;
                if(counter>0)
                count--;
            }
        }
        else if(A[j]<0){
            
            if(N1[-A[j]]==0){
                Y[j]=count++;
                N1[-A[j]]++;
            }
            else{
                
                Y[j]=count;
                if(counter>0)
                count--;
            }
        }
    }


   //printing the arrays;
    for(int i=0;i<n;i++){
        cout<<X[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<Y[i]<<" ";
    }
    cout<<endl;
    return 0;
}