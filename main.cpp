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
	Test(int _v):v(_v) { "Parameter C-tor" << endl;}
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


int main()
{
	cout << "Hello from Ubuntu 20.04 LTS " << endl;
//	test_virtual();
	test_unique_ptr();
	return 0;
}