#include<bits\stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    for(int i=0;i<10;i++){
        st.push(i*2);
    }
    cout<<st.top()<<endl;

    return 0;
}