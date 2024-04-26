#include"Stack.h"
#include<iostream>

using namespace std;

status_code Stack::push(ItemType e)
{
	status_code sc=FAILURE;
	if(IsStackFull())
	{
	
