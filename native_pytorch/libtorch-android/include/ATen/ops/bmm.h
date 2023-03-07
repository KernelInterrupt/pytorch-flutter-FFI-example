#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/bmm_ops.h>

namespace at {


// aten::bmm(Tensor self, Tensor mat2) -> Tensor
inline at::Tensor bmm(const at::Tensor & self, const at::Tensor & mat2) {
    return at::_ops::bmm::call(self, mat2);
}

// aten::bmm.out(Tensor self, Tensor mat2, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & bmm_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & mat2) {
    return at::_ops::bmm_out::call(self, mat2, out);
}

// aten::bmm.out(Tensor self, Tensor mat2, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & bmm_outf(const at::Tensor & self, const at::Tensor & mat2, at::Tensor & out) {
    return at::_ops::bmm_out::call(self, mat2, out);
}

}
