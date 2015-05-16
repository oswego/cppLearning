#pragma once

namespace FZ {

	template<typename T>
	class FZStack
	{
	public:
		FZStack() : _top(-1)
		{
			_A = new T[30];
		}
		~FZStack()
		{
			delete[] _A;
		}
		T& top()
		{
			return _A[_top];
		}
		void pop()
		{
			_top = _top - 1;
		}
		void push(const T& _value)
		{
			_top = _top + 1;
			_A[_top] = _value;
		}
		bool isEmpty()
		{
			return _top == -1 ? true : false;
		}
	private:
		size_t _top;
		T* _A;
	};

	class FZIntStack
	{
	public:
		FZIntStack();
		~FZIntStack();
		int top();
		void pop();
		void push(int x);
		bool isEmpty();
	private:
		int _top;
		int* _A;
	};

}