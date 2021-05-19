#pragma once
#include "Stack.h"

template <class T>
class TQueue : public TStack<T>
{
protected:
  int start;             
  int count;             
public:
  TQueue(int n = 0);     
  TQueue(TQueue <T> &q); 
  virtual ~TQueue();     
  T Top();
  void Put(T a);         
  T Get();               
  bool IsFull();         
  bool IsEmpty();        
  void Print();
};

template <class T>
TQueue<T>::TQueue(int n) : TStack<T>(n)
{
  start = 0;
  count = 0;
}//-----------------------------------------------------------------

template <class T>
TQueue<T>::TQueue(TQueue<T> &q) : TStack<T>(q)
{
  start = q.start;
  count = q.count;
}//-----------------------------------------------------------------

template <class T>
TQueue<T>::~TQueue()
{}//-----------------------------------------------------------------

template<class T>
inline T TQueue<T>::Top()
{
  return TStack<T>::mas[start];
}//-----------------------------------------------------------------

template <class T>
void TQueue<T>::Put(T a)
{
  if (IsFull())
    throw MyException("error Put(). Queue is full!");
  else
  {
    TStack<T>::Put(a);
    TStack<T>::top = TStack<T>::top % TStack<T>::size;
    count++;
  }
}//-----------------------------------------------------------------

template <class T>
T TQueue<T>::Get()
{
  if (IsEmpty())
    throw MyException("error Get(). Queue is empty!");
  else
  {
    T temp = TStack<T>::mas[start];
    start = (start + 1) % TStack<T>::size;
    count--;
    return temp;
  }
}//-----------------------------------------------------------------

template <class T>
bool TQueue<T>::IsFull()
{
  if (count == TStack<T>::size)
    return 1;
  return 0;
}//-----------------------------------------------------------------

template <class T>
bool TQueue<T>::IsEmpty()
{
  if (count == 0)
    return 1;
  return 0;
}//-----------------------------------------------------------------

template<class T>
void TQueue<T>::Print()
{
  for (int i = start; i < TStack<T>::top; i = (i + 1) % TStack<T>::size)
    cout << TStack<T>::mas[i];
}//-----------------------------------------------------------------
