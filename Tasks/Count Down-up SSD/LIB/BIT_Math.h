#ifndef LIB_BIT_MATH_H
#define LIB_BIT_MATH_H


#define SET_BIT(REG,BIT)			(REG) |=  (1 << (BIT))
#define CLR_BIT(REG,BIT)			(REG) &= ~(1 << (BIT))
#define TOG_BIT(REG,BIT)			(REG) ^=  (1 << (BIT))
#define GET_BIT(REG,BIT)			(((REG) >> (BIT)) & 1)
#define SET_REG(REG,BYTE)			(REG = BYTE)
#define WRITE(REG,VALUE,SHIFT)		((REG) |= ((VALUE) << (SHIFT)))
#define MASK(REG,VALUE)				((REG) &= (VALUE))





#endif
