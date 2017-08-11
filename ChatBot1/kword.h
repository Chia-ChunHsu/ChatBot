#ifndef KWORD_H
#define KWORD_H

#include <string>
#include <vector>

class KWord
{
public:
    KWord();
    KWord(std::string keyword,std::vector<std::string> responses);
    void setKeyWord(std::string KeyWord);
    void setResponse(std::vector<std::string> responses);
    bool isKeyWord(std::string input);
    std::string getResponse();
private:
    std::string _keyword;
    std::vector<std::string> _responses;
};

#endif // KWORD_H
