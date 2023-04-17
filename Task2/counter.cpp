#include "counter.h"

Counter::Counter():Counter(1) {
}

Counter::Counter(int count) {
    this->count = count;
}

int Counter::get_count() {
    return count;
}

void Counter::add_count() {
    ++count;
}

void Counter::sub_count() {
    --count;
}
