#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<time.h>
//#include<cstdlib>
//#include<stdlib.h>
//#include<stdio.h>
#include<fstream>
using namespace std;
bool kapa= true;
class barrels{
    public:
    int xb=300;
    int conl=0;
    bool con=false;
    float yb=226;
    int velx = 2;
    int ik=0;
    int kl=0,xe=80;
    void drop(int &xl){
        xl++;
    }

    int edge(int xl, int yl){
       srand(time(0));
        int arr[50][50] = {{1212,1074,214},{192,354,306},{1212,1074,396},{192,308,488},{1212,1074,586}};
        if((xl==1074&&yl==237)||(xl==354&&yl==325)||(xl==1074&&yl==417)||(xl==308&&yl==509)||(xl==1074&&yl==600)){
        kl = rand()%2;
        }
        if(kl==1)xe=85;
        else{ xe=80;kl=0;}
        for(int i=0;i<5;i++){
            if(xl==arr[i][kl]&&(yl>=arr[i][2]-xe&&yl<=arr[i][2]+xe)){
                if(yl==arr[i][2]+(xe-1))
                    velx*=(-1);

                return 101;
                }

        }
    }
    void update(int &xl, float &yl){
        if(edge(xl,yl)==101){
            yl++;
        }
        else{
            if(xl<752&&yl==226){
                yl-=(0.07);
            }

           if(yl>600&&xl<=752){
                yl-=(0.07);
                    }
            yl+=(0.07);
            xl+=velx;
        }
        if(xl>200&&xl<245&&yl>655&&yl<700){xl=300;yl=226;velx*=(-1);}

        floodfill(xl,yl,COLOR(255,124,27));
    }
    void show(){
        setcolor(COLOR(255,124,27));
        setfillstyle(SOLID_FILL,COLOR(235,124,27));
        circle(xb,yb,15);
        update(xb,yb);
    }
};
void evilfactory(){
    setfillstyle(SOLID_FILL,RED);
    bar(142,142,242,242);
    bar(242,142,272,180);
    bar(272,142,302,200);
    bar(270,200,304,204);
    bar(268,204,306,208);
    setcolor(RED);
    line(142,142,180,110);
    line(180,110,180,142);
    line(180,142,218,110);
    line(218,110,218,142);
    line(218,142,256,110);
    line(256,110,256,142);
    setfillstyle(SOLID_FILL,0);
    bar(160,170,225,225);
    setcolor(WHITE);
    settextstyle(2,HORIZ_DIR,5);
    outtextxy(155,150,"DONKEY");
}
void bars(){
    setfillstyle(SOLID_FILL,WHITE);
    bar(165,170,167,225);
    bar(175,170,177,225);
    bar(185,170,187,225);
    bar(195,170,197,225);
    bar(205,170,207,225);
    bar(215,170,217,225);

}
void princess(int xp, int yp){
    int w=12;//240;
    int h=2;//40;
    int x=xp;
    int y=yp;
    setfillstyle(SOLID_FILL,COLOR(252,162,66));
    bar(x,y,x+w,y+h);//A
    bar(x-h,y+h,x+w+h,y+h*2);//B
    bar(x-h*2,y+h*2,x+2*h,y+h*3);//C
    bar(x-h*2,y+h*3,x,y+h*4);//D
    bar(x+h,y+h*3,x+h*2,y+h*4);//F
    bar(x-h,y+h*4,x+h,y+h*5);//J
    setfillstyle(SOLID_FILL,WHITE);
    bar(x,y+h*3,x+h,y+h*4);//E
    bar(x+2*h,y+h*2,x+w,y+h*3);//G
    bar(x+2*h,y+h*3,x+h*4,y+h*4);//H
    bar(x+5*h,y+h*3,x+w+h,y+h*4);//I
    bar(x+h,y+h*4,x+w,y+h*5);//K

    ////body
    x = x-2*h;
    y = y+h*5;

    setfillstyle(SOLID_FILL,COLOR(252,162,66));
    bar(x-h*3,y,x+h*2,y+h);//L
    bar(x-h*4,y-h,x-h*2,y);//M
    bar(x-h*5,y-h*2,x-h*3,y-h);//N
    bar(x-h*5,y+h,x,y+h*2);//Q
    bar(x-h*4,y+h*2,x,y+h*3);//AF
    bar(x-h*3,y+h*3,x-h*2,y+h*4);//AG
    bar(x-h*5,y+h*3,x-h*4,y+h*4);//AH
    bar(x-h*3,y+h*15,x,y+h*16);//BB
    bar(x-h*2,y+h*16,x+h,y+h*17);//BC
    bar(x+w,y+h*14,x+w+h*2,y+h*15);//BD
    bar(x+w,y+h*15,x+w+h,y+h*16);//BE
    setfillstyle(SOLID_FILL,WHITE);
    bar(x+2*h,y,x+7*h,y+h);//O
    bar(x+h*2,y+h,x+h*5,y+h*2);//R
    bar(x+h*3,y+h*2,x+h*5,y+h*3);//T
    bar(x-h*5,y+h*7,x-h*2,y+h*8);//AI
    bar(x+w,y+h*7,x+w+h*2,y+h*8);//AJ
    bar(x+w+h,y+h*8,x+w+h*2,y+h*9);//AK
    bar(x-h*3,y+h*11,x,y+w*2);//AL
    bar(x+h*3,y+h*11,x+w+h,y+w*2);//AM
    bar(x+w,y+h*10,x+w+h*2,y+h*11);//AN
    bar(x-h,y+w*2,x+h*4,y+h*13);//AT
    bar(x+w+h*2,y+w*2,x+w+h*3,y+h*13);//AU
    bar(x-h*5,y+h*13,x-h*4,y+h*14);//AV
    bar(x-h*4,y+h*14,x-h*2,y+h*15);//AW
    bar(x+h,y+h*14,x+w-h,y+h*15);//AX
    setfillstyle(SOLID_FILL,COLOR(248,121,248));
    bar(x,y+h,x+h*2,y+h*2);//P
    bar(x,y+h*2,x+h*3,y+h*3);//S
    bar(x+h*5,y+h*2,x+h*6,y+h*3);//U
    bar(x,y+h*3,x+w,y+h*4);//V
    bar(x-h,y+h*4,x+w,y+h*5);//W
    bar(x-h*2,y+h*5,x,y+h*6);//X
    bar(x+w-h,y+h*5,x+w+h,y+h*6);//Y
    bar(x-h*3,y+h*6,x-h,y+h*7);//X
    bar(x,y+h*6,x+w+h*2,y+h*7);//AA
    bar(x-h,y+h*7,x+w,y+h*8);//AB
    bar(x-h,y+h*8,x+w+h,y+h*9);//AC
    bar(x-h*2,y+h*9,x+w+h,y+h*10);//AD
    bar(x-h*2,y+h*10,x+w,y+h*11);//AE
    bar(x,y+h*11,x+h*3,y+w*2);//AO
    bar(x+w+h,y+h*11,x+w+h*4,y+w*2);//AP
    bar(x-h*4,y+w*2,x-h,y+h*13);//AQ
    bar(x+h*4,y+w*2,x+w+h*2,y+h*13);//AR
    bar(x+w+h*3,y+w*2,x+w+h*4,y+h*13);//AS
    bar(x-h*4,h*13+y,x+w+h*3,y+h*14);//AY
    bar(x-2*h,y+h*14,x+h,y+h*15);//AZ
    bar(x+w-h,y+h*14,x+w,y+h*15);//BA

}
void left(int x, int y){
    int w = 20;
    int h = 2;
    setfillstyle(SOLID_FILL,COLOR(255,0,0));
    bar(x+w+h,y,x+w*2+h,y+h);//A
    bar(x+w+h*4,y-h,x+w*2,y);//B
    setfillstyle(SOLID_FILL,COLOR(0,0,170));
    bar(x+h*13,y+h,x+w/2+h*13,y+h*2);//C
    bar(x+h*17,y+h*2,x+h*18,y+w/4+2*h);//E
    bar(x+w/4+h*12,y+h*2,x+w/4+h*13,y+w/4+2*h);//G
    bar(x+w/4+h*11,y+2*h+w/8,x+w/4+12*h,y+2*h+w/4);//H
    bar(x+w/2+h*7,y+h*2,x+w/2+h*8,y+h*3);//J
    bar(x+w/2+h*6,y+3*h,x+w/2+h*7,y+4*h);//M
    bar(x+h*16,y+4*h,x+h*19,y+5*h);//O
    bar(x+w/2+h*4,y+h*4,x+w/2+h*8,y+h*5);//Q
    setfillstyle(SOLID_FILL,COLOR(255,170,85));
    bar(x+w/2+h*7,y+h,x+w/2+h*9,y+h*2);//D
    bar(x+h*15,y+h*2,x+w/4+h*15,y+w/4+2*h);//F
    bar(x+w/4+h*10,y+2*h,x+w/2+h*10,y+h*3);//I
    bar(x+w/2+h*4,y+h*2,x+w/2+h*2+h*5,y+h*3);//K
    bar(x+w/2+h*2+h,y+h*3,x+w/2+h*2+h*4,y+h*4);//L
    bar(x+w/4+h*9,y+3*h,x+w/2+h*9,y+h*4);//N
    bar(x+h*12,y+h*4,x+w/2+h*12,y+h*5);//P
    bar(x+h*9,y+h*5,x+h*8+w,y+h*6);//R


    ////body
    y+=h*6;
    w-=h*2;

    setfillstyle(SOLID_FILL,COLOR(0,0,170));
    bar(x+h*11,y,x+w+h*11,y+h);//S
    bar(x+h*14,y+h,x+h*15+w/2,y+h*2);//T
    bar(x+h*10,y+h,x+h*12,y+h*2);//V
    bar(x+h*15,y+h*2,(x+w/2)+h*15,y+h*3);//W
    bar(x+h*14,y+h*3,x+h*15+w/2,y+h*4);//AA
    bar(x+w+h*7+w/2,y+h*4,x+w+h*8+w/2,y+h*5);//AD
    bar(x+w+h*9,y+h*7,x+w+h*9+w/2,y+h*8);//AL
    bar(x+h*10,y+h*7,x+w+h*7,y+h*8);//AM
    bar(x+w+h*8,y+h*8,x+w+h*9+w/2,y+h*9);//AN
    bar(x+h*9,y+h*8,x+w+h*7,y+h*9);//AO
    setfillstyle(SOLID_FILL,COLOR(255,0,0));
    bar(x+h*12,y+h,x+h*14,y+h*2);//U
    bar(x+h*13,y+h*2,x+h*15,y+h*3);//X
    bar(x+h*10,y+h*2,x+h*12,y+h*3);//Z
    bar(x+h*9,y+h*3,x+w+h*8,y+h*4);//AB
    bar(x+w+h*8+w/2,y+h*4,x+w+h*9+w/2,y+h*5);//AC
    bar(x+h*9,y+h*4,x+w+h*7,y+h*5);//AF
    bar(x+w+h*7+w/2,y+h*5,x+w+h*9+w/2,y+h*6);//AG
    bar(x+h*9,y+h*5,x+w+h*8,y+h*6);//AI
    bar(x+w+h*8,y+h*6,x+w+h*9+w/2,y+h*7);//AJ
    bar(x+h*10,y+h*6,x+w+h*7,y+h*7);//AK
    setfillstyle(SOLID_FILL,COLOR(255,170,85));
    bar(x+h*12,y+h*2,x+h*13,y+h*3);//Y
    bar(x+w+h*7,y+h*4,x+w+h*7+w/2,y+h*5);//AE
    bar(x+w+h*8,y+h*5,x+w+h*7+w/2,y+h*6);//AH
}
void right(int x, int y){
int w = 20;//320;
    int h = 2;//40;
    setfillstyle(SOLID_FILL,COLOR(255,0,0));
    bar(x,y,x+w,y+h);//A
    bar(x+h,y-h,x+w/2+h,y);//B
    setfillstyle(SOLID_FILL,COLOR(0,0,170));
    bar(x,y+h,x+w/2,y+h*2);//C
    bar(x-h,y+h*2,x,y+w/4+2*h);//E
    bar(x+w/4,y+h*2,x+w/4+h,y+w/4+2*h);//G
    bar(x+w/4+h,y+2*h+w/8,x+w/4+2*h,y+2*h+w/4);//H
    bar(x+w/2+h,y+h*2,x+w/2+h*2,y+h*3);//J
    bar(x+w/2+h*2,y+3*h,x+w/2+h*3,y+4*h);//M
    bar(x-2*h,y+4*h,x+h,y+5*h);//O
    bar(x+w/2+h,y+h*4,x+w/2+h*5,y+h*5);//Q
    setfillstyle(SOLID_FILL,COLOR(255,170,85));
    bar(x+w/2,y+h,x+w/2+h*2,y+h*2);//D
    bar(x,y+h*2,x+w/4,y+w/4+2*h);//F
    bar(x+w/4+h,y+2*h,x+w/2+h,y+h*3);//I
    bar(x+w/2+h*2,y+h*2,x+w/2+h*2+h*3,y+h*3);//K
    bar(x+w/2+h*2+h,y+h*3,x+w/2+h*2+h*4,y+h*4);//L
    bar(x+w/4+h*2,y+3*h,x+w/2+h*2,y+h*4);//N
    bar(x+h,y+h*4,x+w/2+h,y+h*5);//P
    bar(x+h,y+h*5,x+w,y+h*6);//R


    ////body
    y+=h*6;
    w-=h*2;

    setfillstyle(SOLID_FILL,COLOR(0,0,170));
    bar(x,y,x+w,y+h);//S
    bar(x-h,y+h,x+w/2,y+h*2);//T
    bar(x+w/2+h*2,y+h,x+w/2+h*4,y+h*2);//V
    bar(x-h,y+h*2,(x+w/2)-h,y+h*3);//W
    bar(x-h,y+h*3,x+w/2,y+h*4);//AA
    bar(x,y+h*4,x+h,y+h*5);//AD
    bar(x-h,y+h*7,x+w/2-h,y+h*8);//AL
    bar(x+w/2+h,y+h*7,x+w+h,y+h*8);//AM
    bar(x-h,y+h*8,x+w/2,y+h*9);//AN
    bar(x+w/2+h,y+h*8,x+w+h*2,y+h*9);//AO
    setfillstyle(SOLID_FILL,COLOR(255,0,0));
    bar(x+w/2,y+h,x+w/2+h*2,y+h*2);//U
    bar(x+(w/2)-h,y+h*2,x+(w/2)+h,y+h*3);//X
    bar(x+(w/2)+h*2,y+h*2,x+(w/2)+h*4,y+h*3);//Z
    bar(x+w/2,y+h*3,x+w+h*2,y+h*4);//AB
    bar(x-h,y+h*4,x,y+h*5);//AC
    bar(x+h,y+h*4,x+w+h*2,y+h*5);//AF
    bar(x-h,y+h*5,x+h,y+h*6);//AG
    bar(x+w/2,y+h*5,x+w+h*2,y+h*6);//AI
    bar(x-h,y+h*6,x+w/2,y+h*7);//AJ
    bar(x+w/2+h,y+h*6,x+w+h,y+h*7);//AK
    setfillstyle(SOLID_FILL,COLOR(255,170,85));
    bar(x+(w/2)+h,y+h*2,x+(w/2)+h*2,y+h*3);//Y
    bar(x+h,y+h*4,x+w/2+h,y+h*5);//AE
    bar(x+h,y+h*5,x+w/2,y+h*6);//AH
}
void platforms(){
    setfillstyle(SOLID_FILL,COLOR(237, 85, 181));
    setcolor(COLOR(237, 85, 181));
    int y = getmaxy()/2-140;
    int x = getmaxx()/2-550;
    bar(x,y,x+80,y+3);
    bar(x,y+20,x+80,y+23);
    line(x,y+20,x+20,y);
    line(x+20,y,x+40,y+20);
    line(x+40,y+20,x+60,y);
    line(x+60,y,x+80,y+20);
    for(int i=0;i<8;i++){
        x+=80;
        bar(x,y,x+80,y+3);
        bar(x,y+20,x+80,y+23);
        line(x,y+20,x+20,y);
        line(x+20,y,x+40,y+20);
        line(x+40,y+20,x+60,y);
        line(x+60,y,x+80,y+20);

    }
    for(int i=0;i<4;i++){
        x+=80;
        y+=3;
        bar(x,y,x+80,y+3);
        bar(x,y+20,x+80,y+23);
        line(x,y+20,x+20,y);
        line(x+20,y,x+40,y+20);
        line(x+40,y+20,x+60,y);
        line(x+60,y,x+80,y+20);

    }
    for(int i=0;i<4;i++){
     if(i%2==0){
        x+=160;
        y+=52;
    for(int i=0;i<13;i++){
        x-=80;
        y+=3;
        bar(x,y,x+80,y+3);
        bar(x,y+20,x+80,y+23);
        line(x,y+20,x+20,y);
        line(x+20,y,x+40,y+20);
        line(x+40,y+20,x+60,y);
        line(x+60,y,x+80,y+20);
    }
     }else{
        x-=160;
        y+=52;
    for(int i=0;i<13;i++){
        x+=80;
        y+=3;
        bar(x,y,x+80,y+3);
        bar(x,y+20,x+80,y+23);
        line(x,y+20,x+20,y);
        line(x+20,y,x+40,y+20);
        line(x+40,y+20,x+60,y);
        line(x+60,y,x+80,y+20);
    }
    }}
        x+=160;
        y+=60;

    for(int i=0;i<7;i++){
        x-=80;
        y+=3;
        bar(x,y,x+80,y+3);
        bar(x,y+20,x+80,y+23);
        line(x,y+20,x+20,y);
        line(x+20,y,x+40,y+20);
        line(x+40,y+20,x+60,y);
        line(x+60,y,x+80,y+20);
    }
    for(int i=0;i<7;i++){
        x-=80;
        bar(x,y,x+80,y+3);
        bar(x,y+20,x+80,y+23);
        line(x,y+20,x+20,y);
        line(x+20,y,x+40,y+20);
        line(x+40,y+20,x+60,y);
        line(x+60,y,x+80,y+20);
    }
}
void ladders(){
    int y = getmaxy()/2-142;
    int y_ = y;
    int x = getmaxx()/2-550;
    setcolor(LIGHTCYAN);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    x+=(80*4)+5;
    for(int i=0;i<13;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    x+=80;
    y = y_;
    for(int i=0;i<13;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    x+=(80*3);
    y = y_;
    for(int i=0;i<5;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    x-=199;
    y+=141;
    y_ = y;
    for(int i=0;i<3;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    y-=38;
    bar(x,y,x+3,y+12);
    bar(x+30,y,x+33,y+12);
    line(x,y+6,x+32,y+6);
    x+=(80*6);
    y = y_;
    y-=18;
    for(int i=0;i<4;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    y+=88;
    x-=80;
    for(int i=0;i<2;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    y+=88;
    for(int i=0;i<2;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    x-=(80*6);
    y++;
    y_ = y;
    for(int i=0;i<5;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    x-=160;
    y = y_;
    y-=6;
    for(int i=0;i<4;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    y = y_;
    y+=46;
    x+=(80*2)-45;

    for(int i=0;i<2;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    y+=80;
    for(int i=0;i<2;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    x+=(80*3);
    y+=9;
    y_ = y;
    for(int i=0;i<6;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    y = y_;
    x+=(80*4)+45;
    y-=9;
    for(int i=0;i<4;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    y = y_;
    y+=92;
    x-=(80*5)+45;
    for(int i=0;i<6;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    y+=49;
    x-=(80*4);
    for(int i=0;i<4;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    x+=(80*3);
    y+=75;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    y+=75;
    for(int i=0;i<2;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }
    x+=(80*6)+45;
    y+=10;
    for(int i=0;i<5;i++){
        y-=10;
        bar(x,y,x+3,y+12);
        bar(x+30,y,x+33,y+12);
        line(x,y+6,x+32,y+6);
    }

}
int check(int xl, int yl){
    if(yl<=670&&yl>=652){
        int arr[]= {752,832,912,992,1072,1152};
        for(int i=0;i<6;i++){
            if(xl==arr[i]){
                return 10;
            }
        }
    }
    if((yl<=589&&yl>=553)||(yl<=407&&yl>=371)){
        int arr1[]= {1092,1012,932,852,772,692,612,532,452,372,292,212};
        for(int i=0;i<12;i++){
            if(xl==arr1[i]){
                return 20;
            }
        }
    }
    if((yl>=462&&yl<=498)||(yl>=280&&yl<=316)){
        int arr2[] = {272,352,432,512,592,672,752,832,912,992,1072,1152};
        for(int i=0;i<12;i++){
            if(xl==arr2[i]){
                return 30;
            }
        }
    }
    if(yl>=213&&yl<=225){
        int arr3[] = {1094,1014,934,854};
        for(int i=0;i<4;i++){
            if(xl==arr3[i]){
                return 40;
            }
        }
    }
    return 1;
}
int ladcheck(int xl, int yl){
            if((xl >= 1054 && xl <= 1072 && yl <= 658 && yl >= 586)||
            (xl <= 630 && xl >= 613 && yl >= 483 && yl <=571)||
            (xl <= 310 && xl >= 293 && yl >= 495  && yl <=559)||
            (xl <= 710 && xl >= 693 && yl >= 392  && yl <=480)||
            (xl <= 1072 && xl >= 1055 && yl >= 404  && yl <=468)||
            (xl <= 512 && xl >= 495 && yl >= 307  && yl <=383)||
            (xl <= 352 && xl >= 335 && yl >= 313  && yl <=377)||
            (xl <= 1072 && xl >= 1055 && yl >= 222  && yl <=286)){
                return 273;
            }
}
int acc(int xl, int yl){
    int arr[50][50][50] = {
        {{135,752,670},{773,832,667},{853,912,664},{933,992,661},{1013,1072,658},{1093,1152,655},{1173,1232,652}},
        {{1093,1152,589},{1013,1072,586},{933,992,583},{853,912,580},{773,832,577},{693,752,574},{613,672,571},{533,592,568},{453,512,565},{373,532,562},{293,352,559},{213,272,556},{133,192,553}},
        {{213,272,498},{293,352,495},{373,432,492},{453,512,489},{533,592,486},{613,672,483},{693,752,480},{773,832,477},{853,912,474},{933,992,471},{1013,1072,468},{1093,1152,465},{1173,1232,462}},
        {{1093,1152,407},{1013,1072,404},{933,992,401},{853,912,398},{773,832,395},{693,752,392},{613,672,389},{533,592,386},{453,512,383},{373,532,380},{293,352,377},{213,272,374},{133,192,371}},
        {{213,272,316},{293,352,313},{373,432,310},{453,512,307},{533,592,304},{613,672,301},{693,752,298},{773,832,295},{853,912,292},{933,992,289},{1013,1072,286},{1093,1152,283},{1173,1232,280}},
        {{1093,1152,225},{1013,1072,222},{933,992,219},{853,912,216},{133,832,213}}
                        };
    int arrlen[]={7,13,13,13,13,5};
    for(int i=0;i<6;i++){
        for(int j = 0;j<arrlen[i];j++){
            for(int k = arr[i][j][0];k<arr[i][j][1];k++){
                if((xl==k&&yl==arr[i][j][2])||(xl>=arr[i][j][1]&&xl<=arr[i][j][1]+21)||(ladcheck(xl,yl)==273)){
                    return 243;
                }
            }
        }
    }
    }
void jump(int xl, int &yl){

        for(int i=0;i<15;i++){
            yl--;
        }
}
void oil(){
    setfillstyle(SOLID_FILL,COLOR(0,4,223));
    bar(200,655,245,700);
    setfillstyle(SOLID_FILL,COLOR(6,100,191));
    bar(198,654,247,657);
    bar(198,697,247,700);
    setfillstyle(SOLID_FILL,COLOR(20,210,213));
    line(199,665,245,665);
    line(199,683,245,683);
    settextstyle(2,HORIZ_DIR,5);
    outtextxy(209,668,"OIL");
}
void barrel(int &x, int &y){
    if(y==60){
        x--;
    }
    else{
        y+=2;
    }
    if(x>=240){
        setcolor(COLOR(255,124,27));
        setfillstyle(SOLID_FILL,COLOR(235,124,27));
        circle(x,y,15);
        floodfill(x,y,COLOR(255,124,27));
    }
}
void donkey(int x, int y){
    setfillstyle(SOLID_FILL,COLOR(34,179,255));
    setcolor(COLOR(11,2,233));
    int h = 30;
    bool k=false;
    int arr[] = {2,3,7,9,10,12,14,15,17,21,23,1,3,5,7,10,12,14,16,17,19,20,21,23,1,3,5,7,12,16,17,21,1,3,5,7,9,12,14,16,17,19,20,21,22,24,2,3,7,9,10,12,14,15,17,21,22,24};
    for(int i=0; i<25;i++){
        for(int j=0;j<11;j++)
            if(arr[j]==i)k = true;
        if(k==true){k=false;continue;}
        ellipse(x+h*i+15,y+11,0,360,15,9);
        bar(x+h*i,y,x+h*(1+i),y+3);
        bar(x+h*i,y+19,x+h*(1+i),y+22);
    }
    y=y+22;
    k=false;
    for(int i=0; i<25;i++){
        for(int j=11;j<24;j++)
            if(arr[j]==i){k = true;}
        if(k==true){k=false;continue;}
        ellipse(x+h*i+15,y+11,0,360,15,9);
        bar(x+h*i,y,x+h*(1+i),y+3);
        bar(x+h*i,y+19,x+h*(1+i),y+22);
    }
    y=y+22;
    k=false;
    for(int i=0; i<25;i++){
        for(int j=24;j<32;j++)
            if(arr[j]==i){k = true;}
        if(k==true){k=false;continue;}
        ellipse(x+h*i+15,y+11,0,360,15,9);
        bar(x+h*i,y,x+h*(1+i),y+3);
        bar(x+h*i,y+19,x+h*(1+i),y+22);
    }
    y=y+22;
    k=false;
    for(int i=0; i<25;i++){
        for(int j=32;j<46;j++)
            if(arr[j]==i){k = true;}
        if(k==true){k=false;continue;}
        ellipse(x+h*i+15,y+11,0,360,15,9);
        bar(x+h*i,y,x+h*(1+i),y+3);
        bar(x+h*i,y+19,x+h*(1+i),y+22);
    }
    y=y+22;
    k=false;
    for(int i=0; i<25;i++){
        for(int j=46;j<58;j++)
            if(arr[j]==i){k = true;}
        if(k==true){k=false;continue;}
        ellipse(x+h*i+15,y+11,0,360,15,9);
        bar(x+h*i,y,x+h*(1+i),y+3);
        bar(x+h*i,y+19,x+h*(1+i),y+22);
    }
}
void kong(int x ,int y){
    setfillstyle(SOLID_FILL,COLOR(34,179,255));
    setcolor(COLOR(11,2,233));
    int h = 30;
    bool k=false;
    int arr[] = {2,4,9,11,12,14,15,19,4,7,9,12,14,17,18,19,3,4,7,9,14,17,2,4,7,9,11,14,17,18,2,4,9,11,12,14,15,19};
    for(int i=0; i<20;i++){
        for(int j=0;j<8;j++)
            if(arr[j]==i)k = true;
        if(k==true){k=false;continue;}
        ellipse(x+h*i+15,y+11,0,360,15,9);
        bar(x+h*i,y,x+h*(1+i),y+3);
        bar(x+h*i,y+19,x+h*(1+i),y+22);
    }

    y=y+22;
    k=false;
    for(int i=0; i<20;i++){
        for(int j=8;j<16;j++)
            if(arr[j]==i){k = true;}
        if(k==true){k=false;continue;}
        ellipse(x+h*i+15,y+11,0,360,15,9);
        bar(x+h*i,y,x+h*(1+i),y+3);
        bar(x+h*i,y+19,x+h*(1+i),y+22);
    }
    y=y+22;
    k=false;
    for(int i=0; i<20;i++){
        for(int j=16;j<22;j++)
            if(arr[j]==i){k = true;}
        if(k==true){k=false;continue;}
        ellipse(x+h*i+15,y+11,0,360,15,9);
        bar(x+h*i,y,x+h*(1+i),y+3);
        bar(x+h*i,y+19,x+h*(1+i),y+22);
    }
        y=y+22;
    k=false;
    for(int i=0; i<20;i++){
        for(int j=22;j<30;j++)
            if(arr[j]==i){k = true;}
        if(k==true){k=false;continue;}
        ellipse(x+h*i+15,y+11,0,360,15,9);
        bar(x+h*i,y,x+h*(1+i),y+3);
        bar(x+h*i,y+19,x+h*(1+i),y+22);
    }
        y=y+22;
    k=false;
    for(int i=0; i<20;i++){
        for(int j=30;j<38;j++)
            if(arr[j]==i){k = true;}
        if(k==true){k=false;continue;}
        ellipse(x+h*i+15,y+11,0,360,15,9);
        bar(x+h*i,y,x+h*(1+i),y+3);
        bar(x+h*i,y+19,x+h*(1+i),y+22);
    }
}
void menu(){
    donkey(300,200);
    kong(370,350);
    setcolor(WHITE);
    settextstyle(2,HORIZ_DIR,8);
    outtextxy(500,600,"PRESS ANY KEY TO START");
}
void sortaf(int arr[],char str[50][50], int n){
    int temp;
    char t2[10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                strcpy(t2,str[j]);
                temp=arr[j];
                strcpy(str[j],str[j+1]);
                arr[j]=arr[j+1];
                strcpy(str[j+1],t2);
                arr[j+1]=temp;
            }
        }
    }
}
struct ini{
    char name[5];
    int score;
};
void fin(int scr){
    char ch;
    char che[1];
    int x=300;
    ini s;
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(150,150,"ENTER  YOUR  NAME");
    for(int i=0;i<5;i++){
        ch = getch();
        ch = toupper(ch);
        settextstyle(2,HORIZ_DIR,10);
        sprintf(che,"%c",ch);
        outtextxy(x,250,che);
        s.name[i] = ch;
        x+=40;
    }
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(800,150,"SCORE");
    char cho[10];
    int score=scr;
    s.score = score;
    for(int i=0;i<=score;i++){
        settextstyle(2,HORIZ_DIR,10);
        sprintf(cho,"%d",i);
        outtextxy(825,250,cho);
    }
    delay(500);
    fstream file;
    file.open("records.dat",ios::binary|ios::out|ios::app);
    if(!file)cout<<"err";
    file.write((char*)&s,sizeof(s));
    file.close();
    file.open("records.dat",ios::binary|ios::in);
    int arr[50]={0};
    char str[50][50]={""};
    int k=0;
    while(file.read((char*)&s,sizeof(s))){
        arr[k]=s.score;
        strcpy(str[k],s.name);
        k++;
    }
    file.close();
     sortaf(arr,str,50);
    cout<<"NAME    SCORE"<<endl<<endl;
    for(int i=49;i>44;i--){
        if(arr[i]!=0)
            cout<<str[i]<<"    "<<arr[i]<<endl;
    }
    setcolor(WHITE);
    settextstyle(2,HORIZ_DIR,8);
    outtextxy(460,600,"PRESS ANY KEY TO CONTINUE");
    getch();
}
bool ki=false;
void win(int x){}
int main(){
    int flag=0;
    int lifes = 1;
    int arr[]={670,667,664,661,658,655,652,652,589,586,583,580,577,574,571,568,565,562,559,556,553,498,495,492,489,486,483,480,477,474,471,468,465,462,407,404,401,390,395,392,389,386,383,380,377,374,371,316,313,310,307,304,301,298,295,292,289,286,283,280,225,222,219,216,213};
    initwindow(GetSystemMetrics(SM_CXSCREEN),GetSystemMetrics(SM_CYSCREEN),"",-3,-3);
    int x = 300,y = 630, page = 0;
    int by=212,bx=300;
    barrels br[7];
    double ciao=0;
    menu();
    getch();
    cleardevice();
    int scr=0;
    bool kale = true;
    while(kale==true){
        platforms();
        ladders();
        if(kapa==true)right(x,y);
        else left(x,y);
        evilfactory();
        int tom=1100;
        for(int i=0;i<lifes;i++){
            right(tom,80);
            tom+=30;
        }
        princess(190,176);
        bars();
        oil();
        if(ciao>400&&ki==false)
            br[1].show();
        if(ciao>800&&ki==false)
            br[2].show();
        if(ciao>1200&&ki==false)
            br[3].show();
        if(ciao>1600&&ki==false)
            br[4].show();
        if(ciao>2000&&ki==false)
            br[5].show();
        if(ciao>2400&&ki==false)
            br[6].show();
        if(ciao>0&&ki==false)
            br[0].show();
        ciao++;
        for(int i =0;i<7;i++)
            if(br[i].xb == x&&(int)br[i].yb+20>y&&(int)br[i].yb-20<y){
                  lifes--;
                  if(lifes==0)kale=false;
                  x = 300;
                  y = 630;
            }
        //if(x==1064&&x==1062&&y==222){ki=true;win(x);};
        if(flag==180)
            barrel(bx,by);
        setcolor(WHITE);
        settextstyle(2,HORIZ_DIR,10);
        char sc[50];
        sprintf(sc,"%d",scr);
        outtextxy(50,50,sc);
        scr++;
        setactivepage(page);
        setvisualpage(1 - page);
        if(acc(x,y)!=243){
            y++;
        }
        if(GetAsyncKeyState(VK_LEFT)){
            x-=2;
            kapa=false;
            if(check(x,y)==20){
                y-=3;
            }
            if(check(x,y)==40){
                y-=3;
            }
            left(x,y);
        }
        if(GetAsyncKeyState(VK_RIGHT)){
            x+=2;
            kapa=true;
            flag=180;
            if(check(x,y)==10){
                y-=3;
            }
            if(check(x,y)==20){
                y+=3;
            }
            if(check(x,y)==30){
                y-=3;
            }
        }
        if(GetAsyncKeyState(VK_UP)){
                if(ladcheck(x,y)==273){
                    y--;
                }
                else{
                    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
                        if(y==arr[i])jump(x,y);
                    }
                }
        }
        if(GetAsyncKeyState(VK_ESCAPE)){
            exit(0);
        }
        page = 1 - page;
        delay(5);
        cleardevice();
    }
    cleardevice();
    initwindow(GetSystemMetrics(SM_CXSCREEN),GetSystemMetrics(SM_CYSCREEN),"",-3,-3);
    fin(scr);
    return 0;
}
