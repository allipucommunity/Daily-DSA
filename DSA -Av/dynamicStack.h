#include<bits/stdc++.h>
using namespace std;

class DynamicStackArray{
    int* data;
    int nextIndex;
    int capacity;

    public:

    DynamicStackArray(){
        data=new int[5];
        nextIndex=0;
        capacity=5;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex==0;
    }

    void push(int element){
        if(nextIndex ==capacity){
            int * newData=new int[2* capacity];
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            capacity *=2;
            delete [] data;
            data=newData;
        }
        
        data[nextIndex]=element;
        nextIndex++;
    }

    int pop(){
        
        if(nextIndex==0){
            cout<<"stack is empty";
            return INT_MIN;
        }
        nextIndex--;
        

        return data[nextIndex];

    }

    int top(){
         if(nextIndex==0){
            cout<<"stack is empty";
            return INT_MIN;
        }
        return data[nextIndex-1];
    }

};