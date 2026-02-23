/* interest.h */
#define SIMPLE_INTEREST(p, r, t)   ( ((p) * (r) * (t)) / 100.0 )
#define AMOUNT_SI(p, r, t)         ( (p) + SIMPLE_INTEREST(p, r, t) )
#define COMPOUND_AMOUNT(p, r, t)   ( (p) * pow((1 + (r)/100.0), (t)) )
#define COMPOUND_INTEREST(p, r, t) ( COMPOUND_AMOUNT(p, r, t) - (p) )