#ifndef NODETYPE_H
#define NODETYPE_H
//Definition of the node
template <class Type>
struct nodeType
{
	Type info;
	nodeType<Type> *link;
	//nodeType<Type> *next;
	//nodeType<Type> *back;
};
#endif NODETYPE_H