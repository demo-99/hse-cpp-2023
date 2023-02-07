#include <cstddef>
#include <iostream>

struct Node {
    Node* prev = nullptr;
    Node* next = nullptr;
    int value = 0;
};

// Merge sorted list

Node* MergeList(Node* left, Node* right) {
    Node* start = nullptr;
    Node* last = nullptr;

    while (left && right) {
        std::cout << "left" << left->value << "; right: " << right->value << std::endl;
        if (left->value < right->value) {
            if (!start) {
                start = left;
                last = left;
                left = left->next;
            } else {
                last->next = left;
                left->prev = last;
                left = left->next;
                last = last->next;
            }
        } else {
            if (!start) {
                start = right;
                last = right;
                right = right->next;
            } else {
                last->next = right;
                right->prev = last;
                right = right->next;
                last = last->next;
            }
        }
    }

    if (left) {
        last->next = left;
    } else if (right) {
        last->next = right;
    }

    std::cout << start << std::endl;

    return start;
}

int main() {
    Node a1, a2, a3, b1, b2, b3;
    a1.next = &a2;
    a2.prev = &a1;
    a2.next = &a3;
    a3.prev = &a2;
    a2.value = 1;
    a3.value = 2;

    b1.next = &b2;
    b2.prev = &b1;
    b2.next = &b3;
    b3.prev = &b2;
    b1.value = 4;
    b2.value = 5;
    b3.value = 6;

    auto* res = MergeList(&a1, &b1);

    while (res) {
        std::cout << res->value << ", ";
        res = res->next;
    }
    std::cout << std::endl;
}