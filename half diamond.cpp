#include <iostream>
using namespace std;
int main(){
	int rows,i,j;
	cout<<"Enter number of rows: ";
	cin>>rows;
	for(i=1; i<=rows; i++){
		for(j=1; j<=i; j++){
			cout<<" *";
		}
		cout<<"\n";
	}
	for(i=(rows-1); i>=1; i--){
		for(j=i; j>=1; j--){
			cout<<" *";
		}
		cout<<"\n";
	}
	return 0;
}
