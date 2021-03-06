#ifndef PYTHONIC_NUMPY_SUBTRACT_HPP
#define PYTHONIC_NUMPY_SUBTRACT_HPP

#include "pythonic/utils/proxy.hpp"
#include"pythonic/types/ndarray.hpp"
#include "pythonic/types/numpy_broadcast.hpp"
#include "pythonic/utils/numpy_traits.hpp"
#include "pythonic/operator_/sub.hpp"

namespace pythonic {

    namespace numpy {
    #define NUMPY_NARY_FUNC_NAME subtract
    #define NUMPY_NARY_FUNC_SYM pythonic::operator_::sub
    #include "pythonic/types/numpy_nary_expr.hpp"

    }

}

#endif

