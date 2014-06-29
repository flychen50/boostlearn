#define BOOST_DATE_TIME_SOURCE
#include <boost/date_time/gregorian/gregorian.hpp>
#include <iostream>
using namespace boost::gregorian;
int main(  ){
  date d( 2008,11,20 );
  std::cout<<to_iso_string(d)<<std::endl;
}




















