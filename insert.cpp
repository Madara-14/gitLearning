#include<bits\stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    for(int i=0;i<10;i++){
        st.push(i*2);
    }
    //  printing 
    while(st.size()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}