//Macros that will be used during the Project

#ifndef MACROS_H_INCLUDED
#define MACROS_H_INCLUDED

#define I 7 // Global interrupt bit
#define SETBIT(REG,NBIT) (REG|=(1<<NBIT)) // used for setting bit
#define CLRBIT(REG,NBIT) (REG&=~(1<<NBIT)) // used for clearing bit
#define TOGGLEBIT(REG,NBIT) (REG^=(1<<NBIT)) // used for toggle bit
#define BIT_IS_SET(REG,NBIT) (REG&=(1<<NBIT))
#define BIT_IS_CLR(REG,NBIT) (!(REG&=(1<<NBIT)))


#endif // MACROS_H_INCLUDED