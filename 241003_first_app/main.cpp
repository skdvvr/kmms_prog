#include<iostream>
#include<random>
#include<ctime>
#include<vector>
using namespace std;

int main(){
    int q=5;
    int k=7;
    int n=10;
    vector<int>kol(k,0);
    vector<int>raz(k,0);
    
    mt19937 mt(time(nullptr));

    for (int i =0; i<n; ++i){ 
        int t=mt()%k;
        cout<<t<<" ";      
        kol[t]++;
        }
    cout<<"\n";
    for (int i=1;i<k;i++){
        kol[i]+=kol[i-1];
    } 
    int r,l;
    for (int i=0;i<q;++i){
            cin>>l>>r;
            int lb = l-1, rb=r+1;
            if (lb<0){ lb = 0;}
            if (rb>k) {rb = k-1;}
            
            cout<<kol[rb]-kol[lb];
        }
    return 0;
}