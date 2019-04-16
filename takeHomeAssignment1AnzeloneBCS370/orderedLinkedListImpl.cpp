//#include "orderedLinkedList.h"
//using namespace std;
//
//template <class Type> bool orderedLinkedList<Type>::search(const Type& searchItem) const
//{
//	bool found = false;
//	nodeType<Type> *current; //pointer to traverse the list
//	current = linkedListType<Type>::first;  //start the search at the first node
//	while (current != nullptr && !found)
//		if (current->info >= searchItem)
//			found = true;
//		else
//			current = current->link;
//
//	if (found)
//		found = (current->info == searchItem); //test for equality
//	return found;
//}//end search
//
//template <class Type>
//void orderedLinkedList<Type>::insert(const Type& newItem)
//{
//	nodeType<Type> *current; //pointer to traverse the list
//	nodeType<Type> *trailCurrent; //pointer just before current
//	nodeType<Type> *newNode;  //pointer to create a node
//	bool found;
//	newNode = new nodeType<Type>; //create the node
//	newNode->info = newItem;   //store newItem in the node
//	newNode->link = nullptr;
//	//set the link field of the node
//	//to nullptr
//	if (linkedListType<Type>::first == nullptr)  //Case 1
//	{
//		linkedListType<Type>::first = newNode;
//		linkedListType<Type>::last = newNode;
//		count++;
//	}
//	else
//	{
//		current = linkedListType<Type>::first;
//		found = false;
//		while (current != nullptr && !found) //search the list
//			if (current->info >= newItem)
//				found = true;
//			else
//			{
//				trailCurrent = current;
//				current = current->link;
//			}
//		if (current == linkedListType<Type>::first)
//			//Case 2
//		{
//			newNode->link = linkedListType<Type>::first;
//			linkedListType<Type>::first = newNode;
//			count++;
//		}
//		else
//			//Case 3
//		{
//			trailCurrent->link = newNode;
//			newNode->link = current;
//			if (current == nullptr)
//				linkedListType<Type>::last = newNode;
//			count++;
//		}
//	}
//	//end else
//}//end insert
//
//template <class Type>
//void orderedLinkedList<Type>::deleteNode(const Type& deleteItem)
//{
//	nodeType<Type> *current; //pointer to traverse the list
//	nodeType<Type> *trailCurrent; //pointer just before current
//	bool found;
//	if (linkedListType<Type>::first == nullptr) //Case 1
//		cout << "Cannot delete from an empty list." << endl;
//	else
//	{
//		current = linkedListType<Type>::first;
//		found = false;
//		while (current != nullptr && !found)  //search the list
//			if (current->info >= deleteItem)
//				found = true;
//			else
//			{
//				trailCurrent = current;
//				current = current->link;
//			}
//		if (current == nullptr)   //Case 4
//			cout << "The item to be deleted is not in the list."
//			<< endl;
//		else
//			if (current->info == deleteItem) {//the item to be
//			//deleted is in the list
//
//				if (linkedListType<Type>::first == current)
//					//Case 2
//				{
//					linkedListType<Type>::first = linkedListType<Type>::first->link;
//					if (linkedListType<Type>::first == nullptr)
//						linkedListType<Type>::last = nullptr;
//					delete current;
//				}
//				else
//					//Case 3
//				{
//					trailCurrent->link = current->link;
//					if (current == linkedListType<Type>::last)
//						linkedListType<Type>::last = trailCurrent;
//					delete current;
//				}
//				count--;
//			}
//			else
//				//Case 4
//				cout << "The item to be deleted is not in the list." << endl;
//	}
//}//end deleteNode
//
//template <class Type>
//void orderedLinkedList<Type>::insertFirst(const Type& newItem)
//{
//	insert(newItem);
//}//end insertFirst
//
//template <class Type>
//void orderedLinkedList<Type>::insertLast(const Type& newItem)
//{
//	insert(newItem);
//}//end insertLast