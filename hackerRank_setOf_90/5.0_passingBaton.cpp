
#include <iostream>

using namespace std;

int main ()
{


  long fr ; cin >> fr;

  long long ti ; cin >> ti;

  long complete = ti / (fr - 1);

  long balance = ti % (fr - 1);

  if (complete % 2 == 0)
    {

      if (balance == 0)
	{

	  cout << 2 << " " << 1;

	  return 0;

	}

      cout << balance << " " << balance + 1;

    }

  else
    {

      if (balance == 0)
	{

	  cout << fr - 1 << " " << fr;

	  return 0;

	}

      cout << fr - balance + 1 << " " << fr - balance;

    }

  return 0;

}
