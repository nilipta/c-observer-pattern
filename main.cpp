#include<iostream>
#include "observer-pattern.h"

class myObservable : public Observable{
   int num;

   public:
      myObservable():num(0){}
      void setNumber(int x)
      {
         num = x;
         notifyAll();
      }
      int getNumber()
      {
         return num;
      }
};

class observerA : public observer
{
   myObservable* tempObservable;
   int x;
   public:
      observerA(myObservable* subject)
      {
         tempObservable = subject;
         tempObservable->addObserver(this);
      }
      void changeData(int x)
      {
         tempObservable->setNumber(x);
         std::cout << "Class A changing " << x << std::endl;
      }
      void update()
      {
         x = tempObservable->getNumber();
         std::cout << "the class A number is " << x << std::endl;
      }
};

class observerB : public observer
{
   myObservable* tempObservable;
   int x;
   public:
      observerB(myObservable* subject)
      {
         tempObservable = subject;
         tempObservable->addObserver(this);
      }
      void changeData(int x)
      {
         tempObservable->setNumber(x);
         std::cout << "Class B changing " << x << std::endl;
      }
      void update()
      {
         x = tempObservable->getNumber();
         std::cout << "the class B number is " << x << std::endl;
      }
};

class observerC : public observer
{
   myObservable* tempObservable;
   int x;
   public:
      observerC(myObservable* subject)
      {
         tempObservable = subject;
         tempObservable->addObserver(this);
      }
      void changeData(int x)
      {
         tempObservable->setNumber(x);
         std::cout << "Class C changing " << x << std::endl;
      }
      void update()
      {
         x = tempObservable->getNumber();
         std::cout << "the class C number is " << x << std::endl;
      }
};

class observerD : public observer
{
   myObservable* tempObservable;
   int x;
   public:
      observerD(myObservable* subject)
      {
         tempObservable = subject;
         tempObservable->addObserver(this);
      }
      void changeData(int x)
      {
         tempObservable->setNumber(x);
         std::cout << "Class D changing " << x << std::endl;
      }
      void update()
      {
         x = tempObservable->getNumber();
         std::cout << "the class D number is " << x << std::endl;
      }
};

int main()
{
   myObservable obj;
   observerA objA(&obj);
   observerB objB(&obj);
   observerC objC(&obj);
   observerD objD(&obj);

   objA.changeData(10);
   objB.changeData(20);
   objC.changeData(30);
   objD.changeData(40);

   return 0;
}