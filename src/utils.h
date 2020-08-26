#include <Rcpp.h>
using namespace Rcpp;

//#include "function_pointers.h"

#ifndef UTILS_H
#define UTILS_H



// // From SymbolixAU at https://stackoverflow.com/questions/59055902/find-index-of-all-max-min-values-in-vector-in-rcpp
// IntegerVector which_max(const NumericVector &v)
// {
//   double current_max = v[0];
//   int n = v.size();
//   std::vector< int > res;
//   res.push_back( 0 );
//   int i;
//
//   for( i = 1; i < n; ++i) {
//     double x = v[i];
//     if( x > current_max ) {
//       res.clear();
//       current_max = x;
//       res.push_back( i );
//     } else if ( x == current_max ) {
//       res.push_back( i );
//     }
//   }
//   Rcpp::IntegerVector iv( res.begin(), res.end() );
//   return iv;
// }

double log_sum_exp(const NumericVector &log_weights);


// double EstimateLogLikelihoodUsingEvaluate(const NumericVector &inputs, const NumericVector &data, const List &auxiliary_variables)
// {
//   return 1;
// }
//
//
// EstimateLogLikelihoodPtr make_estimate_log_likelihood_function_from_evaluate(const EvaluateLogLikelihoodPtr &evaluate_log_likelihood)
// {
//
// }

#endif