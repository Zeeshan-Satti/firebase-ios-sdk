/*
 * Copyright 2024 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: firestore/local/mutation.proto

#include "firestore/local/mutation.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace firestore {
namespace client {

inline constexpr MutationQueue::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : last_stream_token_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        last_acknowledged_batch_id_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR MutationQueue::MutationQueue(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct MutationQueueDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MutationQueueDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~MutationQueueDefaultTypeInternal() {}
  union {
    MutationQueue _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MutationQueueDefaultTypeInternal _MutationQueue_default_instance_;

inline constexpr WriteBatch::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        writes_{},
        base_writes_{},
        local_write_time_{nullptr},
        batch_id_{0} {}

template <typename>
PROTOBUF_CONSTEXPR WriteBatch::WriteBatch(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct WriteBatchDefaultTypeInternal {
  PROTOBUF_CONSTEXPR WriteBatchDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~WriteBatchDefaultTypeInternal() {}
  union {
    WriteBatch _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 WriteBatchDefaultTypeInternal _WriteBatch_default_instance_;
}  // namespace client
}  // namespace firestore
static ::_pb::Metadata file_level_metadata_firestore_2flocal_2fmutation_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_firestore_2flocal_2fmutation_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_firestore_2flocal_2fmutation_2eproto = nullptr;
const ::uint32_t TableStruct_firestore_2flocal_2fmutation_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::firestore::client::MutationQueue, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::firestore::client::MutationQueue, _impl_.last_acknowledged_batch_id_),
    PROTOBUF_FIELD_OFFSET(::firestore::client::MutationQueue, _impl_.last_stream_token_),
    PROTOBUF_FIELD_OFFSET(::firestore::client::WriteBatch, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::firestore::client::WriteBatch, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::firestore::client::WriteBatch, _impl_.batch_id_),
    PROTOBUF_FIELD_OFFSET(::firestore::client::WriteBatch, _impl_.writes_),
    PROTOBUF_FIELD_OFFSET(::firestore::client::WriteBatch, _impl_.local_write_time_),
    PROTOBUF_FIELD_OFFSET(::firestore::client::WriteBatch, _impl_.base_writes_),
    ~0u,
    ~0u,
    0,
    ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::firestore::client::MutationQueue)},
        {10, 22, -1, sizeof(::firestore::client::WriteBatch)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::firestore::client::_MutationQueue_default_instance_._instance,
    &::firestore::client::_WriteBatch_default_instance_._instance,
};
const char descriptor_table_protodef_firestore_2flocal_2fmutation_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\036firestore/local/mutation.proto\022\020firest"
    "ore.client\032\037google/firestore/v1/write.pr"
    "oto\032\037google/protobuf/timestamp.proto\"N\n\r"
    "MutationQueue\022\"\n\032last_acknowledged_batch"
    "_id\030\001 \001(\005\022\031\n\021last_stream_token\030\002 \001(\014\"\261\001\n"
    "\nWriteBatch\022\020\n\010batch_id\030\001 \001(\005\022*\n\006writes\030"
    "\002 \003(\0132\032.google.firestore.v1.Write\0224\n\020loc"
    "al_write_time\030\003 \001(\0132\032.google.protobuf.Ti"
    "mestamp\022/\n\013base_writes\030\004 \003(\0132\032.google.fi"
    "restore.v1.WriteB/\n#com.google.firebase."
    "firestore.protoP\001\242\002\005FSTPBb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_firestore_2flocal_2fmutation_2eproto_deps[2] =
    {
        &::descriptor_table_google_2ffirestore_2fv1_2fwrite_2eproto,
        &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::absl::once_flag descriptor_table_firestore_2flocal_2fmutation_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_firestore_2flocal_2fmutation_2eproto = {
    false,
    false,
    433,
    descriptor_table_protodef_firestore_2flocal_2fmutation_2eproto,
    "firestore/local/mutation.proto",
    &descriptor_table_firestore_2flocal_2fmutation_2eproto_once,
    descriptor_table_firestore_2flocal_2fmutation_2eproto_deps,
    2,
    2,
    schemas,
    file_default_instances,
    TableStruct_firestore_2flocal_2fmutation_2eproto::offsets,
    file_level_metadata_firestore_2flocal_2fmutation_2eproto,
    file_level_enum_descriptors_firestore_2flocal_2fmutation_2eproto,
    file_level_service_descriptors_firestore_2flocal_2fmutation_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_firestore_2flocal_2fmutation_2eproto_getter() {
  return &descriptor_table_firestore_2flocal_2fmutation_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_firestore_2flocal_2fmutation_2eproto(&descriptor_table_firestore_2flocal_2fmutation_2eproto);
namespace firestore {
namespace client {
// ===================================================================

class MutationQueue::_Internal {
 public:
};

MutationQueue::MutationQueue(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:firestore.client.MutationQueue)
}
inline PROTOBUF_NDEBUG_INLINE MutationQueue::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : last_stream_token_(arena, from.last_stream_token_),
        _cached_size_{0} {}

MutationQueue::MutationQueue(
    ::google::protobuf::Arena* arena,
    const MutationQueue& from)
    : ::google::protobuf::Message(arena) {
  MutationQueue* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.last_acknowledged_batch_id_ = from._impl_.last_acknowledged_batch_id_;

  // @@protoc_insertion_point(copy_constructor:firestore.client.MutationQueue)
}
inline PROTOBUF_NDEBUG_INLINE MutationQueue::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : last_stream_token_(arena),
        _cached_size_{0} {}

inline void MutationQueue::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.last_acknowledged_batch_id_ = {};
}
MutationQueue::~MutationQueue() {
  // @@protoc_insertion_point(destructor:firestore.client.MutationQueue)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void MutationQueue::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.last_stream_token_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void MutationQueue::Clear() {
// @@protoc_insertion_point(message_clear_start:firestore.client.MutationQueue)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.last_stream_token_.ClearToEmpty();
  _impl_.last_acknowledged_batch_id_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* MutationQueue::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> MutationQueue::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_MutationQueue_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // bytes last_stream_token = 2;
    {::_pbi::TcParser::FastBS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(MutationQueue, _impl_.last_stream_token_)}},
    // int32 last_acknowledged_batch_id = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(MutationQueue, _impl_.last_acknowledged_batch_id_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(MutationQueue, _impl_.last_acknowledged_batch_id_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 last_acknowledged_batch_id = 1;
    {PROTOBUF_FIELD_OFFSET(MutationQueue, _impl_.last_acknowledged_batch_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // bytes last_stream_token = 2;
    {PROTOBUF_FIELD_OFFSET(MutationQueue, _impl_.last_stream_token_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* MutationQueue::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:firestore.client.MutationQueue)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 last_acknowledged_batch_id = 1;
  if (this->_internal_last_acknowledged_batch_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_last_acknowledged_batch_id(), target);
  }

  // bytes last_stream_token = 2;
  if (!this->_internal_last_stream_token().empty()) {
    const std::string& _s = this->_internal_last_stream_token();
    target = stream->WriteBytesMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:firestore.client.MutationQueue)
  return target;
}

::size_t MutationQueue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:firestore.client.MutationQueue)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes last_stream_token = 2;
  if (!this->_internal_last_stream_token().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_last_stream_token());
  }

  // int32 last_acknowledged_batch_id = 1;
  if (this->_internal_last_acknowledged_batch_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_last_acknowledged_batch_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData MutationQueue::_class_data_ = {
    MutationQueue::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* MutationQueue::GetClassData() const {
  return &_class_data_;
}

void MutationQueue::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<MutationQueue*>(&to_msg);
  auto& from = static_cast<const MutationQueue&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:firestore.client.MutationQueue)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_last_stream_token().empty()) {
    _this->_internal_set_last_stream_token(from._internal_last_stream_token());
  }
  if (from._internal_last_acknowledged_batch_id() != 0) {
    _this->_internal_set_last_acknowledged_batch_id(from._internal_last_acknowledged_batch_id());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void MutationQueue::CopyFrom(const MutationQueue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:firestore.client.MutationQueue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool MutationQueue::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* MutationQueue::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void MutationQueue::InternalSwap(MutationQueue* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.last_stream_token_, &other->_impl_.last_stream_token_, arena);
        swap(_impl_.last_acknowledged_batch_id_, other->_impl_.last_acknowledged_batch_id_);
}

::google::protobuf::Metadata MutationQueue::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_firestore_2flocal_2fmutation_2eproto_getter, &descriptor_table_firestore_2flocal_2fmutation_2eproto_once,
      file_level_metadata_firestore_2flocal_2fmutation_2eproto[0]);
}
// ===================================================================

class WriteBatch::_Internal {
 public:
  using HasBits = decltype(std::declval<WriteBatch>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(WriteBatch, _impl_._has_bits_);
  static const ::google::protobuf::Timestamp& local_write_time(const WriteBatch* msg);
  static void set_has_local_write_time(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::google::protobuf::Timestamp& WriteBatch::_Internal::local_write_time(const WriteBatch* msg) {
  return *msg->_impl_.local_write_time_;
}
void WriteBatch::clear_writes() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.writes_.Clear();
}
void WriteBatch::clear_local_write_time() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (_impl_.local_write_time_ != nullptr) _impl_.local_write_time_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void WriteBatch::clear_base_writes() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.base_writes_.Clear();
}
WriteBatch::WriteBatch(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:firestore.client.WriteBatch)
}
inline PROTOBUF_NDEBUG_INLINE WriteBatch::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        writes_{visibility, arena, from.writes_},
        base_writes_{visibility, arena, from.base_writes_} {}

WriteBatch::WriteBatch(
    ::google::protobuf::Arena* arena,
    const WriteBatch& from)
    : ::google::protobuf::Message(arena) {
  WriteBatch* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.local_write_time_ = (cached_has_bits & 0x00000001u)
                ? CreateMaybeMessage<::google::protobuf::Timestamp>(arena, *from._impl_.local_write_time_)
                : nullptr;
  _impl_.batch_id_ = from._impl_.batch_id_;

  // @@protoc_insertion_point(copy_constructor:firestore.client.WriteBatch)
}
inline PROTOBUF_NDEBUG_INLINE WriteBatch::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        writes_{visibility, arena},
        base_writes_{visibility, arena} {}

inline void WriteBatch::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, local_write_time_),
           0,
           offsetof(Impl_, batch_id_) -
               offsetof(Impl_, local_write_time_) +
               sizeof(Impl_::batch_id_));
}
WriteBatch::~WriteBatch() {
  // @@protoc_insertion_point(destructor:firestore.client.WriteBatch)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void WriteBatch::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  delete _impl_.local_write_time_;
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void WriteBatch::Clear() {
// @@protoc_insertion_point(message_clear_start:firestore.client.WriteBatch)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.writes_.Clear();
  _impl_.base_writes_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.local_write_time_ != nullptr);
    _impl_.local_write_time_->Clear();
  }
  _impl_.batch_id_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* WriteBatch::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 4, 3, 0, 2> WriteBatch::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(WriteBatch, _impl_._has_bits_),
    0, // no _extensions_
    4, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967280,  // skipmap
    offsetof(decltype(_table_), field_entries),
    4,  // num_field_entries
    3,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_WriteBatch_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // repeated .google.firestore.v1.Write base_writes = 4;
    {::_pbi::TcParser::FastMtR1,
     {34, 63, 2, PROTOBUF_FIELD_OFFSET(WriteBatch, _impl_.base_writes_)}},
    // int32 batch_id = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(WriteBatch, _impl_.batch_id_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(WriteBatch, _impl_.batch_id_)}},
    // repeated .google.firestore.v1.Write writes = 2;
    {::_pbi::TcParser::FastMtR1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(WriteBatch, _impl_.writes_)}},
    // .google.protobuf.Timestamp local_write_time = 3;
    {::_pbi::TcParser::FastMtS1,
     {26, 0, 1, PROTOBUF_FIELD_OFFSET(WriteBatch, _impl_.local_write_time_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 batch_id = 1;
    {PROTOBUF_FIELD_OFFSET(WriteBatch, _impl_.batch_id_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // repeated .google.firestore.v1.Write writes = 2;
    {PROTOBUF_FIELD_OFFSET(WriteBatch, _impl_.writes_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
    // .google.protobuf.Timestamp local_write_time = 3;
    {PROTOBUF_FIELD_OFFSET(WriteBatch, _impl_.local_write_time_), _Internal::kHasBitsOffset + 0, 1,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // repeated .google.firestore.v1.Write base_writes = 4;
    {PROTOBUF_FIELD_OFFSET(WriteBatch, _impl_.base_writes_), -1, 2,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::google::firestore::v1::Write>()},
    {::_pbi::TcParser::GetTable<::google::protobuf::Timestamp>()},
    {::_pbi::TcParser::GetTable<::google::firestore::v1::Write>()},
  }}, {{
  }},
};

::uint8_t* WriteBatch::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:firestore.client.WriteBatch)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 batch_id = 1;
  if (this->_internal_batch_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_batch_id(), target);
  }

  // repeated .google.firestore.v1.Write writes = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_writes_size()); i < n; i++) {
    const auto& repfield = this->_internal_writes().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // .google.protobuf.Timestamp local_write_time = 3;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        3, _Internal::local_write_time(this),
        _Internal::local_write_time(this).GetCachedSize(), target, stream);
  }

  // repeated .google.firestore.v1.Write base_writes = 4;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_base_writes_size()); i < n; i++) {
    const auto& repfield = this->_internal_base_writes().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(4, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:firestore.client.WriteBatch)
  return target;
}

::size_t WriteBatch::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:firestore.client.WriteBatch)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.firestore.v1.Write writes = 2;
  total_size += 1UL * this->_internal_writes_size();
  for (const auto& msg : this->_internal_writes()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  // repeated .google.firestore.v1.Write base_writes = 4;
  total_size += 1UL * this->_internal_base_writes_size();
  for (const auto& msg : this->_internal_base_writes()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  // .google.protobuf.Timestamp local_write_time = 3;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size +=
        1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.local_write_time_);
  }

  // int32 batch_id = 1;
  if (this->_internal_batch_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_batch_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData WriteBatch::_class_data_ = {
    WriteBatch::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* WriteBatch::GetClassData() const {
  return &_class_data_;
}

void WriteBatch::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<WriteBatch*>(&to_msg);
  auto& from = static_cast<const WriteBatch&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:firestore.client.WriteBatch)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_writes()->MergeFrom(
      from._internal_writes());
  _this->_internal_mutable_base_writes()->MergeFrom(
      from._internal_base_writes());
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_local_write_time()->::google::protobuf::Timestamp::MergeFrom(
        from._internal_local_write_time());
  }
  if (from._internal_batch_id() != 0) {
    _this->_internal_set_batch_id(from._internal_batch_id());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void WriteBatch::CopyFrom(const WriteBatch& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:firestore.client.WriteBatch)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool WriteBatch::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* WriteBatch::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void WriteBatch::InternalSwap(WriteBatch* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.writes_.InternalSwap(&other->_impl_.writes_);
  _impl_.base_writes_.InternalSwap(&other->_impl_.base_writes_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(WriteBatch, _impl_.batch_id_)
      + sizeof(WriteBatch::_impl_.batch_id_)
      - PROTOBUF_FIELD_OFFSET(WriteBatch, _impl_.local_write_time_)>(
          reinterpret_cast<char*>(&_impl_.local_write_time_),
          reinterpret_cast<char*>(&other->_impl_.local_write_time_));
}

::google::protobuf::Metadata WriteBatch::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_firestore_2flocal_2fmutation_2eproto_getter, &descriptor_table_firestore_2flocal_2fmutation_2eproto_once,
      file_level_metadata_firestore_2flocal_2fmutation_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace client
}  // namespace firestore
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"