#pragma once
#include "map.h"
#include <Windows.h>

class person
{
public:
	person();
	~person();
	void start(map m);
	void move(map m);//�����ƶ�
	char getRight(map m);
	char getLeft(map m);
	char getFront(map m);
	char getBehind(map m);
	void changeDirection(map m);//ȷ������
private:
	int x;//��������X
	int y;//��������Y
	int direction;//1��2��3��4�ֱ�����ϡ��ҡ��¡���
	int step;//���������߹����ܲ���
};

