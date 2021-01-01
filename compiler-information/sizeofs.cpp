#include <iostream>
#include <stdint.h>
#include <string>
#include <string_view>
#include <memory>

template<typename T>
void print_type(const char * s)
{
  auto i = strlen(s);
  std::cout << s;
  for(;i<30;++i) std::cout << ' ';
  std::cout << ": " << sizeof(T)
            << " bytes (x" << CHAR_BIT << " = " 
            << sizeof(T)*CHAR_BIT << " bits)" << '\n';
}

void sizeofs()
{
  print_type<char>("char_t");
  print_type<int8_t>("int8_t");
  print_type<int16_t>("int16_t");
  print_type<int32_t>("int32_t");
  print_type<int64_t>("int32_t");
  std::cout << '\n';
  print_type<int>("int");
  print_type<long>("long");
  print_type<long long>("long long");
  print_type<std::size_t>("std::size_t");
  std::cout << '\n';
  print_type<float>("float");
  print_type<long double>("long double");
  print_type<bool>("bool");
  print_type<bool[32]>("bool[32]");
  std::cout << '\n';
  print_type<std::string>("std::string");
  print_type<std::string>("std::string_view");
  std::cout << '\n';
  print_type<std::string>("std::shared_ptr<int>");
  print_type<std::string>("std::shared_ptr<std::string>");
  std::cout << '\n';
  print_type<std::string>("std::unique_ptr<int>");
  print_type<std::string>("std::unique_ptr<std::string>");
  std::cout << '\n';
  print_type<const char *>("const char *");
  print_type<char * const>("char * const");
  print_type<const char * const>("const char * const");
  print_type<char *>("char *");
}
