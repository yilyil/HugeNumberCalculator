//
// Created by Margot, une écrivaine on 20/05/2022.
//

#include "HugeUnsignedInt.h"

/*HugeUnsignedInt* createHugeUnsignedInt (void) {
    return NULL;
}

HugeUnsignedInt* createHugeUnsignedIntFromString (const char* digitString) {
    return NULL;
}

HugeUnsignedInt* createHugeUnsignedIntFromHugeUnsignedInt (const HugeUnsignedInt* hugeUnsignedInt, const unsigned int size) {
    return NULL;
}

void deleteHugeUnsignedInt (const HugeUnsignedInt* hugeUnsignedInt) {
}

int getHugeUnsignedIntLength (const HugeUnsignedInt* hugeUnsignedInt) {
    return 0;
}

HugeUnsignedInt* simplifyHugeUnsignedInt (const HugeUnsignedInt* hugeUnsignedInt) {
    return NULL;
}
*/

#include "HugeUnsignedInt.h"

HugeUnsignedInt* createHugeUnsignedInt (void) {
    return createDoublyLinkedList ();
}

HugeUnsignedInt* createHugeUnsignedIntFromString (const char* digitString) {
    return simplifyHugeUnsignedInt (createDoublyLinkedListFromString (digitString));
}

HugeUnsignedInt* createHugeUnsignedIntFromHugeUnsignedInt (const HugeUnsignedInt* hugeUnsignedInt, const unsigned int size) {
    HugeUnsignedInt* hugeUnsignedIntCopy = createHugeUnsignedInt ();
    if ((hugeUnsignedIntCopy != NULL) && (hugeUnsignedInt != NULL)) {
        Node* node = hugeUnsignedInt->start;
        for (unsigned int i = 0; ((i < size) || (size == 0)) && !isNodeEmpty (node); i++) {
            addDigitAtEnd (hugeUnsignedIntCopy, node->digit);
            node = node->next;
        }
    }
    return hugeUnsignedIntCopy;
}

void deleteHugeUnsignedInt (HugeUnsignedInt* hugeUnsignedInt) {
    deleteDoublyLinkedList (hugeUnsignedInt);
}

int getHugeUnsignedIntLength (const HugeUnsignedInt* hugeUnsignedInt) {
    return getDoublyLinkedListLength (hugeUnsignedInt);
}

HugeUnsignedInt* simplifyHugeUnsignedInt (HugeUnsignedInt* hugeUnsignedInt) {
    if (hugeUnsignedInt != NULL) {
        char simplify = 1;
        while ((!isNodeEmpty (hugeUnsignedInt->start)) && simplify) {
            if ((hugeUnsignedInt->start->digit == 0) && hugeUnsignedInt->start != hugeUnsignedInt->end) {
                removeStartFromDoublyLinkedList (hugeUnsignedInt);
            } else {
                simplify = 0;
            }
        }
    }
    return hugeUnsignedInt;
}