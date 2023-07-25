    #include <iostream>
    using namespace std;
     
    int main()
    {
      int n, k, count = 0;
      cin >> n >> k;
      int x[n];
      for (int i = 0; i < n; i++)
        cin >> x[i];
      k = k - 1;
      for (int i = 0; i < n; i++)
      {
         if (x[i] >= x[k] && x[i] > 0)
          count++;
      }
      cout << count << endl;
     
      return 0;
    }
