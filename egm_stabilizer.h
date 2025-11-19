#ifndef EGM_STABILIZER_H
#define EGM_STABILIZER_H
#ifdef __cplusplus
extern "C" {
#endif
typedef struct{float A;float fh;float fs;float phase;}egm_state_t;
void egm_init(egm_state_t*,float,float,float,float);
void egm_process_real_float(egm_state_t*,float*,int);
void egm_process_complex_float(egm_state_t*,float*,float*,int);
#ifdef __cplusplus
}
#endif
#endif