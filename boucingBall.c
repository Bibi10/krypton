
#include <graphics.h>
#include <conio.h>
#include <alloc.h>
#include <dos.h>
#include <stdlib.h>

void *image()
{
setcolor(BLUE);
setfillstyle(SOLID_FILE, GREEN);
fillellipse(8,8,8,8);
ball=malloc(imagesize(0,0,10,10));
gatimage(0,0,10,10, ball)
cleardevice();
}
void *ball;

void main()
{
int gm, gd=DETECT;
initgraph(&gd, &gm, "");
int I=getmax()/2, r=0, t=0, b=0;
int x=1, y=1;
int s=0, key=0;
int xmov=1, ymov=1;

image();
setbackgroundColor(RED);
while(key!=20)
{
	while(!kbhit()){
	putimage(I,t,ball,XOR_PUT);
	delay(4);
	putimage(I,t,ball,XOR_PUT);

	if(I>=getmax()||I<=0){x*=-1;s=0; xmov=x*(random(4)+1);ystep=y 
*(random(3)+1);if(l<=0)l=0;else l=getmaxx();}

	if(I>=getmax()||I<=0){x*=-1;s=0; ymov=x*(random(4)+1);xstep=y
*(random(3)+1);if(l<=0)l=0;else l=getmaxx();}
I+=x+xmov;
t+=y+ymov;
s++;
if(s==4)
key=getch();
}
closegraph();

}


