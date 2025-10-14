//40: Գրել wrapper function malloc function-ի համար որի մեջ cout կանենք մեր կողմից տպվոտ տեքստը
// և այդ ֆունկցիան օգտագործել նախորդ խնդիրներում operator new-ն վերասահամնելու ժամանակ
#include <iostream>
void my_malloc(std::size_t size, void** ptr) {
    *ptr = malloc(size);
    if (!(*ptr)) {
        *ptr = nullptr;
    }
}
int main() {
    int* ptr;
    my_malloc(5 * sizeof(int), (void**)&ptr);
    if (!ptr) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "Memory allocated " << std::endl;
    }
}
