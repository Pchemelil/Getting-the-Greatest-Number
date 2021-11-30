//137339 Peter Chemelil
#include <iostream>
using namespace std;

int max(int, int, int);
int max(int a, int b, int c){
	int maximum;
	if(a > b && a > c){
		maximum = a;
	}else if(b > a && b > c){
		maximum = b;
	}else
	maximum = c;
	
	return maximum;
}

int main(){
	int a, b, c;
	char resp;
	do{
	cout<<"Input 3 numbers and I will show you the greatest:"<<endl;
	cin>>a;
	cout<<"\n";
	cin>>b;
		cout<<"\n";
	cin>>c;
		cout<<"\n";
		cout<<"The greatest number is:"<< max(a,b,c)<<endl;
		cout<<"Do you wish to continue(y/n)?";
		cin>>resp;
	}while(resp=='y');
		return 0;
}
