#include <Rcpp.h>
using namespace Rcpp;



// typedefs for function pointers

#ifndef TYPEDEFS
#define TYPEDEFS


typedef double (*EvaluateLogDistributionPtr)(const NumericVector &inputs);

typedef NumericVector (*SimulateDistributionPtr)(void);

typedef double (*EvaluateLogLikelihoodPtr)(const NumericVector &inputs, const NumericVector &data);

typedef double (*EstimateLogLikelihoodPtr)(const NumericVector &inputs, const NumericVector &data, const List &auxiliary_variables);

typedef List (*SimulateModelPtr)(const NumericVector &inputs, const NumericVector &data);

typedef List (*SimulateAuxiliaryVariablesPtr)(const NumericVector &inputs, const NumericVector &data);

typedef XPtr<EstimateLogLikelihoodPtr> (*SetupLikelihoodEstimatorPtr)(const NumericMatrix &inputs, const List &auxiliary_variables);

typedef double (*EvaluateLogABCKernelPtr)(const NumericVector &simulated_data,
                const NumericVector &data,
                const double &abc_tolerance);

typedef NumericVector (*SummaryStatisticsPtr)(const NumericVector &data);

typedef NumericVector (*GetDataFromSimulationPtr)(const List &simulation);


EvaluateLogDistributionPtr load_evaluate_log_distribution(const SEXP &evaluate_log_distribution_SEXP);

SimulateDistributionPtr load_simulate_distribution(const SEXP &simulate_distribution_SEXP);

EvaluateLogLikelihoodPtr load_evaluate_log_likelihood(const SEXP &evaluate_log_likelihood_SEXP);

EstimateLogLikelihoodPtr load_estimate_log_likelihood(const SEXP &estimate_log_likelihood_SEXP);

SimulateModelPtr load_simulate_model(const SEXP &simulate_model_SEXP);

SimulateAuxiliaryVariablesPtr load_simulate_auxiliary_variables(const SEXP &simulate_auxiliary_variables_SEXP);

SetupLikelihoodEstimatorPtr load_setup_likelihood_estimator(const SEXP &setup_likelihood_estimator_SEXP);

EvaluateLogABCKernelPtr load_evaluate_log_abc_kernel(const SEXP &evaluate_log_abc_kernel_SEXP);

SummaryStatisticsPtr load_summary_statistics(const SEXP &summary_statistic_SEXP);

GetDataFromSimulationPtr load_get_data_from_simulation(const SEXP &get_data_from_simulation_SEXP);


NumericVector simulate_distribution_cpp(const SEXP &simulate_distribution_SEXP);

double evaluate_log_distribution_cpp(const SEXP &evaluate_log_distribution_SEXP,
                                     const NumericVector &parameter);

double evaluate_log_likelihood_cpp(const SEXP &evaluate_log_likelihood_SEXP,
                                   const NumericVector &parameter,
                                   const NumericVector &data);

double estimate_log_likelihood_cpp(const SEXP &estimate_log_likelihood_SEXP,
                                   const NumericVector &parameter,
                                   const NumericVector &data,
                                   const List &auxiliary_variables);

List simulate_model_cpp(const SEXP &simulate_model_SEXP,
                        const NumericVector &parameter,
                        const NumericVector &data);

List simulate_auxiliary_variables_cpp(const SEXP &simulate_auxiliary_variables_SEXP,
                                      const NumericVector &parameter,
                                      const NumericVector &data);

double evaluate_log_abc_kernel_cpp(const SEXP &evaluate_log_abc_kernel_SEXP,
                                   const NumericVector &simulated_data,
                                   const NumericVector &data,
                                   const double &abc_tolerance);

NumericVector summary_statistics_cpp(const SEXP &summary_statistics_SEXP,
                             const NumericVector &data);

NumericVector get_data_from_simulation_cpp(const SEXP &get_data_from_simulation_SEXP,
                                     const List &simulation);

#endif
