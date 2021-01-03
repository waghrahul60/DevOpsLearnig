#include<iostream> 
using namespace std; 
class Base { 
public: 
	Base()	 
	{ 
        cout<<"Constructing Base \n"; 
    } 
	~Base() 
	{ 
        cout<<"Destructing Base \n"; 
    }	 
}; 
class Derived: public Base { 
public: 
	Derived()	 
	{ 
        cout<<"Constructing Derived \n"; 
    } 
	~Derived() 
	{ 
        cout<<"Destructing Derived \n"; 
    } 
}; 
 
int main(void) 
{ 
	Derived *d = new Derived(); 
	Base *b = d; 
	delete b; 
	return 0; 
}




/*
a)

Constructing Base 
Constructing Derived 
Destructing Base
b)

Constructing Base 
Constructing Derived 
Destructing Derived
Destructing Base
c)

Constructing Base 
Constructing Derived 
Destructing Base
Destructing Derived
d)

Constructing Derived 
Constructing Base 
Destructing Base
Destructing Derived
*/
