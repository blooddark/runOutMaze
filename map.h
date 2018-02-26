#pragma once
#include <iostream>

using namespace std;

const char f = '*';//墙
const char k = ' ';//空地
const char pe = 'I';//人物

class map
{
public:
	map();
	~map();
	void print(int x, int y);//刷新地图,x、y是人物坐标
	char getMap(int x, int y);//获取地图相应坐标的符号
private:
	char m[5][9];//地图
};

