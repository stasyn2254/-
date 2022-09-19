# -#include <string>

std::string even_or_odd(int number) 
{
  if(number%2==0) //якщо число ділиться націло на 2
  return "Even";
  else return "Odd"; //інакше повертаємо непарне
}
