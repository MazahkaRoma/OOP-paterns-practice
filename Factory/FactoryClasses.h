#pragma once
#include <iostream>

class I
{
public:
	virtual void Test() = 0;
};
class A: public I
{
public:
	A(){}
	void Test() override;
};

class B : public I
{
public:
	B(){}
	void Test() override;
};