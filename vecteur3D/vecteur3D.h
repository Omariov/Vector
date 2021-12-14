#pragma once
#include"framework.h"
#include"pch.h"
#include<assert.h>
#include<iostream>
#include<cassert>
using namespace std;
namespace Geom {
	template<class F>
	class vecteur
	{
	private:
		F vect[3];
	public:
		vecteur(F x = 0.0, F y = 0.0, F z = 0.0);
		vecteur(const vecteur&) = delete;
		vecteur& operator=(const vecteur&) = delete;
		void print() const;
		F at(unsigned int) const;
		bool operator==(const vecteur& v) const;
		bool operator!=(const vecteur& v) const;
		F& operator[](unsigned int);
		//friend void display1(vecteur& v);


	};
}
using namespace Geom;
template<class F>
vecteur<F>::vecteur(F x, F y, F z)
{
	this->vect[0] = x;
	this->vect[1] = y;
	this->vect[2] = z;
}
template<class F>
F vecteur<F>::at(unsigned int i) const
{
	assert(i >= 0 && i < 3); //debug
	try //release
	{
		if (i < 0 || i >= 3) throw "rang erre";
		return this->vect[i];
	}
	catch (char* e)
	{

	}
}

template<class F>
bool vecteur<F>::operator==(const vecteur& v) const
{
	bool res = true;
	for (int i = 0; i < 3; i++)
	{
		res = res && (this->at(i) == v.at(i));
	}
	return false;

}

template<class F>
bool vecteur<F>::operator!=(const vecteur& v) const
{
	bool res = !(*this == v);
	return res;
}
template<class F>
void vecteur<F>::print() const
{
	for (int i = 0; i < 3; i++)
	{
		cout << "vect[" << i << "]=" << this->at(i) << endl;

	}
}

template<class F>
F& vecteur<F>::operator[](unsigned int i)
{
	assert(i >= 0 && i < 3); //debug
	try //release
	{
		if (i < 0 || i >= 3) throw "rang erre";
		return this->vect[i];
	}
	catch (char* e)
	{

	}

}












