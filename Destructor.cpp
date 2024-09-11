#include<iostream>
using namespace std;

class MultiplyNum{
	public:
		int n1;
		int n2;
		int k;
		MultiplyNum(){
			cout<<"Enter n1: ";
			cin>>n1;
			cout<<"Enter n2: ";
			cin>>n2;
			k = n1*n2;
			cout<<"Product of "<<n1<<" & "<<n2<<" is "<<k;
		}
		~MultiplyNum(){
			cout<<"\nDestructor called.";
		}
};
int main(){
	MultiplyNum m;
	return 0;
}
