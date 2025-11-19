#include "egm_stabilizer.h"
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
static inline float egm_wrap_phase(float x){while(x>M_PI)x-=2*M_PI;while(x<-M_PI)x+=2*M_PI;return x;}
void egm_init(egm_state_t*st,float A,float fh,float fs,float phase0){if(!st||fs<=0)return;st->A=A;st->fh=fh;st->fs=fs;st->phase=phase0;}
void egm_process_real_float(egm_state_t*st,float*x,int n){if(!st||!x||n<=0)return;float dphi=2*M_PI*st->fh/st->fs;float ph=st->phase;for(int k=0;k<n;k++){float m=st->A*sinf(ph);float c=cosf(m);x[k]*=c;ph=egm_wrap_phase(ph+dphi);}st->phase=ph;}
void egm_process_complex_float(egm_state_t*st,float*i_buf,float*q_buf,int n){if(!st||!i_buf||!q_buf||n<=0)return;float dphi=2*M_PI*st->fh/st->fs;float ph=st->phase;for(int k=0;k<n;k++){float m=st->A*sinf(ph);float c=cosf(m);float s=sinf(m);float i=i_buf[k],q=q_buf[k];i_buf[k]=i*c-q*s;q_buf[k]=i*s+q*c;ph=egm_wrap_phase(ph+dphi);}st->phase=ph;}