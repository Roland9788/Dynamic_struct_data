#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;

struct Elem
{
	int OwnerPoints;//Очки хозяина
	int OppPoints;//Очки соперника
	char Macth[10];//Счет
	char Name[20];//Команда
	char Oponent[20];//Соперник


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
