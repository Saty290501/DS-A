#include<iostream>
#include<queue>

using namespace std;
class stack{
    queue<int> q1, q2;
    public:
    void push(int x){      //O(N)
        q2.push(x); 
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }
 
    void pop(){         //O(1)
        if (q1.empty()){
            return;
        }
        q1.pop();
    }

    int top(){
        if (q1.empty())
        {
            return -1;
        }
        return q1.front();
    }
    int sze(){
        return q1.size();
    }
    
    void dis(){
        while (!q1.empty())
        {
            cout << q1.front() << " ";
            q1.pop();
        }
        
    }
};
int main(){
    stack st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    // st.dis();

    st.pop();
    st.dis();

    return 0;
}

//S.C ~ O(N)