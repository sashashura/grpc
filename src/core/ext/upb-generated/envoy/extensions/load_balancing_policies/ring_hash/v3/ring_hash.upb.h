/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/load_balancing_policies/ring_hash/v3/ring_hash.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_EXTENSIONS_LOAD_BALANCING_POLICIES_RING_HASH_V3_RING_HASH_PROTO_UPB_H_
#define ENVOY_EXTENSIONS_LOAD_BALANCING_POLICIES_RING_HASH_V3_RING_HASH_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash;
typedef struct envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash;
extern const upb_MiniTable envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_msginit;
struct google_protobuf_UInt32Value;
struct google_protobuf_UInt64Value;
extern const upb_MiniTable google_protobuf_UInt32Value_msginit;
extern const upb_MiniTable google_protobuf_UInt64Value_msginit;

typedef enum {
  envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_DEFAULT_HASH = 0,
  envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_XX_HASH = 1,
  envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_MURMUR_HASH_2 = 2
} envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_HashFunction;



/* envoy.extensions.load_balancing_policies.ring_hash.v3.RingHash */

UPB_INLINE envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_new(upb_Arena* arena) {
  return (envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash*)_upb_Message_New(&envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_msginit, arena);
}
UPB_INLINE envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* ret = envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* ret = envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_serialize(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_msginit, 0, arena, len);
}
UPB_INLINE char* envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_serialize_ex(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_msginit, options, arena, len);
}
UPB_INLINE void envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_clear_hash_function(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t) = 0;
}
UPB_INLINE int32_t envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_hash_function(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t);
}
UPB_INLINE bool envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_has_minimum_ring_size(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_clear_minimum_ring_size(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 16), const upb_Message*) = NULL;
}
UPB_INLINE const struct google_protobuf_UInt64Value* envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_minimum_ring_size(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(12, 16), const struct google_protobuf_UInt64Value*);
}
UPB_INLINE bool envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_has_maximum_ring_size(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  return _upb_hasbit(msg, 2);
}
UPB_INLINE void envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_clear_maximum_ring_size(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 24), const upb_Message*) = NULL;
}
UPB_INLINE const struct google_protobuf_UInt64Value* envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_maximum_ring_size(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(16, 24), const struct google_protobuf_UInt64Value*);
}
UPB_INLINE void envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_clear_use_hostname_for_hashing(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), bool) = 0;
}
UPB_INLINE bool envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_use_hostname_for_hashing(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), bool);
}
UPB_INLINE bool envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_has_hash_balance_factor(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  return _upb_hasbit(msg, 3);
}
UPB_INLINE void envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_clear_hash_balance_factor(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(20, 32), const upb_Message*) = NULL;
}
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_hash_balance_factor(const envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(20, 32), const struct google_protobuf_UInt32Value*);
}

UPB_INLINE void envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_set_hash_function(envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t) = value;
}
UPB_INLINE void envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_set_minimum_ring_size(envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash *msg, struct google_protobuf_UInt64Value* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(12, 16), struct google_protobuf_UInt64Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt64Value* envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_mutable_minimum_ring_size(envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg, upb_Arena* arena) {
  struct google_protobuf_UInt64Value* sub = (struct google_protobuf_UInt64Value*)envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_minimum_ring_size(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt64Value*)_upb_Message_New(&google_protobuf_UInt64Value_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_set_minimum_ring_size(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_set_maximum_ring_size(envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash *msg, struct google_protobuf_UInt64Value* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(16, 24), struct google_protobuf_UInt64Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt64Value* envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_mutable_maximum_ring_size(envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg, upb_Arena* arena) {
  struct google_protobuf_UInt64Value* sub = (struct google_protobuf_UInt64Value*)envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_maximum_ring_size(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt64Value*)_upb_Message_New(&google_protobuf_UInt64Value_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_set_maximum_ring_size(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_set_use_hostname_for_hashing(envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), bool) = value;
}
UPB_INLINE void envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_set_hash_balance_factor(envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash *msg, struct google_protobuf_UInt32Value* value) {
  _upb_sethas(msg, 3);
  *UPB_PTR_AT(msg, UPB_SIZE(20, 32), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_mutable_hash_balance_factor(envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash* msg, upb_Arena* arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_hash_balance_factor(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_Message_New(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_load_balancing_policies_ring_hash_v3_RingHash_set_hash_balance_factor(msg, sub);
  }
  return sub;
}

extern const upb_MiniTable_File envoy_extensions_load_balancing_policies_ring_hash_v3_ring_hash_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_EXTENSIONS_LOAD_BALANCING_POLICIES_RING_HASH_V3_RING_HASH_PROTO_UPB_H_ */
