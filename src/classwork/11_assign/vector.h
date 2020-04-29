//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector 
{
public:
	Vector(size_t sz);
	Vector(const Vector& v);//copy constructor-RULE OF 3 - c++98
	Vector& operator=(const Vector& v);//copy assignment-RULE OF 3 -c++98
	Vector(Vector&& v); //move constructor - RULE OF 5 C++ 11
	Vector& operator=(Vector&& v);//move assignment - RULE OF 5 C++11
	size_t Size()const { return size; }
	int& operator[](int i) { return nums[i]; }
	int& operator[](int i) const { return nums[i]; }
	~Vector();//destructor-RULE OF 3
private:
	size_t size;
	int* nums;
};

#endif

void use_vector();
Vector get_vector();