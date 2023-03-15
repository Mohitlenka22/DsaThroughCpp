#include <stdio.h>

int get_user_option();
void add_number();
void show_numbers();
void show_min_number();
void show_max_number();

int g_numbers[10];
int g_total_numbers = 0;

int main(void) {
  int user_option;
  while(1)
  {
    user_option = get_user_option();
    if (user_option == 5) 
    {
      break;
    }
    switch(user_option)
    {
      case 1:
        add_number();
        break;
      case 2:
        show_numbers();
        break;
      case 3:
        show_min_number();
        break;
      case 4:
        show_max_number();
        break;
    }
  }
  return 0;
}

int get_user_option()
{
  int option;
  printf("\n\n");
  printf("::Menu::\n");
  printf("1. Add number\n");
  printf("2. Show all numbers\n");
  printf("3. Minimum number\n");
  printf("4. Maximum number\n");
  printf("5. Exit\n");
  
  printf("Choice: ");
  scanf("%d", &option);
  printf("\n\n");
  return option;
}

// if the array is full 
// Show msg: We can only save 10 numbers
void add_number()
{
  int new_number;
  printf("Enter the number to add: ");
  if( g_total_numbers < 10 )
  {
    scanf("%i", &new_number);
    g_numbers[g_total_numbers] = new_number;
    g_total_numbers++; 
  }
  else
  {
    printf("We can only save 10 numbers");
  }
}

void show_numbers()
{
  printf("The %i numbers are:\n", g_total_numbers);
  for (int i = 0; i < g_total_numbers; i++)
  {
      printf("%d ", g_numbers[g_total_numbers]);
  }
  
}
void show_min_number()
{
  int min = g_numbers[0];
  for (int i = 1; i < g_total_numbers; i++)
  {
    if( g_numbers[i] < min)
    {
      min = g_numbers[i];
    }   
  }
  printf("The minimum number is %i.\n", min);
  
}
void show_max_number()
{
  int max = g_numbers[0];
  for (int i = 1; i < g_total_numbers; i++)
  {
    if( g_numbers[i] > max )
    {
      max = g_numbers[i];
    }   
  }
  printf("The maximum number is %i.\n", max);
  
}