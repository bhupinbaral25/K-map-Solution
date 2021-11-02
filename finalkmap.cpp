#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
long int z=80,w=120,l[20];
void out(int x,int y,int m,char*p)
{
    x=x+30;
    outtextxy(x-70,y-180,"output is :");
    outtextxy(x-80,y-150,"F(A,B,C) =");
    outtextxy(z,y-150,p);
    outtextxy(x,y-150,"  ");
    z=z+60;
}
void disadd(int y,int m)
{
    int i;
    y=y+150;
    for(i=1;i<m;i++)
    {
        outtextxy(w,y,"+");
        w=w+48;
    }
}
void notg(int x,int y,int r,int t,int e,int f)
{
    int i,k,m;
    x=x+451;
    int p=x;k=y;
    if(e==0 && f>1)
    {
        t=100*f;
    }
    if(f==0 && e>1){ t=t;}
    if(f>0&& e>0)
    {
        t=100*(e+f);
    }
    y=y-25;
    outtextxy(p,y-28,"A");
    outtextxy(p+50,y-28,"B");
    outtextxy(p+100,y-28,"C");
    for(i=0;i<r;i++)
    {
    line(x,y,x+30,y);
    line(x,y,x+15,y+30);
    line(x+30,y,x+15,y+30);
    circle(x+15,y+33,5);
    line(x+15,y,x+15,y-10);
    line(x-10,y-30,x-10,y+t+60);
    line(x+15,y+30,x+15,y+t+60);
    line(x+15,y-10,x-10,y-10);
    x=x+50;
    }
}
void joinA(int x,int y)
{
    x=x+500;
    y=y+20;
    line(x-58,y,x+222,y);
    circle(x-58,y,3);
}
void joinAc(int x,int y)
{
    x=x+500;
    y=y+20;
    line(x-33,y,x+222,y);
    circle(x-33,y,3);
}
void joinB(int x,int y)
{
    x=x+500;
    y=y+43;
    line(x-8,y,x+222,y);
    circle(x-8,y,3);
}
void joinBc(int x,int y)
{
    x=x+500;
    y=y+43;
    line(x+17,y,x+222,y);
    circle(x+17,y,3);
}
void joinC(int x,int y)
{
    x=x+500;
    y=y+65;
    line(x+42,y,x+222,y);
    circle(x+42,y,3);
}
void joinCc(int x,int y)
{
    x=x+500;
    y=y+65;
    line(x+67,y,x+222,y);
    circle(x+67,y,3);
}

void andgate(int x,int y,int r)
{
     x=x+770;
    y=y+90;
    int i;
    for(i=0;i<r;i++)
    {
    arc(x,y,-90,90,35);
    line(x,y-35,x,y+35);
    line(x+35,y,x+100,y);
    y=y+100;
}}
void orgate(int x,int y,int e,int f,int t)
{
    x=x+1000;
    y=y+62*(e+f);
    arc(x,y,-35,35,60);
    arc(x+48,y+36,30,90,70);
    arc(x+48,y-36,-90,-30,70);
    line(x+106,y,x+200,y);
    outtextxy(x+150,y+30,"F(A,B,C)");
    int p,c;
    p=y;
    c=x;
    for(int i=0;i<e;i++)
     {
    line(c-20,p-20,c+53,p-20);
    line(x-130,y+90-62*(e+f),c-20,p-20);
    y=y+100;
    p=p+13;
   if(i<2)
    {
        c=c+3+i;
    }
   else
    {
       c=c-2;
    }
}
for(int i=3;i<f+3;i++)
{
    line(c-20,p-25,c+53,p-25);
    if(i==(f+2))
    {
        t=t+25;
        x=x-5;
    }
    if(e==1 && f==1)
    {
        t=t-25;
        x=x+5;
    }
    line(c-20,p-25,x-232,t+1);
    p=p+15;c=c+3+i;
    t=t+15;
}}
void rectxt(int x,int y,int var)
{
  line(x-20,y-20,x,y);
    if(var==4)
    {
      rectangle(x,y,x+200,y+200);
      line(x+50,y,x+50,y+200);
      line(x+100,y,x+100,y+200);
      line(x+150,y,x+150,y+200);
      line(x,y+50,x+200,y+50);
      line(x,y+100,x+200,y+100);
      line(x,y+150,x+200,y+150);
    }
    if(var==3)
    {
     rectangle(x,y,x+200,y+100);
      line(x+50,y,x+50,y+100);
      line(x+100,y,x+100,y+100);
      line(x+150,y,x+150,y+100);
      line(x,y+50,x+200,y+50);
    }
    if(var==2)
    {
      rectangle(x,y,x+100,y+100);
      line(x+50,y,x+50,y+100);
      line(x+100,y,x+100,y+100);
      line(x,y+50,x+100,y+50);

    }
    if(var==4)
    {
      outtextxy(x-25,y-7,"AB");
      outtextxy(x-10,y-25,"CD");
      int p=y;
      y=y-18;
      outtextxy(x+20,y,"00");
      outtextxy(x+70,y,"01");
      outtextxy(x+120,y,"11");
      outtextxy(x+170,y,"10");
      y=p;
      x=x-20;
      outtextxy(x,y+20,"00");
      outtextxy(x,y+70,"01");
      outtextxy(x,y+120,"11");
      outtextxy(x,y+170,"10");
    }
    if(var==3)
    {
    outtextxy(x-25,y-7,"A");
    outtextxy(x-10,y-25,"BC");
    int p=y;
    y=y-18;
    outtextxy(x+20,y,"00");
    outtextxy(x+70,y,"01");
    outtextxy(x+120,y,"11");
    outtextxy(x+170,y,"10");
    y=p;
    x=x-15;
    outtextxy(x,y+20,"0");
    outtextxy(x,y+70,"1");
    }
    if(var==2)
    {

    outtextxy(x-25,y-7,"A");
    outtextxy(x-10,y-25,"B");
    int p=y;
    y=y-18;
    outtextxy(x+20,y,"0");
    outtextxy(x+70,y,"1");
     y=p;
    x=x-15;
    outtextxy(x,y+20,"0");
    outtextxy(x,y+70,"1");
    }
}
long int pass(long int p)
{
    long int d=0,r;
    while(p!=0)
    {
    r=p%10;
    d=(d*10)+r;
    p=p/10;
   }
return d;
}
void convert(long int n[],int t,long int*p)
{
    int i;
    for(i=0;i<t;i++)
    {
    int dec=0,d,j=1;
    while(n[i]!=0)
	{
	    d = n[i]%10;
	   dec=dec+d*j;
	   n[i]=n[i]/10;
	   j=j*2;
	}
	p[i]=dec;
    }}
    void group2(int a,int b, long int p[], int x ,int y)
    {
        int m=0,i,e=0,f=0,t;
        if(x==2)
        {
            if(y==4)
            {
                out(a,b+300,m,"   1");
                m++;
            }
            if(y<4)
            {
                 int c[30],d[30];
                for(i=0;i<10;i++)
                {
                 c[i]=0;
                 d[i]=0;
                 l[i]=0;
                }
                for(i=0;i<y;i++)
                {
                    if(p[i]%2==0)
                    {
                        c[0]=c[0]+1;
                    }
                    else
                    {
                        c[1]=c[1]+1;
                    }
                    if(p[i]==0 ||  p[i]==1)
                    {
                       c[2]++;
                    }
                    if(p[i]==2 ||  p[i]==3)
                    {
                       c[3]++;
                    }
                }
                    if(c[0]==2)
                    {
                       out(a,b+300,m,"+ B'");
                       t=b+100*f;
                       joinBc(a,t);
                       f++;
                    }
                    if(c[1]==2)
                    {
                       out(a,b+300,m,"+ B  ");
                        t=b+100*f;
                       joinB(a,t);
                       f++;
                    }
                    if(c[2]==2)
                    {
                       out(a,b+300,m,"+ A' ");
                       t=b+100*f;
                       joinAc(a,t);
                       f++;
                    }
                    if(c[3]==2)
                    {
                      out(a,b+300,m,"+ A  ");
                      t=b+100*f;
                      joinA(a,t);
                      f++;
                    }
                    orgate(a,b,e,f,t);
                    notg(a,b,2,t,e,f);
                    outtextxy(a+545,b-50,"     ");

                    }}}
	void group3(int a,int b,long int p[],int x,int y)
	{
	    int m=0,i,e=0,t,f=0;
	    if(x==3)
        {
            if(y==8)
            {
               out(a,b+300,m,"    1");
               m++;
            }
            if(y<8)
            {
                int c[30],d[30];
                for(i=0;i<20;i++)
                {
                 c[i]=0;
                 d[i]=0;
                 l[i]=0;
                }
                for(i=0;i<y;i++)
                {
                    if(p[i]%2==0)
                    {
                        c[0]=c[0]+1;
                    }
                    else
                    {
                        c[1]=c[1]+1;
                    }
                    if(p[i]==0 || p[i]==1 || p[i]==4 || p[i]==5)
                    {
                        c[2]++;
                    }
                    else
                    {
                        c[3]++;
                    }
                    if(p[i]==0 || p[i]==1 || p[i]==2 || p[i]==3)
                    {
                        c[4]++;
                    }
                    else
                    {
                        c[5]++;
                    }
                }
                if(c[0]==4)
                {
                    out(a,b+300,m,"+ C'");
                    m++;f++;
                    l[0]++;
                }
                if(c[0]<4)
                {
                    for(i=0;i<y;i++)
                    {
                    if(c[2]<4)
                    {
                    if(p[i]==0 || p[i]==4)
                    {
                        d[0]++;
                    }}
                    if(c[3]<4)
                    {
                    if(p[i]==2 || p[i]==6)
                    {
                        d[1]++;
                    }}}}
                if(c[1]==4)
                {
                   out(a,b+300,m,"+ C");
                    m++;f++;
                    l[1]++;
                }
                if(c[1]<4)
                {
                    for(i=0;i<y;i++)
                    {
                    if(c[2]<4)
                    {
                    if(p[i]==1 || p[i]==5)
                    {
                        d[2]++;
                    }}
                    if(c[3]<4)
                    {
                    if(p[i]==3 || p[i]==7)
                    {
                        d[3]++;
                    }}}}
                if(c[2]==4)
                {
                    out(a,b+300,m,"+ B'");
                    m++;f++;
                    l[2]++;
                }
                if(c[2]<4)
                {
                    for(i=0;i<y;i++)
                    {
                     if(c[4]<4)
                     {
                    if(p[i]==0 || p[i]==1)
                    {
                        d[4]++;
                    }}
                    if(c[5]<4)
                    {
                    if(p[i]==4 || p[i]==5)
                    {
                        d[5]++;
                    }}}}
                if(c[3]==4)
                {
                    out(a,b+300,m,"+ B");
                    m++;f++;l[3]++;
                }
                if(c[3]<4)
                {
                     for(i=0;i<y;i++)
                    {
                    if(c[4]<4)
                     {
                    if(p[i]==2 || p[i]==3)
                    {
                        d[6]++;
                    }}
                    if(c[5]<4)
                     {
                    if(p[i]==6 || p[i]==7)
                    {
                        d[7]++;
                    }}
                }
                }
                if(c[4]==4)
                {
                    out(a,b+300,m,"+ A'");
                    m++;f++;l[4]++;
                }
                if(c[4]<4)
                {
                     for(i=0;i<y;i++)
                    {
                        if(c[0]<4)
                     {
                    if(p[i]==0 || p[i]==2)
                    {
                        d[8]++;
                    }}
                    if(c[1]<4)
                     {
                    if(p[i]==1 || p[i]==3)
                    {
                        d[9]++;
                    }}
                }
                }
                if(c[5]==4)
                {
                    out(a,b+300,m,"+ A");
                    m++;
                    f++;l[5]++;
                }
                if(c[5]<4)
                {
                     for(i=0;i<y;i++)
                    {
                        if(c[0]<4)
                     {
                    if(p[i]==4 || p[i]==6)
                    {
                        d[10]++;
                    }}
                    if(c[1]<4)
                     {
                    if(p[i]==5 || p[i]==7)
                    {
                        d[11]++;
                    }}
                }
                }
                if(d[0]==2)
                {
                    out(a,b+300,m,"+ B'C'");
                    m++;
                    e++;
                    joinB(a,b);
                    joinCc(a,b);


                }
                 if(d[0]==1 && d[8]==1 && d[4]==1)
                      {
                          for(i=0;i<y;i++)
                          {
                           if(p[i]==0)
                           {
                             out(a,b+300,m,"+ A'B'C'");
                             m++;
                              t=b+100*e;
                              joinAc(a,t);
                              joinBc(a,t);
                              joinCc(a,t);
                              e++;

                       }}}
                       if(d[0]==1 && d[5]==1 && d[10]==1)
                       { for(i=0;i<y;i++)
                          {
                           if(p[i]==4)
                           {
                         out(a,b+300,m,"+ AB'C'");
                         m++;
                        t=b+100*e;
                        joinA(a,t);
                        joinBc(a,t);
                        joinCc(a,t);
                        e++;
                       }}}
                if(d[1]==2)
                {
                          out(a,b+300,m,"+ BC'");
                          m++;
                        t=b+100*e;
                        joinB(a,t);
                        joinCc(a,t);
                        e++;

                }
                if(d[1]==1 && d[6]==1 && d[8]==1)
                {
                     for(i=0;i<y;i++)
                    {
                    if(p[i]==2)
                    {
                    out(a,b+300,m,"+ A'BC'");
                    m++;
                     t=b+100*e;
                    joinAc(a,t);
                    joinB(a,t);
                    joinCc(a,t);
                     e++;

                }}}
                if(d[1]==1 && d[7]==1 && d[10]==1)
                {
                     for(i=0;i<y;i++)
                    {
                    if(p[i]==6)
                    {
                    out(a,b+300,m,"+ ABC'");
                    m++;
                     t=b+100*e;
                    joinA(a,t);
                    joinB(a,t);
                    joinCc(a,t);
                     e++;
                }}}
                if(d[2]==2)
                {
                   out(a,b+300,m,"+ B'C");
                    m++;
                     t=b+100*e;
                    joinBc(a,t);
                    joinC(a,t);
                     e++;
                }
                    if(d[2]==1 && d[4]==1 && d[9]==1)
                    {
                       for(i=0;i<y;i++)
                          {
                           if(p[i]==1)
                           {
                      out(a,b+300,m,"+ A'B'C");
                      m++;
                      t=b+100*e;
                        joinAc(a,t);
                        joinBc(a,t);
                        joinC(a,t);
                        e++;
                    }}}
                    if(d[2]==1 && d[5]==1 && d[11]==1)
                    {
                         for(i=0;i<y;i++)
                          {
                           if(p[i]==5)
                           {
                      out(a,b+300,m,"+ AB'C");
                      m++;
                       t=b+100*e;
                        joinA(a,t);
                        joinBc(a,t);
                        joinC(a,t);
                       e++;
                    }}}
                if(d[3]==2)
                {
                   out(a,b+300,m,"+ BC");
                    m++;
                      t=b+100*e;
                    joinB(a,t);
                    joinC(a,t);
                     e++;
                }
                    if(d[3]==1 && d[9]==1 && d[6]==1)
                    {
                         for(i=0;i<y;i++)
                          {
                           if(p[i]==3)
                           {
                    out(a,b+300,m,"+ A'BC");
                    m++;
                     t=b+100*e;
                    joinAc(a,t);
                    joinB(a,t);
                    joinC(a,t);

                     e++;
                    }}}
                    if(d[3]==1 && d[7]==1 && d[11]==1)
                    {
                         for(i=0;i<y;i++)
                          {
                           if(p[i]==7)
                           {
                    out(a,b+300,m,"+ ABC");
                    m++;
                     t=b+100*e;
                    joinA(a,t);
                    joinB(a,t);
                    joinC(a,t);
                     e++;
                }}}
                if(d[4]==2)
                {
                    out(a,b+300,m,"+ A'B'");
                    m++;
                     t=b+100*e;
                    joinAc(a,t);
                    joinBc(a,t);
                     e++;
                }
                if(d[5]==2)
                {
                    out(a,b+300,m,"+ AB'");
                     m++;
                     t=b+100*e;
                    joinA(a,t);
                    joinBc(a,t);
                     e++;
                }
                if(d[6]==2)
                {
                    out(a,b+300,m,"+ A'B");
                    m++;
                     t=b+100*e;
                    joinAc(a,t);
                    joinB(a,t);
                     e++;
                }
                if(d[7]==2)
                {
                    out(a,b+300,m,"+ AB");
                    m++;
                     t=b+100*e;
                        joinA(a,t);
                        joinB(a,t);
                    e++;
                }
                 if(d[8]==2)
                {
                    out(a,b+300,m,"+ A'C'");
                    m++;
                     t=b+100*e;
                    joinAc(a,t);
                    joinCc(a,t);
                     e++;
                }
                 if(d[9]==2)
                {
                    out(a,b+300,m,"+  A'C");
                    m++;
                     t=b+100*e;
                    joinAc(a,t);
                    joinC(a,t);
                    e++;
                }
                 if(d[10]==2)
                {

                     out(a,b+300,m,"+ AC'");
                     m++;
                      t=b+100*e;
                    joinA(a,t);
                    joinCc(a,t);
                      e++;
                }
                 if(d[11]==2)
                {
                    out(a,b+300,m,"+ AC");
                    m++;
                     t=b+100*e;
                    joinA(a,t);
                    joinC(a,t);
                     e++;
                }
                //disadd(b,m);
                andgate(x,y,e);
                 if(e+f>1)
                 {
                    orgate(x,y,e,f,t+164);
                    notg(a,b,3,t,e,f);
                 }
                 else
                 {
                     outtextxy(x+880,y+100,"F(A,B,C)");
                 }
                 if(e==0 && f==1)
                 {
                      notg(a,b,3,300,e,f);
                 }
                 if(e==1)
                 {
                     notg(a,b,3,100,e,f);
                 }
                  if(e>0 && f>0)
                 {
                     t=b+100*e;
                 }
                 if(e>1 && (l[0]==1 || l[1]==1) )
                    {
                          t=t+23;
                    }
                 if(e==0 && f>0)
                 {
                     t=t+100;
                 }
                     if(l[0]==1)
                     {
                         joinCc(a,t);
                         t=t+15;
                     }
                      if(l[1]==1)
                     {
                         joinC(a,t);
                         t=t+15;
                     }
                       if( (l[1]==1 || l[0]==1) && (l[2]==1 || l[3]==1) )
                      {
                      t=t+23;
                      }
                      if(e>1 && (l[2]==1 || l[3]==1) )
                      {
                          t=t+23;
                      }
                       if( (l[1]==1 || l[0]==1) && (l[4]==1 || l[5]==1)&& (l[2]==1 || l[3]==1) )
                      {
                      t=t-42;
                      }


                      if(l[2]==1)
                     {
                         t=t+22;
                         joinBc(a,t);
                         t=t+15;
                     }

                      if(l[3]==1)
                     {
                         t=t+22;
                         joinB(a,t);
                         t=t+15;
                     }
                      if( (l[1]==1 || l[0]==1) && (l[4]==1 || l[5]==1) )
                      {
                      t=t+23;
                      }
                      if( (l[1]==1 || l[0]==1) && (l[4]==1 || l[5]==1)&& (l[2]==1 || l[3]==1) )
                      {
                      t=t-12;
                      }


                      if(l[4]==1)
                     {
                        t=t+45;
                         joinAc(a,t);
                         t=t+15;
                     }
                     if(l[5]==1)
                     {
                         t=t+45;
                         joinA(a,t);
                         t=t+15;
                     }
                      setcolor(LIGHTBLUE);


}}}
void solve(int d,int e,long int a[],int p,int c)
 {
    if(p==2)
    {
        int i,x,y;
    for(i=0;i<=c;i++)
    {
   if(a[i]==0)
   {
        x=d;
        y=e;
       x=x+25;
       y=y+15;
    outtextxy(x,y,"1");
   }
    else if(a[i]==1)
    {
        x=d;
        y=e;
        x=x+75;
        y=y+15;
        outtextxy(x,y,"1");
     }
     else if(a[i]==2)
     {
        x=d;
        y=e;
        x=x+25;
        y=y+65;
        outtextxy(x,y,"1");
     }
      else if(a[i]==3)
     {
        x=d;
        y=e;
        x=x+75;
        y=y+65;
        outtextxy(x,y,"1");
     }}}

    if(p==3)
    {
    int i,x,y;
    for(i=0;i<c;i++)
    {
   if(a[i]==0)
   {
        x=d;
        y=e;
       x=x+25;
       y=y+15;
    outtextxy(x,y,"1");
   }
   else if(a[i]==1)

     {
        x=d;
        y=e;
        x=x+75;
        y=y+15;
        outtextxy(x,y,"1");

     }
     else if(a[i]==2)
     {
        x=d;
        y=e;
        x=x+175;
        y=y+15;
        outtextxy(x,y,"1");
     }
      else if(a[i]==3)
     {
        x=d;
        y=e;
        x=x+125;
        y=y+15;
        outtextxy(x,y,"1");
     }
     else if(a[i]==4)
     {
        x=d;
        y=e;
        x=x+25;
        y=y+65;
        outtextxy(x,y,"1");
     }
      else if(a[i]==5)
     {
        x=d;
        y=e;
        x=x+75;
        y=y+65;
        outtextxy(x,y,"1");
     }
     else if(a[i]==6)
     {
        x=d;
        y=e;
        x=x+175;
        y=y+65;
        outtextxy(x,y,"1");
     }
      else if(a[i]==7)
     {
        x=d;
        y=e;
        x=x+125;
        y=y+65;
        outtextxy(x,y,"1");
     }
      else
     {
     }
    }

}
   if(p==4)
    {
        int i,x,y;
    for(i=0;i<c;i++)
    {
   if(a[i]==0)
   {
        x=d;
        y=e;
       x=x+25;
       y=y+15;
    outtextxy(x,y,"1");
   }
  else if(a[i]==1)

     {
        x=d;
        y=e;
        x=x+75;
        y=y+15;
        outtextxy(x,y,"1");

     }
    else if(a[i]==2)
     {
        x=d;
        y=e;
        x=x+175;
        y=y+15;
        outtextxy(x,y,"1");
     }
    else if(a[i]==3)
     {
        x=d;
        y=e;
        x=x+125;
        y=y+15;
        outtextxy(x,y,"1");
     }
   else if(a[i]==4)
     {
        x=d;
        y=e;
        x=x+25;
        y=y+65;
        outtextxy(x,y,"1");
     }
      else if(a[i]==5)
     {
        x=d;
        y=e;
        x=x+75;
        y=y+65;
        outtextxy(x,y,"1");
     }
    else if(a[i]==6)
     {
        x=d;
        y=e;
        x=x+175;
        y=y+65;
        outtextxy(x,y,"1");
     }
      else if(a[i]==7)
     {
        x=d;
        y=e;
        x=x+125;
        y=y+65;
        outtextxy(x,y,"1");
     }
     else if(a[i]==8)
   {
        x=d;
        y=e;
       x=x+25;
       y=y+165;
    outtextxy(x,y,"1");
   }
   if(a[i]==9)
   {
        x=d;
        y=e;
       x=x+75;
       y=y+165;
    outtextxy(x,y,"1");
   }
   else if(a[i]==10)
   {
        x=d;
        y=e;
       x=x+175;
       y=y+165;
    outtextxy(x,y,"1");
   }
   if(a[i]==11)
   {
        x=d;
        y=e;
       x=x+125;
       y=y+165;
    outtextxy(x,y,"1");
   }
   else if(a[i]==12)
   {
        x=d;
        y=e;
       x=x+25;
       y=y+115;
    outtextxy(x,y,"1");
   }
   else if(a[i]==13)
   {
        x=d;
        y=e;
       x=x+75;
       y=y+115;
    outtextxy(x,y,"1");
   }
  else if(a[i]==14)
   {
        x=d;
        y=e;
       x=x+175;
       y=y+115;
    outtextxy(x,y,"1");
   }
   else if(a[i]==15)
   {
        x=d;
        y=e;
       x=x+125;
       y=y+115;
    outtextxy(x,y,"1");
   }}}}


int main()
{

  int gd = DETECT, gm;
    int i,r,n,t,a=50,b=50;
    long int c,d,q[20],p[20];
    cout<<endl<<"\t\tENTER THE PASSWORD\t\t"<<endl;
    cin>>c;
    d = pass(c);
    if(d==5141)
    {
    cout<<endl<<endl<<"\t\t\t\tTHIS PROGRAM ONLY SLOVE THE 2,3,4 NUMBERS OF VARIABLES"<<endl;
    cout<<endl<<"Enter the Number of Variables"<<endl;
    cin>>n;
    if(n>4 || n<2)
    {
        cout<<"\t\t SYSTEM ERROR  "<<endl<<endl<<endl;
    }
    else
    {
    cout<<"Enter the Number of Inputs"<<endl;
    cin>>t;
    cout<<"PLEASE ENTER THE INPUTS IN INCREASING ORDER "<<endl;
    cout<<endl<<"PRESS '0' If You Are Enter The Inputs in Binary Format or PRESS '1' for Decimal Inputs"<<endl;

    cin>>r;
     cout<<"Enter the Inputs"<<endl;
    if(r==1)
    {
    for(i=0;i<t;i++)
    {
        cin>>p[i];
    }}
    else if(r==0)
    {
        for(i=0;i<t;i++)
        {
            cin>>q[i];
        }
        convert(q,t,p);
    }
    else
    {
        cout<<"invalid output"<<endl;
        cout<<"\t\t\t  THIS PROGRAM IS ALL ABOUT :"<<endl;
        cout<<" IF YOU HAVE DEDICATION YOU CAN DO ANYTHINGS \t\t\t\t  "<<endl<<endl;
        return 0;
    }
initgraph(&gd, &gm, " ");
DWORD screenWidth=GetSystemMetrics(SM_CXSCREEN);
DWORD screenHeight=GetSystemMetrics(SM_CYSCREEN);
initwindow(screenWidth,screenHeight," ",1,1);
outtextxy(100,500,"SAGARMATHA TECHNO-FEST 2019");
rectxt(a,b,n);
solve(a,b,p,n,t);
for(i=0;i<t;i++)
    {
        if(p[i+1]==p[i])
        {
            cout<<endl<<"please enter the different inputs"<<endl;
            return 0;
        }}
if(n==3)
{
 group3(a,b,p,n,t);

}
if(n==2)
{
    group2(a,b,p,n,t);
}
getch();
}}
else
{
    cout<<endl<<"\t\t\t\tINVALID PASSWORD"<<endl;
    cout<<endl<<"\t\t\tKINGS INTERNATIONAL CAREER CONSULTANCY PVT.LTD"<<endl;
    cout<<endl<<"\t\t\t  LEVEL 1 STAR MAHAL PUTALISADAK, KATHMANDU"<<endl;
    cout<<endl<<"\t\t\t\t  9861531522,01-4012589"<<endl;
}
if(n==0)
{
cout<<"\t\t\t  THIS PROGRAM IS ALL ABOUT :"<<endl;
cout<<endl<<"\t\t IF YOU HAVE DEDICATION YOU CAN DO ANYTHINGS \t\t\t\t  "<<endl<<endl;
cout<<endl<<"\t\t\tKINGS INTERNATIONAL CAREER CONSULTANCY PVT.LTD"<<endl;
cout<<endl<<"\t\t\t  LEVEL 1 STAR MAHAL PUTALISADAK, KATHMANDU"<<endl;
cout<<endl<<"\t\t\t\t  9861531522,01-4012589"<<endl;
}
return 0;
}
