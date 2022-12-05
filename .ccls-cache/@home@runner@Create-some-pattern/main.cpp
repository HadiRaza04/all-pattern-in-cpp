#include <iostream>
using namespace std;
int main(){
  int i,space, k=0;
  for(i=1; i<=7; i++){
    for(space=1; space<=(7-i); space++)
      cout<<" ";
    while(k!=(2*i-1)){
      cout<<"*";
      k++;
    }
    k=0;
    cout<<endl;
  }
  for(i=6; i>=1; i--){
    for(space=(7-i); space>=1; space--)
      cout<<" ";
    while(k!=(2*i-1)){
      cout<<"*";
      k++;
    }
    k=0;
    cout<<endl;
  }
  cout<<endl;
}