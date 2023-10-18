#include <bits/stdc++.h>
using namespace std;
#include "queue.h"


int main(){

    QueueArray<int> st(5);

    st.enqueue(12);
    st.enqueue(1);
    st.enqueue(1);

    cout<< st.dequeue();
    

}