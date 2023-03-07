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



#include <ATen/ops/_scaled_dot_product_attention_math_ops.h>

namespace at {


// aten::_scaled_dot_product_attention_math(Tensor query, Tensor key, Tensor value, Tensor? attn_mask=None, float dropout_p=0.0, bool need_attn_weights=False, bool is_causal=False) -> (Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor> _scaled_dot_product_attention_math(const at::Tensor & query, const at::Tensor & key, const at::Tensor & value, const c10::optional<at::Tensor> & attn_mask={}, double dropout_p=0.0, bool need_attn_weights=false, bool is_causal=false) {
    return at::_ops::_scaled_dot_product_attention_math::call(query, key, value, attn_mask, dropout_p, need_attn_weights, is_causal);
}

}
