//Numpy array shape [16]
//Min -0.156250000000
//Max 0.062500000000
//Number of zeros 2

#ifndef B2_H_
#define B2_H_

#ifndef __SYNTHESIS__
bias2_t b2[16];
#else
bias2_t b2[16] = {0.15625, 0.96875, 0.96875, 0.59375, -0.43750, 0.68750, -0.40625, 0.34375, 0.71875, -0.37500, -0.96875, -0.93750, 0.40625, 0.56250, 0.96875, 0.96875};
#endif

#endif
