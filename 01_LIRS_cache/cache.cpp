#include <iostream>
#include <cassert>

#include "cache.hpp"

int slow_get_page_int(int key) {                // slow get page imitation
    
    return key; 
}

int main() {

    int cache_size = 0;
    int num_count = 0;
    int hits = 0;

    std::cin >> cache_size >> num_count;
    assert(std::cin.good());

    caches::cache <int> cache{cache_size};

    for (int i = 0; i < num_count; ++i) {
        int num;
        std::cin >> num;
        assert(std::cin.good());

        if (cache.Lirs_algoritm(num, slow_get_page_int)) {
            hits += 1;
        }
    }

    std::cout << hits << std::endl;

    return 0;
}
