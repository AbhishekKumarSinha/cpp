#include<iostream>
#include<memory>  //smart pointers

using namespace std;


class A
{
public: 
	virtual void fun() { cout << "A" << endl; }
};


class B:public A
{
public: 
	void fun() { cout << "B" << endl; }
};

class C:public B
{
public: 
	void fun() { cout << "C" << endl; }
};

void test_virtual()
{
	B* b = new C();
	b->fun();
}


class Test
{
public:
	Test() { cout << "C-tor" << endl; }
	Test(int _v):v(_v) { cout << "Parameter C-tor" << endl;}
	~Test() { cout << "D-tor" << endl; }
	void show() { cout << v << endl; }
	void set(int _v) { v = _v; }
private:
	int v;
};


void test_unique_ptr()
{
	unique_ptr<Test> up_obj = make_unique<Test>(20);
//	up_obj->set(10);
	up_obj->show();
}


int myAtoI(string value)
{
	int result = 0;

	int size = value.size();

	//Dry Run of Below :: value = 123

	// i = 0 -> 0 * 10 + 49 - 48 -> 0 + 1 -> 1 #ASCII of 1 is 49 & '0' is 48

	for(int i = 0; i < size; i++)
	{
		result = result * 10 + value[i] - '0'; // TIP :: 
											   //	    - Multiply with 10 & Subsctact with ASCII '0' to get INTEGER equivalent
	}

	return result;
}



int main()
{
	cout << "Hello from Ubuntu 20.04 LTS " << endl;
//	test_virtual();
	//test_unique_ptr();
	cout << myAtoI("123") << endl;
	return 0;
}