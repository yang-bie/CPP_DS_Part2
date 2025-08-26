//
// Created by Yang on 8/26/25.
//

#ifndef CPP_DS_PART2_ISEVEN_H
#define CPP_DS_PART2_ISEVEN_H

class IsEven {
public:
    bool operator()(int x) {
        return x % 2 == 0;
    }
};
#endif // CPP_DS_PART2_ISEVEN_H
