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



#include <ATen/ops/batch_norm_backward_elemt_ops.h>

namespace at {


// aten::batch_norm_backward_elemt(Tensor grad_out, Tensor input, Tensor mean, Tensor invstd, Tensor? weight, Tensor mean_dy, Tensor mean_dy_xmu, Tensor count) -> Tensor
inline at::Tensor batch_norm_backward_elemt(const at::Tensor & grad_out, const at::Tensor & input, const at::Tensor & mean, const at::Tensor & invstd, const c10::optional<at::Tensor> & weight, const at::Tensor & mean_dy, const at::Tensor & mean_dy_xmu, const at::Tensor & count) {
    return at::_ops::batch_norm_backward_elemt::call(grad_out, input, mean, invstd, weight, mean_dy, mean_dy_xmu, count);
}

// aten::batch_norm_backward_elemt.out(Tensor grad_out, Tensor input, Tensor mean, Tensor invstd, Tensor? weight, Tensor mean_dy, Tensor mean_dy_xmu, Tensor count, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & batch_norm_backward_elemt_out(at::Tensor & out, const at::Tensor & grad_out, const at::Tensor & input, const at::Tensor & mean, const at::Tensor & invstd, const c10::optional<at::Tensor> & weight, const at::Tensor & mean_dy, const at::Tensor & mean_dy_xmu, const at::Tensor & count) {
    return at::_ops::batch_norm_backward_elemt_out::call(grad_out, input, mean, invstd, weight, mean_dy, mean_dy_xmu, count, out);
}

// aten::batch_norm_backward_elemt.out(Tensor grad_out, Tensor input, Tensor mean, Tensor invstd, Tensor? weight, Tensor mean_dy, Tensor mean_dy_xmu, Tensor count, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & batch_norm_backward_elemt_outf(const at::Tensor & grad_out, const at::Tensor & input, const at::Tensor & mean, const at::Tensor & invstd, const c10::optional<at::Tensor> & weight, const at::Tensor & mean_dy, const at::Tensor & mean_dy_xmu, const at::Tensor & count, at::Tensor & out) {
    return at::_ops::batch_norm_backward_elemt_out::call(grad_out, input, mean, invstd, weight, mean_dy, mean_dy_xmu, count, out);
}

}
