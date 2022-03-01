#include <Rcpp.h>
using namespace Rcpp;

//' Run a single replicate individual-based simulation
//' @param ngenerations Number of generations (integer)
//' @export
//' @rawNamespace importFrom(Rcpp,sourceCpp);useDynLib(mutualismLH);
// [[Rcpp::export]]
DataFrame ibm(int ngenerations)
{
  DataFrame the_data;

  return(the_data);
}//end ibm()
