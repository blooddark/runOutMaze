#pragma once
#include <iostream>

using namespace std;

const char f = '*';//ǽ
const char k = ' ';//�յ�
const char pe = 'I';//����

class map
{
public:
	map();
	~map();
	void print(int x, int y);//ˢ�µ�ͼ,x��y����������
	char getMap(int x, int y);//��ȡ��ͼ��Ӧ����ķ���
private:
	char m[5][9];//��ͼ
};

