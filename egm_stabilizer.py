import numpy as np
class EGM:
    def __init__(self,A,fh,fs,phase0=0.0):
        self.A=A;self.fh=fh;self.fs=fs;self.ph=phase0;self.dphi=2*np.pi*fh/fs
    def process_complex(self,I,Q):
        I=np.array(I,float);Q=np.array(Q,float)
        for k in range(len(I)):
            m=self.A*np.sin(self.ph);c=np.cos(m);s=np.sin(m)
            ii=I[k]*c-Q[k]*s;qq=I[k]*s+Q[k]*c
            I[k]=ii;Q[k]=qq;self.ph+=self.dphi
        return I,Q