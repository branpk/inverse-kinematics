#ifndef _IK_SOLVER_HPP
#define _IK_SOLVER_HPP


#include <functional>

#include "linalg.hpp"


template <size_t N, size_t M>
struct diff_map {
  std::function<void(vectorf<M> &, const vectorf<N> &)> value;
  std::function<void(matrixf<M, N> &, const vectorf<N> &)> deriv;
};

template <size_t N, size_t M>
void ik_solve(vectorf<N> &current, diff_map<N, M> func);


#include "ik_solver.inl"


#endif
