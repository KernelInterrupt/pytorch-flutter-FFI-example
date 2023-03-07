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



#include <ATen/ops/cudnn_convolution_transpose_ops.h>

namespace at {


// aten::cudnn_convolution_transpose(Tensor self, Tensor weight, int[] padding, int[] output_padding, int[] stride, int[] dilation, int groups, bool benchmark, bool deterministic, bool allow_tf32) -> Tensor
inline at::Tensor cudnn_convolution_transpose(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, bool allow_tf32) {
    return at::_ops::cudnn_convolution_transpose::call(self, weight, padding, output_padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
}

// aten::cudnn_convolution_transpose.out(Tensor self, Tensor weight, int[] padding, int[] output_padding, int[] stride, int[] dilation, int groups, bool benchmark, bool deterministic, bool allow_tf32, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & cudnn_convolution_transpose_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, bool allow_tf32) {
    return at::_ops::cudnn_convolution_transpose_out::call(self, weight, padding, output_padding, stride, dilation, groups, benchmark, deterministic, allow_tf32, out);
}

// aten::cudnn_convolution_transpose.out(Tensor self, Tensor weight, int[] padding, int[] output_padding, int[] stride, int[] dilation, int groups, bool benchmark, bool deterministic, bool allow_tf32, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & cudnn_convolution_transpose_outf(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, bool allow_tf32, at::Tensor & out) {
    return at::_ops::cudnn_convolution_transpose_out::call(self, weight, padding, output_padding, stride, dilation, groups, benchmark, deterministic, allow_tf32, out);
}

}
