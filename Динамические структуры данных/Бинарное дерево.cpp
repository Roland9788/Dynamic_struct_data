#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;

struct Elem
{
	int OwnerPoints;//���� �������
	int OppPoints;//���� ���������
	char Macth[10];//����
	char Name[20];//�������
	char Oponent[20];//��������


	Elem* left, * right, * parent;

};

class Tree
{
	Elem* root;
public:
	Tree()
	{

	}

	~Tree()
	{

	}

	void Print(Elem* Node);
	Elem* Serch(Elem* Node, char* key);

};



int main()
{























	return 0;
}
