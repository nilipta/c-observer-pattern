
# output

```
the class D number is 10
the class C number is 10
the class B number is 10
the class A number is 10
Class A changing 10
the class D number is 20
the class C number is 20
the class B number is 20
the class A number is 20
Class B changing 20
the class D number is 30
the class C number is 30
the class B number is 30
the class A number is 30
Class C changing 30
the class D number is 40
the class C number is 40
the class B number is 40
the class A number is 40
Class D changing 40

```
# 
> code of observer and observable

```cpp

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

```