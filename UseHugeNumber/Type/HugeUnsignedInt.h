//
// Created by Margot, une écrivaine on 20/05/2022.
//

#ifndef HUGENUMBERCALCULATOR_HUGEUNSIGNEDINT_H
#define HUGENUMBERCALCULATOR_HUGEUNSIGNEDINT_H
#include "../../DataTypes/DoublyLinkedList.h"

typedef DoublyLinkedList HugeUnsignedInt;

extern HugeUnsignedInt* createHugeUnsignedInt                    (void);
extern HugeUnsignedInt* createHugeUnsignedIntFromString          (const char* digitString);
extern HugeUnsignedInt* createHugeUnsignedIntFromHugeUnsignedInt (const HugeUnsignedInt* hugeUnsignedInt, const unsigned int size);
extern void             deleteHugeUnsignedInt                    (const HugeUnsignedInt* hugeUnsignedInt);
extern int              getHugeUnsignedIntLength                 (const HugeUnsignedInt* hugeUnsignedInt);
extern HugeUnsignedInt* simplifyHugeUnsignedInt                  (const HugeUnsignedInt* hugeUnsignedInt);

#endif //HUGENUMBERCALCULATOR_HUGEUNSIGNEDINT_H
