#pragma once
#include <iostream>
#include <stdexcept>


namespace Queque
{
	template <typename T>
	class Queque
	{
		T* arr;
		int size;
		int topIndex;

	public:
		Queque()
		{
			this->size = 5;
			this->arr = new T[size];
			this->topIndex = 0;
		}
		~Queque()
		{
			delete[] arr;
		}
		int getTopindex()const
		{
			return topIndex;
		}
		bool isEmpty()const
		{
			return topIndex == 0;
		}
		T first()const
		{
			if(isEmpty())
			{
				throw std::runtime_error("Queque is empty");
			}
			return arr[0];
		}
		void push(T value)
		{
			if (topIndex == size)
			{
				T* newArr = new T[size *2];
				for (int i = 0; i < topIndex; i++)
				{
					newArr[i] = arr[i];
				}
				delete[] arr;
				arr = newArr;
				size *= 2;
			}
			arr[topIndex] = value;
			topIndex++;
		}
		void pop()
		{
			if (isEmpty())
			{
				throw std::runtime_error("Queque is empty");
			}
			for (int i = 0; i < topIndex - 1; i++)
			{
				arr[i] = arr[i + 1];
			}
			topIndex--;
		}
		void show()const
		{
			for (int i = 0; i < topIndex; i++)
			{
				std::cout << arr[i] << " ";
			}
			std::cout << std::endl;
		}
		const T& operator[](int index) const
		{
			if(index<0 || index>topIndex)throw std::runtime_error("Index out of range!!!");
			return arr[index];

		}

	};
}
