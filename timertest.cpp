#include <boost/timer.hpp>
#include <iostream>
using namespace boost;
using namespace std;
int main( ){
  timer t;
  cout<<"max timspan:"<<t.elapsed_max()/3600 <<"h"<<endl;
  cout<<"min timespan:"<<t.elapsed_min()<<"s"<<endl;
  cout<<"now time elapsed:"<<t.elapsed()<<"s"<<endl;
}
