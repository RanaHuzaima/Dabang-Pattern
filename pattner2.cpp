#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i=1;
    while(i<=5){
        int j=1;
        while (j<=n)
        {
            cout<<j<<" ";
            j++;
        }

        int star=i-1;
        while(star){
            cout<<"* * ";
            star--;
        }
        int k=1;
        while(k<=n){
            cout<<n-k+1<<" ";
            k++;
        }
        cout<<endl;
        n--;
        i++;
        
    }
}