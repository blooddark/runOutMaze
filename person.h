#pragma once
#include "map.h"
#include <Windows.h>

class person
{
public:
	person();
	~person();
	void start(map m);
	void move(map m);//人物移动
	char getRight(map m);
	char getLeft(map m);
	char getFront(map m);
	char getBehind(map m);
	void changeDirection(map m);//确定方向
private:
	int x;//人物坐标X
	int y;//人物坐标Y
	int direction;//1、2、3、4分别代表上、右、下、左
	int step;//计算人物走过的总步数
};

