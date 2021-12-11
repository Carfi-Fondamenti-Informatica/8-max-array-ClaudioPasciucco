#include "lib.h"
float nMassimo (const float numeri[], int dimensione){
  numeri[dimensione];
  float max = numeri[0];
  for (int i=0; i<dimensione; i++){
    if (max < numeri[i]){
      max = numeri[i];
    }
  }
  return max;
}
