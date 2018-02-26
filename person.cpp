#include "person.h"

person::person()
{
	x = 4;
	y = 2;
	direction = 1;
	step = 0;
}


person::~person()
{
}
void person::move(map m) {
	switch (direction)
	{
	case 1:x--;break;
	case 2:y++;break;
	case 3:x++;break;
	case 4:y--;break;
	}
	m.print(x, y);
	step++;
	Sleep(100);//每走一步歇半秒
}

void person::start(map m)
{
	while (1) {
		changeDirection(m);
		move(m);
		if (x == 0 && y == 7) {//终点坐标
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "成功啦！" << endl;
			cout << endl;
			cout << endl;
			cout << "总用步数：" << step << endl;
			break;
		}
		system("cls");
	}
}

char person::getRight(map m)
{
	switch (direction)
	{
	case 1: return m.getMap(x, y + 1);
	case 2: return m.getMap(x + 1, y);
	case 3: return m.getMap(x, y - 1);
	case 4: return m.getMap(x - 1, y);
	default: cout << "获取右边错误，终止程序！" << endl;exit(0);
	}
}

char person::getLeft(map m)
{
	switch (direction)
	{
	case 1: return m.getMap(x, y - 1);
	case 2: return m.getMap(x - 1, y);
	case 3: return m.getMap(x, y + 1);
	case 4: return m.getMap(x + 1, y);
	default: cout << "获取左边错误，终止程序！" << endl;exit(0);
	}
}

char person::getFront(map m)
{
	switch (direction)
	{
	case 1: return m.getMap(x - 1, y);
	case 2: return m.getMap(x, y + 1);
	case 3: return m.getMap(x + 1, y);
	case 4: return m.getMap(x, y - 1);
	default: cout << "获取前面错误，终止程序！" << endl;exit(0);
	}
}

char person::getBehind(map m)
{
	switch (direction)
	{
	case 1: return m.getMap(x + 1, y);
	case 2: return m.getMap(x, y - 1);
	case 3: return m.getMap(x - 1, y);
	case 4: return m.getMap(x, y + 1);
	default: cout << "获取后面错误，终止程序！" << endl;exit(0);
	}
}

void person::changeDirection(map m)
{
	if (getRight(m) == k) {
		direction++;
		if (direction > 4)
			direction = 1;
	}
	else
		while (getFront(m) == f) {
			direction--;
			if (direction < 1)
				direction = 4;
		}
}
