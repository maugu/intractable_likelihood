#include <RcppArmadillo.h>
using namespace Rcpp;

#include "smc_output.h"
#include "model_and_algorithm.h"

#ifndef SMC_H
#define SMC_H

class SMC
{
public:

  SMC(const ModelAndAlgorithm* model_and_algorithm_in);
  SMC(const SMC &another);
  virtual ~SMC(void);

  void operator=(const SMC &another);
  virtual SMC* duplicate() const=0;

  SMCOutput do_smc();

protected:

  void make_copy(const SMC &another);

  Particles is_step() const;

  Parameters single_particle_is_step() const;

  virtual SMCOutput smc_step() const=0;

  const ModelAndAlgorithm* model_and_algorithm;

  SMCOutput output;
};

#endif
