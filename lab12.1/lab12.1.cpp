﻿#include <iostream>
using namespace std;

struct Elem
{
	Elem* link1,
		* link2;
	int info;
};
Elem* p;


int main()
{
	p = new Elem;
	p->info = 1;
	p->link1 = new Elem;
	p->link1->info = 2;
	p->link1->link1 = NULL;	
	p->link1->link2 = new Elem;
	p->link1->link2->info = 3;
	p->link1->link2->link2 = NULL;
	p->link1->link2->link1 = new Elem;
	p->link1->link2->link1->info = 4;
	p->link1->link2->link1->link1 = p->link1;
	p->link1->link2->link1->link2 = p;
	
	delete p->link1->link2->link1;
	delete p->link1->link2;
	delete p->link1;
	delete p;

	return 0;
}
