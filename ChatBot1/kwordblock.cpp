#include "kwordblock.h"

KWordBlock::KWordBlock()
{
    Initial();
}

std::string KWordBlock::Find(std::string input)
{
    std::string OutPut = "Execuse?";
    for(int i=0;i<KWordList.size();i++)
    {
        if(KWordList[i].isKeyWord(input))
        {
            OutPut = KWordList[i].getResponse();
        }
    }
    return OutPut;
}

void KWordBlock::Initial()
{
    KWordList.clear();
    //KWord(std::string keyword,std::vector<std::string> responses)
    std::vector<std::string> Responses;
    Responses.push_back("Hi, I am QBot");
    KWordList.push_back(KWord("Who are you",Responses));
    Responses.clear();
    Responses.push_back("Hello, can I help you?");
    KWordList.push_back(KWord("Hello",Responses));
}
