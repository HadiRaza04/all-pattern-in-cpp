#include <iostream>
using namespace std;
int main(){
	int rows;
	cout<<"Enter number of rows: ";
	cin>>rows;
	for(int i=rows; i>=1; i--){
		for(int j=i; j>=1; j--){
			cout<<" *";
		}
		cout<<"\n";
	}
}
