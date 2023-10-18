#include <bits/stdc++.h>
using namespace std;

template <typename T>
class QueueArray
{
    T *data;
    int size;
    int capacity;
    int firstIndex;
    int nextIndex;

    public:

    QueueArray(int s)
    {
        data = new T[s];
        firstIndex = -1;
        nextIndex = 0;
        size=0;
        capacity = s;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {

        return size == 0;
    }

    void enqueue(T da)
    {
        if (capacity == size)
        {
            cout << "queue is full !!"<<endl;
            return;
        }
        data[nextIndex] = da;
        cout<< " endhsads  "<< data[nextIndex] ;
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }

    T dequeue()
    {
        if (isEmpty())
        {
            cout << "queue is EMPTY"<<endl;
            return 0;
        }

        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        if(size == 0) {
			firstIndex = -1;
			nextIndex = 0;
		}
        return ans;
    }

    int front()
    {
        if (isEmpty())
        {
            cout << "queue is EMPTY";
            return 0;
        }

        return data[firstIndex];
    }
};