#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
class simpleVector
{
private :
	T* data;
	int currentSize;
	int currentCapacity;
public:
	simpleVector()
	{
		data = new T[10];
		currentSize = 0;
		currentCapacity = 10;
	}

	simpleVector (int capacity)
	{
		data = new T[capacity];
		currentSize = 0;
		currentCapacity = capacity;
	}

	~simpleVector()
	{
		delete[] data;
		data = nullptr;
	}

	T& operator[](int index)
	{
		return data[index];
	}

	void push_back(const T& value)
	{
		if (currentSize >= currentCapacity)
		{
			return;
		}
		data[currentSize] = value;
		++currentSize;
	}

	void pop_back()
	{
		--currentSize;
	}

	int Size() const
	{
		return currentSize;
	}

	int capacity() const
	{
		return currentCapacity;
	}
};

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF |_CRTDBG_LEAK_CHECK_DF);

	simpleVector<int>sv1;

	sv1.push_back(5);
	sv1.push_back(6);
	sv1.push_back(7);
	sv1.pop_back();

	for (int i = 0; i < sv1.Size(); i++)
	{
		cout << "백터1의:" << i << "번째요소" << sv1[i] << endl;
	}

	cout << "백터 1의 크기:" << sv1.Size() << endl;
	cout << "백터 1의 용량:" << sv1.capacity() << endl;
	cout << "\n==================" << endl;
}