#include<iostream>

using namespace std;
class coordinate{
    private:
    int x;
    int y;
    public:
    coordinate(){
        x=0;
        y=0;

    }
    coordinate(int u,int i)
    {
        x=u;
        y=i;
    }
    void showData(){
        cout<<"The Final Coordinate is :"<<"("<<x<<","<<y<<")"<<endl;
    }
    friend coordinate  operator -(coordinate q, coordinate w);
};
coordinate  operator -(coordinate q, coordinate w){
    coordinate temp;
    temp.x=q.x-w.x;
    temp.y=q.y-w.y;
    return temp;

};
int main(){
    
    coordinate q(4,3);
    coordinate w(2,1);
    coordinate g;
    g=q-w;
    g.showData();
    return 0;



}