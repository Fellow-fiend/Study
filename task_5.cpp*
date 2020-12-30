#include <iostream>
#include <cmath>

int main()
{
    const int BB = 10000, UB = 100000, Size = log10(UB); // Bottom Border & Upper Border must be a degree of ten
    int number[Size] {}, temp, sum;

    for (int i = BB; i < UB; ++i) {
      temp = i;
      sum = 0;
      // Filling the array of digits and them's summing
      for (int j = 0; j < Size; ++j) {
          sum += number[j] = temp % 10; 
          temp /= 10;
      }
      // Checking the digits for equality
      for (int k = 0; k < Size; ++k)
        for (int j = 0; j < Size; ++j)
          if(k != j && number[k] == number[j])
            goto end;

      // Сhecking the number for condition of task and displaying
      if((number[4]*100 + number[3]*10 + number[2] - (i % 1000)) == sum)
       	std::cout << i << std::endl;
      
      end:;
    }
    return 0;
}

