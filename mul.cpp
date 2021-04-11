#include <iostream>

int mul(int a, int b){ return a * b; }

#include <covscript/cni.hpp>
#include <covscript/dll.hpp>

CNI_ROOT_NAMESPACE {
	CNI(mul)
}