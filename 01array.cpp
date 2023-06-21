#include<iostream>
using namespace std;

// to run the c++ program in vs code the you have to first install the Mingw after that you have to type g++ <file name.cpp> in 
//terminal then program get bulid after that you have to run this program then you have to type a.exe


int main(){

	int marks[10] = {-1};

	int n;
	cout<<"Enter the no of students\n ";
	cin>>n;


	//Input
	for(int i=1; i<=n; i++){
		cout<<"Enter the array of students\n ";
		cin>> marks[i];

		marks[i] = marks[i]*2;
	}

	//Update 


	//Output
	for(int i=0;i<10;i++){
		cout<< marks[i] <<" ,";
	}
	cout <<endl;
	return 0;
}