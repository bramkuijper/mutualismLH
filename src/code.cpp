#include <Rcpp.h>
#include "ibm_mutualism.h"

//' Run a single replicate individual-based simulation
//' @param ngenerations Number of generations (integer)
//' @param d1 Juvenile dispersal probability species 1 (double)
//' @param d2 Juvenile dispersal probability species 2 (double)
//' @param npp1 Number of adults of species 1 per patch (integer)
//' @param npp2 Number of adults of species 2 per patch (integer)
//' @export
//' @rawNamespace importFrom(Rcpp,sourceCpp);useDynLib(mutualismLH);
// [[Rcpp::export]]
Rcpp::DataFrame ibm(int ngenerations=10,
                    double d1=0.5,
                    double d2=0.5,
                    int npp1=2,
                    int npp2=2
                    )
{
  Rcpp::DataFrame the_data;

  IBM_parameters params;
  params.ngenerations = ngenerations;

  IBM_Mutualism IBMM(params);

  return(the_data);
}//end ibm()
