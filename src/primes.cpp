#include "primes.h"

vector<int> primeDivision(int number){
    vector<int> primeReturner;
    for (int i = 2; i <= number; i ++){
       if ((number%i) == 0) {
           primeReturner.push_back(i);
           number/=i;
           while (number%i == 0){
               number/= i;
               primeReturner.push_back(i);
           }
        }

    }
    return primeReturner;
}