// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoWS/command.proto

#include "command.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class commandDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<command> _instance;
} _command_default_instance_;
static void InitDefaultsscc_info_command_ProtoWS_2fcommand_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_command_default_instance_;
    new (ptr) ::command();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::command::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_command_ProtoWS_2fcommand_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_command_ProtoWS_2fcommand_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ProtoWS_2fcommand_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ProtoWS_2fcommand_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ProtoWS_2fcommand_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ProtoWS_2fcommand_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::command, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::command, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::command, service_type_),
  PROTOBUF_FIELD_OFFSET(::command, kick_power_),
  PROTOBUF_FIELD_OFFSET(::command, catch_power_),
  PROTOBUF_FIELD_OFFSET(::command, hg_mtx_),
  PROTOBUF_FIELD_OFFSET(::command, misc_),
  PROTOBUF_FIELD_OFFSET(::command, msg_),
  1,
  2,
  3,
  ~0u,
  4,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(::command)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_command_default_instance_),
};

const char descriptor_table_protodef_ProtoWS_2fcommand_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025ProtoWS/command.proto\"w\n\007command\022\024\n\014se"
  "rvice_type\030\001 \002(\005\022\022\n\nkick_power\030\002 \001(\002\022\023\n\013"
  "catch_power\030\003 \001(\002\022\022\n\006hg_mtx\030\004 \003(\002B\002\020\001\022\014\n"
  "\004misc\030\005 \001(\005\022\013\n\003msg\030\006 \002(\t"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ProtoWS_2fcommand_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ProtoWS_2fcommand_2eproto_sccs[1] = {
  &scc_info_command_ProtoWS_2fcommand_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ProtoWS_2fcommand_2eproto_once;
static bool descriptor_table_ProtoWS_2fcommand_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ProtoWS_2fcommand_2eproto = {
  &descriptor_table_ProtoWS_2fcommand_2eproto_initialized, descriptor_table_protodef_ProtoWS_2fcommand_2eproto, "ProtoWS/command.proto", 144,
  &descriptor_table_ProtoWS_2fcommand_2eproto_once, descriptor_table_ProtoWS_2fcommand_2eproto_sccs, descriptor_table_ProtoWS_2fcommand_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_ProtoWS_2fcommand_2eproto::offsets,
  file_level_metadata_ProtoWS_2fcommand_2eproto, 1, file_level_enum_descriptors_ProtoWS_2fcommand_2eproto, file_level_service_descriptors_ProtoWS_2fcommand_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ProtoWS_2fcommand_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ProtoWS_2fcommand_2eproto), true);

// ===================================================================

void command::InitAsDefaultInstance() {
}
class command::_Internal {
 public:
  using HasBits = decltype(std::declval<command>()._has_bits_);
  static void set_has_service_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_kick_power(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_catch_power(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_misc(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_msg(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

command::command()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:command)
}
command::command(const command& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      hg_mtx_(from.hg_mtx_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_msg()) {
    msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  ::memcpy(&service_type_, &from.service_type_,
    static_cast<size_t>(reinterpret_cast<char*>(&misc_) -
    reinterpret_cast<char*>(&service_type_)) + sizeof(misc_));
  // @@protoc_insertion_point(copy_constructor:command)
}

void command::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_command_ProtoWS_2fcommand_2eproto.base);
  msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&service_type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&misc_) -
      reinterpret_cast<char*>(&service_type_)) + sizeof(misc_));
}

command::~command() {
  // @@protoc_insertion_point(destructor:command)
  SharedDtor();
}

void command::SharedDtor() {
  msg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void command::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const command& command::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_command_ProtoWS_2fcommand_2eproto.base);
  return *internal_default_instance();
}


void command::Clear() {
// @@protoc_insertion_point(message_clear_start:command)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  hg_mtx_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    msg_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 0x0000001eu) {
    ::memset(&service_type_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&misc_) -
        reinterpret_cast<char*>(&service_type_)) + sizeof(misc_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* command::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required int32 service_type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_service_type(&has_bits);
          service_type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional float kick_power = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          _Internal::set_has_kick_power(&has_bits);
          kick_power_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float catch_power = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          _Internal::set_has_catch_power(&has_bits);
          catch_power_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // repeated float hg_mtx = 4 [packed = true];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_hg_mtx(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37) {
          _internal_add_hg_mtx(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional int32 misc = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_misc(&has_bits);
          misc_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string msg = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_msg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "command.msg");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* command::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:command)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 service_type = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_service_type(), target);
  }

  // optional float kick_power = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_kick_power(), target);
  }

  // optional float catch_power = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_catch_power(), target);
  }

  // repeated float hg_mtx = 4 [packed = true];
  if (this->_internal_hg_mtx_size() > 0) {
    target = stream->WriteFixedPacked(4, _internal_hg_mtx(), target);
  }

  // optional int32 misc = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_misc(), target);
  }

  // required string msg = 6;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_msg().data(), static_cast<int>(this->_internal_msg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "command.msg");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_msg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:command)
  return target;
}

size_t command::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:command)
  size_t total_size = 0;

  if (_internal_has_msg()) {
    // required string msg = 6;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_msg());
  }

  if (_internal_has_service_type()) {
    // required int32 service_type = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_service_type());
  }

  return total_size;
}
size_t command::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:command)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string msg = 6;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_msg());

    // required int32 service_type = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_service_type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float hg_mtx = 4 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_hg_mtx_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _hg_mtx_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001cu) {
    // optional float kick_power = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 4;
    }

    // optional float catch_power = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 4;
    }

    // optional int32 misc = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_misc());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void command::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:command)
  GOOGLE_DCHECK_NE(&from, this);
  const command* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<command>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:command)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:command)
    MergeFrom(*source);
  }
}

void command::MergeFrom(const command& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:command)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  hg_mtx_.MergeFrom(from.hg_mtx_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.msg_);
    }
    if (cached_has_bits & 0x00000002u) {
      service_type_ = from.service_type_;
    }
    if (cached_has_bits & 0x00000004u) {
      kick_power_ = from.kick_power_;
    }
    if (cached_has_bits & 0x00000008u) {
      catch_power_ = from.catch_power_;
    }
    if (cached_has_bits & 0x00000010u) {
      misc_ = from.misc_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void command::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:command)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void command::CopyFrom(const command& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:command)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool command::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void command::InternalSwap(command* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  hg_mtx_.InternalSwap(&other->hg_mtx_);
  msg_.Swap(&other->msg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(service_type_, other->service_type_);
  swap(kick_power_, other->kick_power_);
  swap(catch_power_, other->catch_power_);
  swap(misc_, other->misc_);
}

::PROTOBUF_NAMESPACE_ID::Metadata command::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::command* Arena::CreateMaybeMessage< ::command >(Arena* arena) {
  return Arena::CreateInternal< ::command >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
