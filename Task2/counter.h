#pragma once

class Counter {
public:
    Counter();

    Counter(int count);

    int get_count();

    void add_count();

    void sub_count();

private:
    int count;
};
