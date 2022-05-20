//
// Created by Margot, une écrivaine on 20/05/2022.
//

#ifndef HUGENUMBERCALCULATOR_HUGEFLOAT_H
#define HUGENUMBERCALCULATOR_HUGEFLOAT_H


#include "HugeInt.h"

typedef struct HugeFloat {
    HugeInt* significand;
    HugeInt* exponent;
} HugeFloat;

extern HugeFloat* createHugeFloat              (void);
extern HugeFloat* createHugeFloatFromString    (const char* significandString, const char* exponentString);
extern HugeFloat* createHugeFloatFromHugeInts  (const HugeInt* significandHugeInt, const HugeInt* exponentSHugeInt);
extern HugeFloat* createHugeFloatFromHugeFloat (const HugeFloat* hugeFloat, const unsigned int size);
extern void       deleteHugeFloat              (const HugeFloat* hugeFloat);
extern int        getHugeFloatLength           (const HugeFloat* hugeFloat);

#endif //HUGENUMBERCALCULATOR_HUGEFLOAT_H
