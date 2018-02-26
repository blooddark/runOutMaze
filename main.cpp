#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include "map.h"
#include "person.h"

using namespace std;

int main(void)
{
	map m;
	person me;
	me.start(m);
	system("pause");
	return 0;
}
