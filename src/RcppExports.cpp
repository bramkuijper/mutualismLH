// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ibm
Rcpp::DataFrame ibm(int ngenerations, double d1, double d2, int npp1, int npp2);
RcppExport SEXP _mutualismLH_ibm(SEXP ngenerationsSEXP, SEXP d1SEXP, SEXP d2SEXP, SEXP npp1SEXP, SEXP npp2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ngenerations(ngenerationsSEXP);
    Rcpp::traits::input_parameter< double >::type d1(d1SEXP);
    Rcpp::traits::input_parameter< double >::type d2(d2SEXP);
    Rcpp::traits::input_parameter< int >::type npp1(npp1SEXP);
    Rcpp::traits::input_parameter< int >::type npp2(npp2SEXP);
    rcpp_result_gen = Rcpp::wrap(ibm(ngenerations, d1, d2, npp1, npp2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mutualismLH_ibm", (DL_FUNC) &_mutualismLH_ibm, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_mutualismLH(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
