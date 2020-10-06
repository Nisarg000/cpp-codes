/*
	Program created by := Pure Donkey
	Datge of Cration :- 7/13/20
	Purpose :- Clear doubt of keywork 'virtual' in inheritence 
*/
#include<bits/stdc++.h>
using namespace std;

class A
{
private:
	int a,b,c;
public:
	int Display()
	{
		cout << "This is class A\n";
		return 0;
	}

	A()
	{
		cout << "Yo! I am a constructor of class A!!!\n";
	}
	~A()
	{
		cout << "Yo! I am a Deconstructor of class A!!!\n";
	}
};

class B:public virtual A
{
public:
	int Display1()
	{
		// using A::Display;

		cout << "This is class B inherited from A\n";
		return 0;
	}

	B()
	{
		cout << "Yo! I am a constructor of class B!!!\n";
	}
	~B()
	{
		cout << "Yo! I am a Deconstructor of class B!!!\n";
	}
};

class C:public virtual A
{
public:
	int Display2(){

		cout << "This is class C inherited from A\n";
		return 0;
	}

	C()
	{
		cout << "Yo! I am a constructor of class C!!!\n";
	}
	~C()
	{
		cout << "Yo! I am a Deconstructor of class C!!!\n";
	}
};

class D:public virtual A
{
public:
	int Display3()
	{
		cout << "This is class D inherited from A\n";
		return 0;
	}

	D()
	{
		cout << "Yo! I am a constructor of class D!!!\n";
	}
	~D()
	{
		cout << "Yo! I am a Deconstructor of class D!!!\n";
	}
};


class E:public B,public virtual D //here be carefull
{
public:
	int Display4()
	{
		cout << "This is class D inherited from B and D\n";
		return 0;
	}

	E()
	{
		cout << "Yo! I am a constructor of class E!!!\n";
	}
	~E()
	{
		cout << "Yo! I am a Deconstructor of class E!!!\n";
	}
};

class F:public virtual D,public C //here be carefull
{
public:
	int Display5()
	{
		cout << "This is class F inherited from B and C\n";
		return 0;
	}

	F()
	{
		cout << "Yo! I am a constructor of class F!!!\n";
	}
	~F()
	{
		cout << "Yo! I am a Deconstructor of class F!!!\n";
	}
};

class G:public E,public F
{
public:
	int Display6()
	{
		cout << "And finally G is inherited by class E and F\n";
		return 0;
	}

	G()
	{
		cout << "Yo! I am a constructor of class G!!!\n";
	}
	~G()
	{
		cout << "Yo! I am a Deconstructor of class G!!!\n";
	}
};



int main(int argc, char const *argv[])
{
	G obj;
	cout << "\n______________\n";

	/*constructors will be called upwards*/
	
	obj.A::Display();
	obj.Display1();
	obj.Display2();
	obj.Display3();
	obj.Display4();
	obj.Display5();
	obj.Display6();
	
	/*The function will be called till here*/

	cout << "\n______________\n";

	/*Deconstructers will be called here in reverse order*/
	
	return 0;
}