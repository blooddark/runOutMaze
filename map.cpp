#include "map.h"

map::map()
{
	char m[5][9] = {
		f,f,f,f,f,f,f,k,f,
		f,k,k,k,k,k,k,k,f,
		f,f,f,k,f,f,f,f,f,
		f,k,k,k,k,k,k,k,f,
		f,f,k,f,f,f,f,f,f
	};
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 9; j++)
			this->m[i][j] = m[i][j];
}


map::~map()
{
}

void map::print(int x, int y)
{
	for (int i = 0; i < 5; i++, cout << endl)
		for (int j = 0; j < 9; j++) {
			if (i == x && j == y) {
				cout << pe;
				continue;
			}
			cout << m[i][j];
		}
}

char map::getMap(int x, int y)
{
	if (x >= 0 && y > 0 && x < 5 && y < 9)
		return m[x][y];
	else return f;
}

