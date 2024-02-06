#include<iostream>
using namespace std;
int fibb(int n){
    int a=0;
    int b=1;
    int next=0;
    for (int i = 1; i < n-1; i++)
    {
        next=a+b;
        a=b;
        b=next;
        /* code */
    }
    return next;
    
}
int main(){
    int n;
    cout << "enter n :" << endl;
    cin >> n;
    int ans=fibb(n);
    cout<<ans;

return 0;
}