#include "linkedListType.h"
using namespace std;
template <class Type>
linkedListType<Type>::linkedListType() //default constructor
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

template<class Type>
linkedListType<Type>::linkedListType(const linkedListType<Type>& otherList)
{
}

template<class Type>
linkedListType<Type>::~linkedListType()
{
	destroyList();
}

template<class Type>
void linkedListType<Type>::divideMid(linkedListType<Type>& sublist)
{

}

template <class Type>
void linkedListType<Type>::destroyList()
{
	nodeType<Type> *temp;   //pointer to deallocate the memory
	//occupied by the node
	while (first != nullptr)   //while there are nodes in the list
	{
		temp = first;
		//set temp to the current node
		first = first->link; //advance first to the next node
		delete temp;   //deallocate the memory occupied by temp
	}
	last = nullptr; //initialize last to nullptr; first has already
	//been set to nullptr by the while loop
	count = 0;
}

template <class Type>
void linkedListType<Type>::initializeList()
{
	destroyList(); //if the list has any nodes, delete them
}

template <class Type>
bool linkedListType<Type>::isEmptyList() const
{
	return (first == nullptr);
}

template <class Type>
void linkedListType<Type>::print() const
{
	nodeType<Type> *current; //pointer to traverse the list
	current = first; //set current point to the first node
	while (current != nullptr) //while more data to print
	{
		cout << current->info << " ";
		current = current->link;
	}
}
//end print

template <class Type>
int linkedListType<Type>::length() const
{
	return count;
}
/*Retrieve the Data of the First Node*/
template <class Type>
Type linkedListType<Type>::front() const
{
	assert(first != nullptr);
	return first->info; //return the info of the first node
}
//end front
/*Retrieve the Data of the Last Node*/
template <class Type>
Type linkedListType<Type>::back() const
{
	assert(last != nullptr);
	return last->info; //return the info of the last node
}
template<class Type>
Type linkedListType<Type>::returnK_Element(const Type & kthItem) const
{
	return Type();
}
template<class Type>
void linkedListType<Type>::deleteK_Element(const Type & kthItem) const
{
}
//end back
/*Begin and End*/
//template <class Type>
//linkedListIterator<Type> linkedListType<Type>::begin()
//{
//	linkedListIterator<Type> temp(first);
//	return temp;
//}
//template <class Type>
//linkedListIterator<Type> linkedListType<Type>::end()
//{
//	linkedListIterator<Type> temp(nullptr);
//	return temp;
//}


