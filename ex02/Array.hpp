#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
public:
	Array():array_(new T[0]()), n_(0){}
	Array(unsigned int n):array_(new T[n]()), n_(n){}
	~Array()
	{
		delete[] this->array_;
	}
	Array(Array const &other)
	{
		this->n_ = other.size();
		this->array_ = new T[this->n_];
		for (size_t i = 0; i < this->n_; i++)
			this->array_[i] = other.array_[i];
	}
	Array &operator=(Array const &other)
	{
		if (this != &other)
		{
			this->n_ = other.size();
			delete[] this->array_;
			this->array_ = new T[this->n_];
			for (size_t i = 0; i < this->n_; i++)
				this->array_[i] = other.array_[i];
		}
		return *this;
	}

	T	&operator[](unsigned int index)
	{
		if (index != 0 && index >= this->n_)
			throw std::out_of_range("its index is out of bounds");
		return this->array_[index];
	}
	T	&operator[](unsigned int index) const
	{
		if (index != 0 && index >= this->n_)
			throw std::out_of_range("its index is out of bounds");
		return this->array_[index];
	}

	unsigned int	size(void) const
	{
		return this->n_;
	}

private:
	T				*array_;
	unsigned int	n_;
};

#endif /* ARRAY_HPP */
