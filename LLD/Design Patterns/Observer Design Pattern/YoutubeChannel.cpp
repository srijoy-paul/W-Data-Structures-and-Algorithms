#include "Observer.hpp"
#include "Subject.hpp"
#include <vector>
using namespace std;

class YoutubeChannel : public Subject
{
    vector<Observer *> subscribers;

public:
    void subscribe(Observer *ob)
    {
        subscribers.push_back(ob);
    };
    void unsubscribe(Observer *ob)
    {
        int obIndx;
        for (int i = 0; i < subscribers.size(); i++)
        {
            if (subscribers[i]->id == ob->id)
                obIndx = i;
        }
        for (int i = obIndx; i < subscribers.size() - 1; i++)
        {
            subscribers[i] = subscribers[i + 1];
        }
        subscribers.pop_back();
    }
    void notifyChanges()
    {
        for (auto sub : subscribers)
        {
            sub.notified();
        }
    }
};