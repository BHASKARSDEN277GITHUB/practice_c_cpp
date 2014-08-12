#include<iostream>
using namespace std ;

//super class here
class superClass {

	//constructor here 
	public :
	superClass(int a) {
		cout<<"I am constructor of the superClass"<<endl;
	}
	superClass() {
	}

	virtual void method() {
		cout<<"I am method of the super class"<<endl;
	}

	
};

//derived class here 
class derivedClass : public superClass {
	
	//constructor here 
	public :
	derivedClass() {
//		new superClass(1);
		cout<<"I am constructor of derived class"<<endl;
	}

	void method() {
		cout<<"I am method of dervied class"<<endl;
	}
};


//main method to test the program
main() {
	
	//checking for normal up->down flow 
	derivedClass *pointerS;
	pointerS=new superClass(); //you cant do it . (Y)
	pointerS->method();

	//checking another way
//	derivedClass object = derivedClass();
//	object.method();
}
