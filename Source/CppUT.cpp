#include <sstream>
#include <exception>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include "Common/CppUT.h"

using namespace std;

void Assert(bool b, const string& hint) {
    AssertEqual(b, true, hint);
}
