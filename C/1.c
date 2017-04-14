#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <time.h>
void c1(int cx1,int cy1,int cr1,int cx2,int cy2
        ,int cr2,int lx1,int ly1,int lx2,int ly2,int lx3,int ly3,int lx4,int ly4
        ,int cxx1,int cyy1,int crr1,int cxx2,int cyy2
        ,int crr2,int lxx1,int lyy1,int lxx2,int lyy2,int lxx3,int lyy3,int lxx4,int lyy4){
    int x=1,x2=1,mask=1,mask2=1,color,food=0,color2,food2=0;

    while (1){
        if (x==1){
            setcolor(color);
            circle(cx1,cy1,cr1);
            circle(cx2,cy2,cr2);
            line(lx1,ly1,lx2,ly2);
            line(lx3,ly3,lx4,ly4);
            delay(2);
            setcolor(BLACK);
            circle(cx1,cy1,cr1);
            circle(cx2,cy2,cr2);
            line(lx1,ly1,lx2,ly2);
            line(lx3,ly3,lx4,ly4);
            cx1++;cy1++;cx2++;cy2++;lx1++;ly1++;lx2++;ly2++;lx3++;ly3++;lx4++;ly4++;
            if (cy1>=570||cy1<=30||cx1<=30||cx1>=770)
                {   if (cy1>=570){mask=2;} if (cx1>=770){mask=3;}
                    if (cy1<=30){mask=4;} if (cx1<=30){mask=1;}
                }
            food++;
        }

        if (x2==1){
            setcolor(color2);
            circle(cxx1,cyy1,crr1);
            circle(cxx2,cyy2,crr2);
            line(lxx1,lyy1,lxx2,lyy2);
            line(lxx3,lyy3,lxx4,lyy4);
            delay(2);
            setcolor(BLACK);
            circle(cxx1,cyy1,crr1);
            circle(cxx2,cyy2,crr2);
            line(lxx1,lyy1,lxx2,lyy2);
            line(lxx3,lyy3,lxx4,lyy4);
            cxx1++;cyy1--;cxx2++;cyy2--;lxx1++;lyy1--;lxx2++;lyy2--;lxx3++;lyy3--;lxx4++;lyy4--;
            if (cyy1>=540||cyy1<=60||cxx1<=60||cxx1>=740){
                if (cyy1>=540){mask2=2;}if (cxx1>=740){mask2=3;}
                if (cyy1<=60){mask2=4;}if (cxx1<=60){mask2=1;}
            }
            food2++;
        }

        if (x==2){
            setcolor(color);
            circle(cx1,cy1,cr1);
            circle(cx2,cy2,cr2);
            line(lx1,ly1,lx2,ly2);
            line(lx3,ly3,lx4,ly4);
            delay(2);
            setcolor(BLACK);
            circle(cx1,cy1,cr1);
            circle(cx2,cy2,cr2);
            line(lx1,ly1,lx2,ly2);
            line(lx3,ly3,lx4,ly4);
            cx1++;cy1--;cx2++;cy2--;lx1++;ly1--;lx2++;ly2--;lx3++;ly3--;lx4++;ly4--;
            if (cy1>=570||cy1<=30||cx1<=30||cx1>=770)
                {   if (cy1>=570){mask=2;}
                    if (cx1>=770){mask=3;}
                    if (cy1<=30){mask=4;}
                    if (cx1<=30){mask=1;}
                }
            food++;
        }

        if (x2==2){
            setcolor(color2);
            circle(cxx1,cyy1,crr1);
            circle(cxx2,cyy2,crr2);
            line(lxx1,lyy1,lxx2,lyy2);
            line(lxx3,lyy3,lxx4,lyy4);
            delay(2);
            setcolor(BLACK);
            circle(cxx1,cyy1,crr1);
            circle(cxx2,cyy2,crr2);
            line(lxx1,lyy1,lxx2,lyy2);
            line(lxx3,lyy3,lxx4,lyy4);
            cxx1++;cyy1++;cxx2++;cyy2++;lxx1++;lyy1++;lxx2++;lyy2++;lxx3++;lyy3++;lxx4++;lyy4++;
            if (cyy1>=540||cyy1<=60||cxx1<=60||cxx1>=740){
                if (cyy1>=540){mask2=2;}if (cxx1>=740){mask2=3;}
                if (cyy1<=60){mask2=4;}if (cxx1<=60){mask2=1;}
            }
            food2++;
        }

        if (x==3){
            setcolor(color);
            circle(cx1,cy1,cr1);
            circle(cx2,cy2,cr2);
            line(lx1,ly1,lx2,ly2);
            line(lx3,ly3,lx4,ly4);
            delay(2);
            setcolor(BLACK);
            circle(cx1,cy1,cr1);
            circle(cx2,cy2,cr2);
            line(lx1,ly1,lx2,ly2);
            line(lx3,ly3,lx4,ly4);
            cx1--;cy1--;cx2--;cy2--;lx1--;ly1--;lx2--;ly2--;lx3--;ly3--;lx4--;ly4--;
            if (cy1>=570||cy1<=30||cx1<=30||cx1>=770)
                {   if (cy1>=570){mask=2;}
                    if (cx1>=770){mask=3;}
                    if (cy1<=30){mask=4;}
                    if (cx1<=30){mask=1;}
                }
            food++;
        }
        if (x2==3){
            setcolor(color2);
            circle(cxx1,cyy1,crr1);
            circle(cxx2,cyy2,crr2);
            line(lxx1,lyy1,lxx2,lyy2);
            line(lxx3,lyy3,lxx4,lyy4);
            delay(2);
            setcolor(BLACK);
            circle(cxx1,cyy1,crr1);
            circle(cxx2,cyy2,crr2);
            line(lxx1,lyy1,lxx2,lyy2);
            line(lxx3,lyy3,lxx4,lyy4);
            cxx1--;cyy1++;cxx2--;cyy2++;lxx1--;lyy1++;lxx2--;lyy2++;lxx3--;lyy3++;lxx4--;lyy4++;
            if (cyy1>=540||cyy1<=60||cxx1<=60||cxx1>=740){
                if (cyy1>=540){mask2=2;}if (cxx1>=740){mask2=3;}
                if (cyy1<=60){mask2=4;}if (cxx1<=60){mask2=1;}
            }
            food2++;
        }

        if (x==4){
            setcolor(color);
            circle(cx1,cy1,cr1);
            circle(cx2,cy2,cr2);
            line(lx1,ly1,lx2,ly2);
            line(lx3,ly3,lx4,ly4);
            delay(2);
            setcolor(BLACK);
            circle(cx1,cy1,cr1);
            circle(cx2,cy2,cr2);
            line(lx1,ly1,lx2,ly2);
            line(lx3,ly3,lx4,ly4);
            cx1--;cy1++;cx2--;cy2++;lx1--;ly1++;lx2--;ly2++;lx3--;ly3++;lx4--;ly4++;
            if (cy1>=570||cy1<=30||cx1<=30||cx1>=770)
                {   if (cy1>=570){mask=2;}
                    if (cx1>=770){mask=3;}
                    if (cy1<=30){mask=4;}
                    if (cx1<=30){mask=1;}
                }
            food++;
        }
        if (x2==4){
            setcolor(color2);
            circle(cxx1,cyy1,crr1);
            circle(cxx2,cyy2,crr2);
            line(lxx1,lyy1,lxx2,lyy2);
            line(lxx3,lyy3,lxx4,lyy4);
            delay(2);
            setcolor(BLACK);
            circle(cxx1,cyy1,crr1);
            circle(cxx2,cyy2,crr2);
            line(lxx1,lyy1,lxx2,lyy2);
            line(lxx3,lyy3,lxx4,lyy4);
            cxx1--;cyy1--;cxx2--;cyy2--;lxx1--;lyy1--;lxx2--;lyy2--;lxx3--;lyy3--;lxx4--;lyy4--;
            if (cyy1>=540||cyy1<=60||cxx1<=60||cxx1>=740){
                if (cyy1>=540){mask2=2;}if (cxx1>=740){mask2=3;}
                if (cyy1<=60){mask2=4;}if (cxx1<=60){mask2=1;}
            }
            food2++;
        }
        if (mask==1) {while(x==3||x==4) x=(rand()%4)+1;}
        else if (mask==2) {while(x==1||x==4) x=(rand()%4)+1;}
        else if (mask==3) {while(x==1||x==2) x=(rand()%4)+1;}
        else if (mask==4) {while(x==3||x==2) x=(rand()%4)+1;}

        if (mask2==1) {while(x2==3||x2==4) x2=(rand()%4)+1;}
        else if (mask2==2) {while(x2==2||x2==3) x2=(rand()%4)+1;}
        else if (mask2==3) {while(x2==1||x2==2) x2=(rand()%4)+1;}
        else if (mask2==4) {while(x2==1||x2==4) x2=(rand()%4)+1;}
        if (food==200) {food=0;color=(rand()%14)+1;}
        if (food2==200) {food2=0;color2=(rand()%14)+1;}
    }
}
int main(){
    int cx1=200,cy1=180,cr1=30,cx2=200,cy2=190,cr2=10;
    int lx1=175,ly1=170,lx2=195,ly2=170;
    int lx3=205,ly3=170,lx4=225,ly4=170;
    int cxx1=400,cyy1=500,crr1=60,cxx2=400,cyy2=510,crr2=30;
    int lxx1=360,lyy1=460,lxx2=390,lyy2=460;
    int lxx3=410,lyy3=460,lxx4=440,lyy4=460;

    initwindow(800,600,"edmodo");

    c1(cx1,cy1,cr1,cx2,cy2,cr2,lx1,ly1,lx2,ly2,lx3,ly3,lx4,ly4,
       cxx1,cyy1,crr1,cxx2,cyy2,crr2,lxx1,lyy1,lxx2,lyy2,lxx3,lyy3,lxx4,lyy4);

    getch();
    closegraph();
    return 0;
}
