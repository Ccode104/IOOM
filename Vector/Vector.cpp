#include <iostream>
#include <exception>
#include "Vector.h"

Vector::Vector()
{
	cout << endl
		 << endl
		 << "The Constructor of Vector Class has been Invoked!!" << endl;
	cout << "A point Vector has been set-up" << endl;
	cout << "Use Setter Methods to Create a n-dimensional vector(n>0)" << endl
		 << endl
		 << endl;
	dim = 0;
	comp = NULL;
}

unsigned int Vector::get_dim() const
{
	return this->dim;
}

int Vector::get_comp(const int &i) const
{
	int ret_val = 0;

	try
	{
		if (comp == NULL)
		{
			throw 0;
		}
		else
		{
			ret_val = this->comp[i];
			return ret_val;
		}
	}
	catch (int)
	{
		cout << "The Vector has not been Set Up!!!" << endl;
		cout << "Use Setter methods" << endl;
	}
}

Vector &Vector::set_dim(const unsigned int &d)
{
	try
	{
		if ((dim == d) && (d == 0))
		{
			throw 0;
		}
		else if (d != 0)
		{
			this->dim = d;
			if (comp != NULL)
			{
				free(this->comp);
			}
			this->comp = (int *)malloc(sizeof(int) * d);
			return (*this);
		}
	}
	catch (int a)
	{
		if (a == 0)
		{
			cout << "You cannot set the dimension to 0" << endl;
		}
	}
}

Vector &Vector::set_comp(const int &c, const int &i)
{
	try
	{
		if (comp != NULL)
		{
			this->comp[i] = c;
			return *this;
		}
		else
		{
			throw 0;
		}
	}
	catch (int)
	{
		cout << "The Vector is not set-up" << endl;
	}
}

void Vector::add(const Vector &A, const Vector &B)
{
	try
	{
		if (A.dim == B.dim)
		{
			this->set_dim(A.dim);
			if (this->dim > 0)
			{

				for (int i = 0; i < this->dim; i++)
				{
					this->comp[i] = (A.comp[i] + B.comp[i]);
				}
			}
		}
		else
		{
			throw 0;
		}
	}
	catch (int)
	{
		cout << "The Vector is not set-up" << endl;
	}
}

void Vector::sub(const Vector &A, const Vector &B)
{

	try
	{
		if (A.dim == B.dim)
		{
			this->set_dim(A.dim);
			if (this->dim > 0)
			{
				for (int i = 0; i < this->dim; i++)
				{
					this->comp[i] = (A.comp[i] - B.comp[i]);
				}
			}
		}
		else
		{
			throw 0;
		}
	}
	catch (int)
	{
		cout << "The Vectors are not of same dimension!!" << endl;
	}
}

void Vector::dot_prod(const Vector &A, const Vector &B)
{
	try
	{
		if (A.dim == B.dim)
		{
			this->set_dim(A.dim);
			if (this->dim > 0)
			{

				for (unsigned int i = 0; i < this->dim; i++)
				{
					this->comp[i] = (A.comp[i] * B.comp[i]);
				}
				//cout << endl
				//	 << "Dot Product Computed Succesfully!" << endl;
			}
		}
		else
		{
			throw 0;
		}
	}
	catch (int)
	{
		cout << "The Vector is not set-up" << endl;
	}
}

void Vector::scalar_mul(const int &k, const Vector &A)
{
	this->set_dim(A.dim);
	try
	{
		if (this->dim > 0)
		{

			for (int i = 0; i < this->dim; i++)
			{
				this->comp[i] = (k * A.comp[i]);
			}
		}
		else
		{
			throw 0;
		}
	}
	catch (int)
	{
		cout << "Vector not Initialised" << endl;
	}
}

Vector& Vector::operator=(Vector const &B)
{
	this->dim = B.dim;

	for (unsigned int i = 0; i < this->dim; i++)
	{
		this->comp[i] = B.comp[i];
	}
	return *this;
}

void Vector::print_vector()
{
	int i = 0;
	cout << endl;
	try
	{
		if (this->dim != 0)
		{
			cout << "(";
			for (i = 0; i < this->dim - 1; i++)
			{
				cout << this->comp[i] << ",";
			}
			cout << this->comp[i] << ")" << endl;
		}
	}
	catch (int)
	{
		cout << "The Vector has not been initialised!!" << endl;
	}
}