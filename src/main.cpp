#include <iostream>

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

int main() {
  std::cout << "Weekday" << std::endl;
  int day;

  std::cout << "Enter weekday" << std::endl;

  std::cin >> day;

  switch (day) {
    case MONDAY:
      std::cout << "Monday" << std::endl;
      break;
    case TUESDAY:
      std::cout << "Tuesday" << std::endl;
      break;
    case WEDNESDAY:
      std::cout << "Wednesday" << std::endl;
      break;
    case THURSDAY:
      std::cout << "Thursday" << std::endl;
      break;
    case FRIDAY:
      std::cout << "Friday" << std::endl;
      break;
    case SATURDAY:
      std::cout << "Saturday" << std::endl;
      break;
    case SUNDAY:
      std::cout << "Sunday" << std::endl;
      break;
    default:
      std::cout << "Such a day of the week does not exist" << std::endl;
      break;
  }

  return 0;
}
