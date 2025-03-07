//
// Copyright 2024 Pixar
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
// Copyright Jim Bosch & Ankit Daftery 2010-2012.
// Copyright Stefan Seefeld 2016.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include "pxr/external/boost/python/numpy.hpp"

namespace p = PXR_BOOST_NAMESPACE::python;
namespace np = PXR_BOOST_NAMESPACE::python::numpy;

struct UnaryCallable
{
  typedef double argument_type;
  typedef double result_type;

  double operator()(double r) const { return r * 2;}
};

struct BinaryCallable
{
  typedef double first_argument_type;
  typedef double second_argument_type;
  typedef double result_type;

  double operator()(double a, double b) const { return a * 2 + b * 3;}
};

PXR_BOOST_PYTHON_MODULE(ufunc_ext)
{
  np::initialize();
  p::class_<UnaryCallable>("UnaryCallable")
    .def("__call__", np::unary_ufunc<UnaryCallable>::make());
  p::class_< BinaryCallable>("BinaryCallable")
    .def("__call__", np::binary_ufunc<BinaryCallable>::make());
}
