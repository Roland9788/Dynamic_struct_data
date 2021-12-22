//#include<iostream>
//#include <string>
//#include <stdio.h> 
//#include <time.h>
//using namespace std;
//
////template<typename T>
////struct Node
////{
////	T data;
////	Node* next = 0;
////	Node* prev = 0;
////};
////template<typename T>
////class List
////{
////	Node<T>* Head;
////	Node<T>* Tail;
////	int Count = 0;
////
////public:
////	List();
////	List(const List& L);
////	~List();
////	void Print();
////	void Print2(int pos);
////	void AddHead(int n);
////	void AddTail(int n);
////	void Add(int data);
////	void Insert(int index);
////	Node<T>* GetEment(int pos);
////	void Del();
////	void Delpos(int pos);
////	void DellAll();
////	int GetCount();
////
////	List operator +(const List& L)
////	{
////		List Result(*this);
////		Node<T>* temp = L.Head;
////		while (temp != 0)
////		{
////			Result.AddTail(temp->data);
////			temp = temp->next;
////		}
////		return Result;
////	}
////
////	List operator=(const List& L)
////	{
////		if (this == &L)
////		{
////			return *this;
////		}
////		this->~List();
////		Node<T>* temp = L.Head;
////		while (temp != 0)
////		{
////			AddTail(temp->data);
////			temp = temp->next;
////		}
////		return *this;
////	}
////
////	bool operator ==(const List& L)
////	{
////		if (Count != L.Count)
////		{
////			return false;
////		}
////		Node* t1;
////		Node* t2;
////		t1 = Head;
////		t2 = L.Head;
////		while (t1 != 0)
////		{
////			//if (t1->data != t2->data)
////			//{
////			//	return false;
////			//}
////			//t1 = t1->next;
////			//t2 = t2->next;
////
////			if (t1->data == t2->data)
////			{
////				return true;
////			}
////			else
////			{
////				t1 = t1->next;
////				t2 = t2->next;
////			}
////		}
////		return true;
////	}
////
////	bool operator !=(const List& L)
////	{
////		return !(*this == L);
////	}
////
////	bool operator >=(const List& L)
////	{
////		if (Count > L.Count)
////		{
////			return true;
////		}
////		if (*this == L)
////		{
////			return true;
////		}
////		return false;
////	}
////
////	bool operator <=(const List& L)
////	{
////		if (Count < L.Count)
////		{
////			return true;
////		}
////		if (*this == L)
////		{
////			return true;
////		}
////		return false;
////	}
////
////	bool operator >(const List& L)
////	{
////		if (Count > L.Count)
////		{
////			return true;
////		}
////		return false;
////	}
////
////	bool operator <(const List& L)
////	{
////		if (Count < L.Count)
////		{
////			return true;
////		}
////		return false;
////	}
////
////	List operator - ()
////	{
////		List Result;
////		Node<T>* temp = Head;
////		while (temp != 0)
////		{
////			Result.AddHead(temp->data);
////			temp = temp->next;
////		}
////		return Result;
////	}
////
////};
////template<typename T>
////List<T>::List()
////{
////	Head = Tail = NULL;
////	Count = 0;
////}
////template<typename T>
////List<T>::List(const List& L)
////{
////	Head = Tail = NULL;
////	Count = 0;
////	//Ãîëîâà ñïèñêà èç êîòîðîãî êîïèðóåì
////	Node<T>* temp = L.Head;
////	while (temp != 0)
////	{
////		//Ïåðåäà÷à äàííûõ
////		AddTail(temp->data);
////		temp = temp->next;
////	}
////}
////template<typename T>
////List<T>::~List()
////{
////	DellAll();
////}
////template<typename T>
////void List<T>::Print()
////{
////	Node<T>* temp = Head;
////	while (temp != 0)
////	{
////		cout << temp->data << " ";
////		temp = temp->next;
////	}
////	cout << "\n\n";
////}
////template<typename T>
////void List<T>::Print2(int pos)
////{
////	if (pos<1 && pos>Count)
////	{
////		cout << "\nНеверный ввод\n";
////		return;
////	}
////	Node<T>* temp;
////
////	//int i = 1;
////	//while (i < pos)
////	//{
////	//	temp = temp->next;
////	//	i++;
////	//}
////	//if (i == pos)
////	//{
////	//	cout << temp->data;
////	//}
////
////	if (pos <= Count / 2)
////	{
////		temp = Head;
////		int i = 1;
////		while (i < pos)
////		{
////			temp = temp->next;
////			i++;
////		}
////	}
////	else
////	{
////		temp = Tail;
////		int i = 1;
////		while (i <= Count - pos)
////		{
////			temp = temp->prev;
////			i++;
////		}
////
////	}
////	cout << "\nПозиция " << pos;
////	cout << " Элемент - " << temp->data;
////
////}
////template<typename T>
////void List<T>::AddHead(int n)
////{
////	Node<T>* temp = new Node<T>;
////	temp->prev = 0;
////	temp->data = n;
////	temp->next = Head;
////	if (Head != 0)
////	{
////		Head->prev = temp;
////	}
////	if (Count == 0)
////	{
////		Head = Tail = temp;
////	}
////	else
////	{
////		Head = temp;
////	}
////	Count++;
////}
////template<typename T>
////void List<T>::AddTail(int n)
////{
////	Node<T>* temp = new Node<T>;
////	temp->prev = 0;
////	temp->data = n;
////	temp->prev = Tail;
////
////	if (Tail != 0)
////	{
////		Tail->next = temp;
////	}
////	if (Count == 0)
////	{
////		Head = Tail = temp;
////	}
////	else
////	{
////		Tail = temp;
////	}
////	Count++;
////}
////template<typename T>
////void List<T>::Add(int data)
////{
////	Node* temp = new Node;
////	temp->data = data;
////	temp->next = NULL;
////	if (Head != NULL)
////	{
////		Tail->next = temp;
////		Tail = temp;
////	}
////	else
////	{
////		Head = Tail = temp;
////	}
////}
////template<typename T>
////void List<T>::Insert(int index)
////{
////	if (index == 0)
////	{
////		cout << "\nВведите позицию\n";
////		cin >> index;
////	}
////	if (index<1 || index>Count + 1)
////	{
////		cout << "\nНевеный ввод\n";
////		return;
////	}
////	if (index == Count + 1)
////	{
////		int data;
////		cout << "\nВведите значение\n";
////		cin >> data;
////		AddTail(data);
////		return;
////	}
////	else if (index == 1)
////	{
////		int data;
////		cout << "\nВведите значение\n";
////		cin >> data;
////		AddHead(data);
////		return;
////	}
////	int i = 1;
////	Node<T>* Ins = Head;
////	while (i < index)
////	{
////		Ins = Ins->next;
////		i++;
////	}
////	Node<T>* PrevIns = Ins->prev;
////	Node<T>* temp = new Node<T>;
////	cout << "\nВведите значение\n";
////	cin >> temp->data;
////
////	if (PrevIns != 0 && Count != 1)
////	{
////		PrevIns->next = temp;
////	}
////	temp->next = Ins;
////	temp->prev = PrevIns;
////	Ins->prev = temp;
////	Count++;
////}
////template<typename T>
////Node<T>* List<T>::GetEment(int pos)
////{
////	Node<T>* temp = Head;
////	if (pos<1 || pos>Count + 1)
////	{
////		cout << "\nНевеный ввод!\n";
////		return 0;
////	}
////	int i = 1;
////	while (i < pos && temp != 0)
////	{
////		temp = temp->next;
////		i++;
////	}
////	if (temp == 0)
////	{
////		return 0;
////	}
////	else
////	{
////		return temp;
////	}
////}
////template<typename T>
////void List<T>::Delpos(int pos)
////{
////	if (pos == 0)
////	{
////		cout << "\nВведите позицию\n";
////		cin >> pos;
////	}
////	if (pos<1 || pos>Count)
////	{
////		cout << "\nНевеный ввод\n";
////		return;
////	}
////	int i = 1;
////	Node<T>* Del = Head;
////	while (i < pos)
////	{
////		Del = Del->next;
////		i++;
////	}
////	Node<T>* PrevDel = Del->prev;
////	Node<T>* AfterDel = Del->next;
////	if (PrevDel != 0 && Count != 1)
////	{
////		PrevDel->next = AfterDel;
////	}
////	if (AfterDel != 0 && Count != 1)
////	{
////		AfterDel->prev = PrevDel;
////	}
////	if (pos == 1)
////	{
////		Head = AfterDel;
////	}
////	if (pos == Count)
////	{
////		Tail = PrevDel;
////	}
////	delete Del;
////	Count--;
////
////}
////template<typename T>
////void List<T>::Del()
////{
////	Node<T>* temp = Head;
////	Head = Head->next;
////	delete[]temp;
////}
////template<typename T>
////void List<T>::DellAll()
////{
////	while (Head != 0)
////	{
////		Del();
////	}
////}
////template<typename T>
////int List<T>::GetCount()
////{
////	return Count;
////}
//
////template<class T> 
////class TestClass
////{
////	T temp;
////
////public:
////	TestClass()
////	{
////		temp = 0;
////	}
////	T testFunc();
////
////
////};
////template<class T>
////T TestClass<T>::testFunc()
////{
////	cout << "Размер типа данных -" << sizeof(temp) << "\n\n";
////	return temp;
////}
////void M()
////{
////	TestClass<char> ClassChar;
////	ClassChar.testFunc();
////
////	TestClass<int> ClassInt;
////	ClassInt.testFunc();
////
////	TestClass<double> ClassDouble;
////	ClassDouble.testFunc();
////}
//
//
//
//
//
////template<typename T>
////struct Node
////{
////	T data;
////	Node* next;
////};
////template<typename T>
////class List
////{
////	Node<T>* Head;
////	Node<T>* Tail;
////	int Count = 0;
////public:
////	List()
////	{
////		Head = Tail = NULL;
////		Count = 0;
////	}
////	~List()
////	{
////		DellAll();
////	}
////
////
////	void Print()
////	{
////		Node<T>* temp = Head;
////		int t = Count;
////		while (temp != 0 && t != 0)
////		{
////			cout << temp->data << " ";
////			temp = temp->next;
////			t--;
////		}
////		cout << "\n\n";
////	}
////	void Add(char data)
////	{
////		Node<T>* temp = new Node<T>;
////		temp->data = data;
////		temp->next = NULL;
////		if (Head != NULL)
////		{
////			Tail->next = temp;
////			Tail = temp;
////		}
////		else
////		{
////			Head = Tail = temp;
////		}
////	}
////
////	void Del()
////	{
////		Node<T>* temp = Head;
////		Head = Head->next;
////		delete[]temp;
////	}
////	void DellAll()
////	{
////		while (Head != 0)
////		{
////			Del();
////		}
////	}
////	int GetCount()
////	{
////		return Count;
////	}
////
////	List operator - ()
////	{
////		List Result;
////		Node<T>* temp = Head;
////		while (temp != 0)
////		{
////			Result.AddHead(temp->data);
////			temp = temp->next;
////		}
////		return Result;
////	}
////
////	void AddHead(T n)
////	{
////		Node<T>* temp = new Node<T>;
////		temp->data = n;
////		temp->next = Head;
////		if (Count == 0)
////		{
////			Head = Tail = temp;
////		}
////		else
////		{
////			Head = temp;
////		}
////		Count++;
////	}
////
////
////	void AddTail(T n)
////	{
////		Node<T>* temp = new Node<T>;
////		temp->data = n;
////		if (Tail != 0)
////		{
////			Tail->next = temp;
////		}
////		if (Count == 0)
////		{
////			Head = Tail = temp;
////		}
////		else
////		{
////			Tail = temp;
////		}
////		Count++;
////	}
////
////
////
////	void ListInsert(T index )
////	{
////		if (index == 0)
////		{
////			cout << "\nВведите индекс\n";
////			cin >> index;
////		}
////		if (index<1 || index>Count + 1)
////		{
////			cout << "\nНеверный ввод!\n";
////			return;
////		}
////		if (index == Count + 1)
////		{
////			T data;
////			cout << "\nВведите значение\n";
////			cin >> data;
////			AddTail(data);
////			return;
////		}
////
////		if (index == 1)
////		{
////			T data;
////			cout << "\nВведите значение\n";
////			cin >> data;
////			AddHead(data);
////			return;
////		}
////		int i = 1;
////		Node<T>* Ins = Head;
////		Node<T>* PrevIns = Head;
////		while (i < index)
////		{
////			Ins = Ins->next;
////			i++;
////		}
////		int j = 1;
////		while (i < index - 1)
////		{
////			PrevIns = PrevIns->next;
////			j++;
////		}
////
////		Node<T>* temp = new Node<T>;
////		cout << "\nÂâåäèòå äàííûå\n";
////		cin >> temp->data;
////
////		if (PrevIns != 0 && Count != 1)
////		{
////			PrevIns->next = temp;
////		}
////		temp->next = Ins;
////
////		Count++;
////
////	}
////};
//
//
//
//
//
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	//List<double> list;
//	//int a[10] = { 1,2,3,4,5,6,7,8,9 };
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	if (i % 2 == 0)
//	//	{
//	//		list.AddHead(a[i]);
//	//	}
//	//	else
//	//	{
//	//		list.AddTail(a[i]);
//	//	}
//	//}
//	//cout << "\nСписок: \n";
//	//list.Print();
//	//list.Insert(2);
//	//cout << "\nСписок: \n";
//	//list.Print();
//	//list.Print2(2);
//	//list.Print2(8);
//	//List<double> Temp;
//	//Temp = list;
//	//cout << "\nСписок 2: \n";
//	//Temp.Print();
//	//cout << "\nСписок 1 + Список 2\n";
//	//List<double> Sum = -list + Temp;
//	//Sum.Print();
//	//cout << "\nСписок 2: \n";
//	//Sum.Delpos(5);
//	//Sum.Print();
//	//cout << "\n\n\n\n";
//	//cout << Sum.GetEment(3);
//
//	//M();
//
//	//List<int> list;
//	//int a[10] = { 1,2,3,4,5,6,7,8,9 };
//	//for (int i = 0; i < 10-1; i++)
//	//{
//	//	list.AddTail(a[i]);
//	//}
//	//list.Print();
//	//list.ListInsert(7);
//	//list.Print();
//
//
//
//
//
//
//
//
//
//
//
//	//clock_t start = clock();
//	//getchar();
//	//clock_t end = clock();
//	//double seconds = (double)(end - start) / CLOCKS_PER_SEC;
//	//printf("The time: %f seconds\n", seconds);
//
//	return 0;
//}