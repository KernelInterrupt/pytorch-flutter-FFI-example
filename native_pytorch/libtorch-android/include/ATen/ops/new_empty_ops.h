#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API new_empty {
  using schema = at::Tensor (const at::Tensor &, c10::SymIntArrayRef, c10::optional<at::ScalarType>, c10::optional<at::Layout>, c10::optional<at::Device>, c10::optional<bool>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::new_empty")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "new_empty(Tensor self, SymInt[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor")
  static at::Tensor call(const at::Tensor & self, c10::SymIntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::SymIntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
};

struct TORCH_API new_empty_out {
  using schema = at::Tensor & (const at::Tensor &, c10::SymIntArrayRef, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::new_empty")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "new_empty.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, c10::SymIntArrayRef size, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::SymIntArrayRef size, at::Tensor & out);
};

}} // namespace at::_ops
