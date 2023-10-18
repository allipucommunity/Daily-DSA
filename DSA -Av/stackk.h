#include<bits/stdc++.h>
using namespace std;

class StackArray{
    int* data;
    int nextIndex;
    int capacity;

    public:

    StackArray(int totalNum){
        data=new int[totalNum];
        nextIndex=0;
        capacity=totalNum;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex==0;
    }

    void push(int element){
        if(nextIndex ==capacity){
            cout<<"stack is full";
            return;
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