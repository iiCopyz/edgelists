#include<fstream>
#include<iostream>
using namespace std;
struct edge {struct vertex * Vertex; int weight; edge * nextedge;
    edge(edge * e = 0, struct vertex * v = 0, int w = 0)
    { Vertex = v; weight = w; nextedge = e;}
};

struct vertex {char name; vertex * nextvertex ; edge * edgelist;
    int index; bool final; vertex * pre;
    vertex(char n = '\0', vertex * v = 0){
        name = n; nextvertex = v; edgelist = 0;
        index = -1; final = false; pre = 0;
    }
};

int main(){
    char input_file[128];
    cout << "In what file is the data for the graph contained?\n> ";
    cin.getline(input_file, 128);

    ifstream infile( input_file );
    vertex * graph = 0;
    vertex * startptr = 0, * finishptr = 0;
    vertex * vertexsearch = 0, * vptr = 0;
    vertex * last;
    vertex * w;
    edge * edgeptr = 0;
    int weight;
    char start, finish, comma;
    bool startnotfound = true, finishnotfound = true;
    infile >> start >>comma >> finish >> comma >> weight;

    while( !infile.eof() ){
    /* build the edge list */
    }

    // Output the graph
    vptr = graph;
    while( vptr ){
        cout << vptr->name << "\n";
        edgeptr = vptr->edgelist;
        while( edgeptr ){
            cout << " Edge to " << edgeptr->Vertex->name
            << " with weight " << edgeptr->weight << "\n";
            edgeptr = edgeptr->nextedge;
        }
    vptr = vptr->nextvertex;
    }

// From where to where
    cout << "From where: ";
    cin >> start;
    cout <<"to where: ";
    cin >> finish;
    vertex * s = graph;
    startptr = finishptr = 0;
    while( s ){
        if( s->name == start ){
        startptr = s;
        }

        if (s->name == finish ){
        finishptr = s;
        }

        s = s->nextvertex;
    }

    if( !startptr ){
        cout << "Start point given is not a valid vertex.\n";
        return 1;
    }

    if( !finishptr ){
        cout << "Finish point given is not a valid vertex.\n";
        return 1;
    }

    last = startptr;
    last->index = 0;
    last->final = true;
    
    while( !(finishptr->final) ){
        /* Search for shortest path */
    }
    
    vptr = finishptr;
    if ( vptr->pre ){
        while( vptr ){
        cout << vptr->name << "\n";
        vptr = vptr->pre;
        } 
    } else {
    cout << "No such path.\n";
    return 0;
    }
}
