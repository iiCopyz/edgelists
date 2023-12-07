#include<iostream>
#include<cstdlib>
using namespace std;

class stack {
private:
    struct _dlink{
    char value;
    _dlink * prev, * next;
} _base;

public:
    stack();
    bool is_empty();
    char pop();
    void push(char);
    char top();
};

stack::stack() {
    _base.prev = nullptr;
    _base.next = nullptr;
}

bool stack::is_empty() {
    return _base.next == nullptr;
}

char stack::pop() {

}

void stack::push(char val) {

}

char stack::top() {

}

int main(){
    stack stk;
    stk.push(’a’);
    stk.push(’b’);
    stk.push(’c’);
    stk.push(’d’);1

    while( !stk.is_empty() ){
        cout << stk.top() << ’\n’;
        cout << stk.pop() << ’\n’;
        cout << "\n---------------------\n";
    }
}
