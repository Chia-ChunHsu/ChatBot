#include "kword.h"

KWord::KWord()
{
    _keyword = "";
    _responses.push_back("");
}

KWord::KWord(std::string keyword, std::vector<std::string> responses)
{
    _keyword = keyword;
    _responses.clear();
    _responses.assign(responses.begin(),responses.end());
}

void KWord::setKeyWord(std::string KeyWord)
{
    _keyword = KeyWord;
}

void KWord::setResponse(std::vector<std::string> responses)
{
    _responses.assign(responses.begin(),responses.end());
}

bool KWord::isKeyWord(std::string input)
{
    if(input==_keyword)
        return true;
    else
        return false;
}

std::string KWord::getResponse()
{
    std::string OutPut;
    for(int i=0;i<_responses.size();i++)
    {

    }
    OutPut = _responses[0];
    return OutPut;
}
