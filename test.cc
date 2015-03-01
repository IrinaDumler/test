#include <thread>
#include <iostream>

#include "test.h"
#include "test1.h"

void hello(int threadCnt){
  std::cout << "Hello from thread " << threadCnt << std::endl;
}

int main(){
  TestStruct t;
  t.x = 100;
  TestMoreStruct tm;
  tm.t = t;
  tm.y = 200;
  std::cout << "Hello from main" << tm.t.x + tm.y << std::endl;

  std::thread t1(hello,1);
  std::thread t2(hello,2);
  t1.join();
  t2.join();

  return 0;
}
