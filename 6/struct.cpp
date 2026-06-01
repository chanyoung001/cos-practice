#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct human_st {
    const char *name;
    int age;
    int gender;
} human_t;

int main(int argc, char *argv[])
{
    human_t *hw;
    hw = (human_t *)malloc(sizeof(human_t));
    hw->name = "Hyunwoo";
    hw->age = 40;
    hw->gender = 0;

    cout << "name: " << hw->name << " age: " << hw->age << " gender: " << hw->gender << endl;

    return 0;
}
