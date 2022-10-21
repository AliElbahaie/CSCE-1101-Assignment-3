#include <iostream>
#include<vector>
#include "linkedlist.h"
using namespace std;

LinkedList List(vector<int>);
void InsertAfter(int FirstValue, int SecondValue, vector<int>& Vec);

int main()
{
	vector <int> Vector;
	int size;
	int input;
	int first, second;
	LinkedList listTest;

	cout << "Enter the size: ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter Value #" << i << ": ";
		cin >> input;
		Vector.push_back(input);
	}
	
	cout << "Enter First #: ";
	cin >> first;
	cout << "Enter Second #: ";
	cin >> second;

	InsertAfter(first, second, Vector);
	
	listTest = List(Vector);
	listTest.printList();
	
	
}

LinkedList List(vector<int> Vec)
{
	LinkedList L;
	for (int i = 0; i < Vec.size(); i++)
	{
		L.addNode(Vec.at(i));
	}
	return L;	
}



void InsertAfter(int FirstValue, int SecondValue, vector<int>& vect)
{

	for (size_t i = 0; i < vect.size(); i++) // to check FirstValue in vector: vect
	{
		if (vect[i] == FirstValue) // to check if FirstValue is the same as the elements i am standing on to add SecondValue after
		{
			vect.insert(vect.begin() + i + 1, SecondValue); // inserting SecondValue right after FirstValue
		}
	}
}
