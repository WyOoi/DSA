#include<iostream>
using namespace std;

class Array{
	public:
		Array();
		Array(int size);
		~Array();
		void Display();
		void Fill();
	private:
		int maxsize;
		int *arry;
};

Array::Array(){
	arry=new int[5];
	maxsize=5;
	cout << "create new block" << endl;
}

Array::Array(int size){
	arry=new int[size];
	maxsize = size;
	cout << "create new block" << endl;
}

Array::~Array(){
	delete [] arry;
	cout << "clear" << endl;
}

void Array::Display(){
	cout << "Display" << endl;
	int i;
	
	Array C (9);
	C.Display();
	C.Fill();
	C.Display();
	
	return 0;
}
	for(i=0;i<maxsize;i++)
		cout<<arry[i]<<endl;
}

void Array::Fill(){
	int i;
	for(i=0;i<maxsize;i++)
		arry[i]=i+0;
}

int main(){
	cout << "hello" << endl;
	
	Array B;
	B.Display();
	B.Fill();
	B.Display();
}
