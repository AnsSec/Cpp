#include <iostream>
using namespace std;
int main(){
 int n,m;
 cout<<"enter row: ";
 cin>>n;
 cout<<"enter column: ";
 cin>>m;
 for (int i=1;i<=n;i++){
    for (int j=1;j<=m;j++){
        cout<<m-j+1;
    }
    cout<<endl;
 }  
    return 0;
}
