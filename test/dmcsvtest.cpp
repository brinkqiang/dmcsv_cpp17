#include "dmcsv.h"
#include "dmutil.h"

int main(){
  std::string strFile = DMGetRootPath() + "..\\data\\addressbook.csv";
  io::DMCSVReader<3> in(strFile);
  in.read_header(io::ignore_extra_column, "name", "age", "ip");
  std::string name;
  std::string age;;
  std::string ip;
  while(in.read_row(name, age, ip)){
    // do stuff with the data
    std::cout << name << "\t"<< age << "\t" << ip << std::endl;
  }

  return 0;
}
