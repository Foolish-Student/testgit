#include "test_class.h"
#include <vector>

TestClass::TestClass()
	:a(0)
{
}

TestClass::~TestClass()
{
	
}

long long TestClass::GetA()
{
	return this->a;
}
