#include "ArrList.h"

int main()
{
  cout << "An example of using the ArrList will be implemented here" << endl;
  cout << "Enter size list: ";
  int n;
  cin >> n;
  cout << endl;
  try
  {
    TArrList<int> aList(n);
    int i;
    for (i = 1; i <= n / 2; i++)
    {
      cout << "Put start: " << i << endl;
      aList.PutStart(i);
    }
    for (i = 0; i < n/2; i++)
    {
      cout << "Put end: " << i << endl;
      aList.PutEnd(i);
    }

    cout << "\n\nList create" << endl;
    aList.Print();
    cout << "\n\n";
    
    aList.file();
    aList.dimk(21);

    for (i = 1; i <= n / 2; i++)
      cout << "Get start: " << aList.GetStart() << endl;
    for (i = 0; i < n/2; i++)
      cout << "Get end: " << aList.GetEnd() << endl;
  }

  catch (MyException exp)
  {
    exp.Print();
  }
  
  
  //-------------------------------------Итератор

     
  return 0;
}
