#include<iostream>

using namespace std;

class stud{


		public:	
	void data(int a, int b){

			cout<<"division:-"<<a+b<<endl;
	}
	
	void data(int a,int b, int c){
	
			cout<<"subtraction:-"<<a-b-c<<endl;
	}
	void data(int a,int b,int c,int d){
	
			cout<<"multipication:-"<<a*b*c*d<<endl;
	}
	
	void data(int a,int b,int c,int d,int e){
		
			cout<<"division:-"<<a/b/c/d<<endl;
	}

};

int main(){
	
	stud obj;
	
	obj.data(40,48);
	obj.data(10,45,78,98,52);
	obj.data(12,45,89);
	obj.data(45,58,20,54);
	
	return 0;
}
