#include <iostream>
#include <boost/xpressive/xpressive.hpp>

using namespace boost::xpressive;
using namespace std;

int main() {

   string card_number = "1111-2222 3333-4444";
   sregex card_regex = sregex::compile("\\d{4}[- ]\\d{4}[- ]\\d{4}[- ]\\d{4}");

   if (regex_match(card_number, card_regex)) {
      cout << "Success" << endl;
   }
   else {
      cout << "Bad credit card number" << endl;
   }

   return 0;
}