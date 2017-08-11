#ifndef KWORDBLOCK_H
#define KWORDBLOCK_H

#include <kword.h>
#include <vector>
class KWordBlock
{
public:
    KWordBlock();
    std::string Find(std::string input);
private:
    void Initial();
    std::vector<KWord> KWordList;
};

#endif // KWORDBLOCK_H
