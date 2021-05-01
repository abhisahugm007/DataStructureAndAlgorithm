#include<iostream>
using namespace std;
void upd(int *p){
	*p=610%255;
}
int main(){
	char ch='A';
	upd((int *)&ch);
	cout<<ch;
	
}
