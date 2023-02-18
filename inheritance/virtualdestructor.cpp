#include <iostream>

using namespace std;
class Graph
{
public:
virtual ~Graph()
    {
        cout << "Graph is eaten"<<endl;
    }
};
class apple : public Graph
{
public:
    ~apple()
    {
        cout << "Apple is eaten"<<endl;
    }
};
int main()
{
    Graph *p;
    p = new apple;
    delete p;
    return 0;
}