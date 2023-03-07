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



#include <ATen/ops/upsample_bilinear2d_backward_ops.h>

namespace at {


// aten::upsample_bilinear2d_backward.vec(Tensor grad_output, SymInt[]? output_size, SymInt[] input_size, bool align_corners, float[]? scale_factors) -> Tensor
inline at::Tensor upsample_bilinear2d_backward(const at::Tensor & grad_output, at::OptionalIntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_bilinear2d_backward_vec::call(grad_output, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRef(*output_size)) : c10::nullopt, c10::fromIntArrayRef(input_size), align_corners, scale_factors);
}

// aten::upsample_bilinear2d_backward.vec(Tensor grad_output, SymInt[]? output_size, SymInt[] input_size, bool align_corners, float[]? scale_factors) -> Tensor
inline at::Tensor upsample_bilinear2d_backward_symint(const at::Tensor & grad_output, at::OptionalSymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_bilinear2d_backward_vec::call(grad_output, output_size, input_size, align_corners, scale_factors);
}

// aten::upsample_bilinear2d_backward.grad_input(Tensor grad_output, SymInt[2] output_size, SymInt[4] input_size, bool align_corners, float? scales_h=None, float? scales_w=None, *, Tensor(a!) grad_input) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_backward_out(at::Tensor & grad_input, const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<double> scales_h=c10::nullopt, c10::optional<double> scales_w=c10::nullopt) {
    return at::_ops::upsample_bilinear2d_backward_grad_input::call(grad_output, c10::fromIntArrayRef(output_size), c10::fromIntArrayRef(input_size), align_corners, scales_h, scales_w, grad_input);
}

// aten::upsample_bilinear2d_backward.grad_input(Tensor grad_output, SymInt[2] output_size, SymInt[4] input_size, bool align_corners, float? scales_h=None, float? scales_w=None, *, Tensor(a!) grad_input) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_backward_outf(const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & grad_input) {
    return at::_ops::upsample_bilinear2d_backward_grad_input::call(grad_output, c10::fromIntArrayRef(output_size), c10::fromIntArrayRef(input_size), align_corners, scales_h, scales_w, grad_input);
}

// aten::upsample_bilinear2d_backward.grad_input(Tensor grad_output, SymInt[2] output_size, SymInt[4] input_size, bool align_corners, float? scales_h=None, float? scales_w=None, *, Tensor(a!) grad_input) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_backward_symint_out(at::Tensor & grad_input, const at::Tensor & grad_output, c10::SymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<double> scales_h=c10::nullopt, c10::optional<double> scales_w=c10::nullopt) {
    return at::_ops::upsample_bilinear2d_backward_grad_input::call(grad_output, output_size, input_size, align_corners, scales_h, scales_w, grad_input);
}

// aten::upsample_bilinear2d_backward.grad_input(Tensor grad_output, SymInt[2] output_size, SymInt[4] input_size, bool align_corners, float? scales_h=None, float? scales_w=None, *, Tensor(a!) grad_input) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_backward_symint_outf(const at::Tensor & grad_output, c10::SymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & grad_input) {
    return at::_ops::upsample_bilinear2d_backward_grad_input::call(grad_output, output_size, input_size, align_corners, scales_h, scales_w, grad_input);
}

// aten::upsample_bilinear2d_backward(Tensor grad_output, SymInt[2] output_size, SymInt[4] input_size, bool align_corners, float? scales_h=None, float? scales_w=None) -> Tensor
inline at::Tensor upsample_bilinear2d_backward(const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<double> scales_h=c10::nullopt, c10::optional<double> scales_w=c10::nullopt) {
    return at::_ops::upsample_bilinear2d_backward::call(grad_output, c10::fromIntArrayRef(output_size), c10::fromIntArrayRef(input_size), align_corners, scales_h, scales_w);
}

// aten::upsample_bilinear2d_backward(Tensor grad_output, SymInt[2] output_size, SymInt[4] input_size, bool align_corners, float? scales_h=None, float? scales_w=None) -> Tensor
inline at::Tensor upsample_bilinear2d_backward_symint(const at::Tensor & grad_output, c10::SymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<double> scales_h=c10::nullopt, c10::optional<double> scales_w=c10::nullopt) {
    return at::_ops::upsample_bilinear2d_backward::call(grad_output, output_size, input_size, align_corners, scales_h, scales_w);
}

// aten::upsample_bilinear2d_backward.vec_out(Tensor grad_output, SymInt[]? output_size, SymInt[] input_size, bool align_corners, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_backward_out(at::Tensor & out, const at::Tensor & grad_output, at::OptionalIntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_bilinear2d_backward_vec_out::call(grad_output, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRef(*output_size)) : c10::nullopt, c10::fromIntArrayRef(input_size), align_corners, scale_factors, out);
}

// aten::upsample_bilinear2d_backward.vec_out(Tensor grad_output, SymInt[]? output_size, SymInt[] input_size, bool align_corners, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_backward_outf(const at::Tensor & grad_output, at::OptionalIntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out) {
    return at::_ops::upsample_bilinear2d_backward_vec_out::call(grad_output, output_size.has_value() ? c10::make_optional(c10::fromIntArrayRef(*output_size)) : c10::nullopt, c10::fromIntArrayRef(input_size), align_corners, scale_factors, out);
}

// aten::upsample_bilinear2d_backward.vec_out(Tensor grad_output, SymInt[]? output_size, SymInt[] input_size, bool align_corners, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_backward_symint_out(at::Tensor & out, const at::Tensor & grad_output, at::OptionalSymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
    return at::_ops::upsample_bilinear2d_backward_vec_out::call(grad_output, output_size, input_size, align_corners, scale_factors, out);
}

// aten::upsample_bilinear2d_backward.vec_out(Tensor grad_output, SymInt[]? output_size, SymInt[] input_size, bool align_corners, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & upsample_bilinear2d_backward_symint_outf(const at::Tensor & grad_output, at::OptionalSymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out) {
    return at::_ops::upsample_bilinear2d_backward_vec_out::call(grad_output, output_size, input_size, align_corners, scale_factors, out);
}

}
