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
	Sleep(100);//ÿ��һ��Ъ����
}

void person::start(map m)
{
	while (1) {
		changeDirection(m);
		move(m);
		if (x == 0 && y == 7) {//�յ�����
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "�ɹ�����" << endl;
			cout << endl;
			cout << endl;
			cout << "���ò�����" << step << endl;
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
	default: cout << "��ȡ�ұߴ�����ֹ����" << endl;exit(0);
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
	default: cout << "��ȡ��ߴ�����ֹ����" << endl;exit(0);
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
	default: cout << "��ȡǰ�������ֹ����" << endl;exit(0);
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
	default: cout << "��ȡ���������ֹ����" << endl;exit(0);
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
