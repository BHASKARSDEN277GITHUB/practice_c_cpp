#include<iostream>
using namespace std ;

class singleton {

		private :

		static singleton sing ;
		
		singleton() {
		}

		public :
		
		static singleton getInstance() {

			return sing ;
		}

		static void demeSingleton() {
		
			cout<<"This is a demo of singleton Class in C++"<<endl ;		}

};

singleton  singleton::sing = singleton();

//driver method to test the program 

main() {


	singleton  object = singleton::getInstance() ;
	object.demeSingleton();
}

