#include<iostream>
#include"msoftcon.h" //for graphicl function

//#include<borlacon.h> //for graphicl function

using namespace std;
struct circle{  //graphic circle
    float xCo,yCo;//cordinates of center
    float radius;// radius of circle
    color fillColor; //color
    fstyle fillStyle;//fill pattern

};
void drawCircle(circle c){
    set_color(c.color); //set color 
    set_fill_style(c.fillStyle); //fill pattern
    drawCircle(c.xCo, c.yCo,c.radius); //draw solid circle
}
int main(){
init graphics();//initilizing graphic

circle c1={15,7,5,cBLUE,X_FILL};
circle c2={41,12,7,cRED,O_FILL};
circle c3={65,18,4,cGREEN,MEDIUM_FILL};



drawCircle(c1);
drawCircle(c2);
drawCircle(c3);
set_cursor_pos(1,25);
return 0;



}