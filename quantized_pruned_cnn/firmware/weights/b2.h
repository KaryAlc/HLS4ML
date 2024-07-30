//Numpy array shape [16]
//Min -0.125000000000
//Max 0.250000000000
//Number of zeros 1

#ifndef B2_H_
#define B2_H_

#ifndef __SYNTHESIS__
bias2_t b2[16];
#else
bias2_t b2[16] = {0.15625, 0.68750, -0.53125, -0.81250, 0.00000, 0.96875, -0.03125, 0.96875, -1.00000, 0.96875, 0.53125, 0.03125, -1.00000, 0.28125, -1.00000, 0.59375};
#endif

#endif
