// Boyer Moore's Majority Voting Algorithm 
// For Finding number which is occuring more than N/2 times.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // Here Finding Maximum occuring element 
    int party=-1,votes=0;
    for(int i=0;i<n;i++){
        if(votes==0){
            party=v[i];
            votes++;
        }
        else if(party==v[i]){
            votes++;
        }
        else{
            votes--;
        }
    }
    // Checking if the element is actually occuring more than N/2 times
    votes=0;
    for(int i=0;i<n;i++){
        if(v[i]==party){
            votes++;
        }
    }
    if(votes>n/2){
        cout<<party;
    }
    else{
        cout<<-1;
    }
}