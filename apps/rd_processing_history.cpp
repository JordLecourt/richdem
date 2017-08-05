#include <iostream>
#include <iomanip>
#include "richdem/common/version.hpp"
#include "richdem/common/Array2D.hpp"
#include "richdem/common/router.hpp"

int main(int argc, char **argv){
  std::string analysis = PrintRichdemHeader(argc, argv);

  if(argc!=2){
    std::cerr<<"Display the processing history of this raster."<<std::endl;
    std::cerr<<argv[0]<<" <Raster>"<<std::endl;
    return -1;
  }

  Array2D<int8_t> temp(argv[1],false,0,0,0,0,false,false); //Data type doesn't matter since we're not loading it

  if(temp.processing_history.size()!=0)
    std::cout<<temp.processing_history;
  else
    std::cout<<"No processing history!"<<std::endl;

  return 0;
}