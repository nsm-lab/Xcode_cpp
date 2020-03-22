//
//  main.cpp
//  hello_world
//
//  Created by Rafeh Qazi on 1/4/16.
//  Copyright (c) 2016 ChessTastic. All rights reserved.
//

#include <iostream>

void
printStats()
{
  for (int i = 0; i < 10; i++) {
    std::cout << i << std::endl;
  }
}

int
main()
{
  std::cout << "Hello, World!\n" << std::endl;
  int arr[5] = { 1, 2, 3, 4, 5 };
  int* arrPtr = arr;
  std::cout << arrPtr << std::endl;
  std::cout << *arrPtr << std::endl;
  arrPtr++;
  std::cout << *arrPtr << std::endl;
  // hello
  printStats();
  return 0;
}