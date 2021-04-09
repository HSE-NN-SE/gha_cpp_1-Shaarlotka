#include "Prime.h"

int main(){
  Prime num1,num2;
	num1.setValue(3);
	num2.setValue(13);
	cout << num1.countBetween(num2);
  return 0;
}
