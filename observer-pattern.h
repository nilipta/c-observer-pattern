#ifndef OBSERVER_PATTERN_H
#define OBSERVER_PATTERN_H
#include <set>

//this is listener and value changer
class observer{
   public:
      virtual void update() = 0;
};

//this class pushes notification to all subscribers
class Observable{
   
   std::set<observer*> setObservers;

   public:
      Observable(){}
      void addObserver(observer* obs)
      {
         setObservers.insert(obs);
      }
      void removeObserver(observer* obs)
      {
         setObservers.erase(obs);
      }
      void notifyAll()
      {
         std::set<observer*>::iterator it;
         for(it = setObservers.begin(); it != setObservers.end();++it)
         {
            //observer* tempObj = *it;
            // tempObj->update();
            (*it)->update();
         }
      }
};


#endif