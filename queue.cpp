#include<iostream>
#include<cstdlib>
using namespace std;

class queue{
private:
    struct _dlink{
    char value;
    _dlink * prev, * next;
} _base;

public:
    queue();
    bool is_empty();
    char dequeue();
    void enqueue(char);
};

/* missing class methods go here. */

int main(){
    queue que;
    que.enqueue(’a’);
    que.enqueue(’b’);
    que.enqueue(’c’);
    que.enqueue(’d’);

    while( !que.is_empty() ){
        cout << que.dequeue() << ’\n’;
        cout << "\n---------------------\n";
    }
}