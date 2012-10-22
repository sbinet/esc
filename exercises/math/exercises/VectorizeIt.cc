#include<cmath>


// recursion
void gen(float const * rd, int& j, float * x, float * y, int N) {
  for (int i=0; i!=N; i++) {
    float r2,xx,yy;
    do{
      xx= 2*rd[j++]-1;
      yy =2*rd[j++]-1;
      r2 = xx*xx+yy*yy;
    } while (r2>1||r2==0);
    float m= sqrt(-2 * log(r2) /r2);
    x[i]=m*xx; y[i]=m*yy;
  }
}

// Array of structures
struct P {float x,y,z,w;};
void foo(P * p, int N, float phi) {
  for (int i=0; i!=M; i++) {
    float xx=p[i].x,  yy=p[i].y;
    p[i].x =  sin(phi)*xx+cos(phi)*yy; 
    p[i].y = -cos(phi)*xx+sin(phi)*yy;
  }
}

// lookup
int h[100];
float x0;
int dist[12];
void bar(int const * layer, float const * phi, int N) {
  for (int i=0; i!=N; i++) {
    float r = dist[layer[i]];
    float x=cos(phi[i])/r;
    ++h[int(x/x0)];
  }
}
