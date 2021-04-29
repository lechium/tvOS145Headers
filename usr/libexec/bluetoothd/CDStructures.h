//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CBStackBLEScannerBluetoothD, NSObject;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AppFrameworkListener {
    CDUnknownFunctionPointerType *_field1;
};

struct ApplePuckDefinition;

struct AudioSkywalkProvider {
    struct nexus_controller *_field1;
    unsigned char _field2[16];
};

struct AutoPtr<BT::ByteBuffer::SharedBuffer> {
    struct SharedBuffer *_field1;
};

struct BTSessionImpl;

struct BatteryInfoModel;

struct ByteBuffer {
    struct AutoPtr<BT::ByteBuffer::SharedBuffer> _field1;
};

struct CBStackBLEScannerCPP {
    CDUnknownFunctionPointerType *_vptr$LeObserverListener;
    CBStackBLEScannerBluetoothD *_bleScannerObjC;
    NSObject *_dispatchQueue;
};

struct CaseInfo {
    unsigned short _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned char _field4;
    unsigned short _field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
            struct __rep {
                union {
                    struct __long _field1;
                    struct __short {
                        char _field1[23];
                        CDStruct_6b48f683 _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field6;
};

struct Device {
    struct Mutex {
        struct _opaque_pthread_mutex_t {
            long long _field1;
            char _field2[56];
        } _field1;
    } _field1;
    struct DeviceAddress _field2;
    struct Time _field3;
    char _field4;
    struct Time _field5;
    int _field6;
    struct Time _field7;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
            struct __rep {
                union {
                    struct __long _field1;
                    struct __short {
                        char _field1[23];
                        CDStruct_6b48f683 _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field8;
    struct Time _field9;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
            struct __rep {
                union {
                    struct __long _field1;
                    struct __short {
                        char _field1[23];
                        CDStruct_6b48f683 _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field10;
    struct Time _field11;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
            struct __rep {
                union {
                    struct __long _field1;
                    struct __short {
                        char _field1[23];
                        CDStruct_6b48f683 _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field12;
    unsigned int _field13;
    struct Time _field14;
    struct map<unsigned int, BTDeviceCapability, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, BTDeviceCapability>>> _field15;
    struct Time _field16;
    int _field17;
    struct Time _field18;
    unsigned int _field19;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
            struct __rep {
                union {
                    struct __long _field1;
                    struct __short {
                        char _field1[23];
                        CDStruct_6b48f683 _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field20;
    unsigned int _field21;
    int _field22;
    unsigned int _field23;
    struct Mutex {
        struct _opaque_pthread_mutex_t {
            long long _field1;
            char _field2[56];
        } _field1;
    } _field24;
    struct ByteBuffer _field25;
    int _field26;
    struct BatteryInfoModel *_field27;
    int _field28;
    int _field29;
    int _field30;
    int _field31;
    int _field32;
    _Bool _field33;
    _Bool _field34;
    _Bool _field35;
    _Bool _field36;
    struct map<BT::_BT_DATAELEM *, std::__1::map<unsigned int, BT::_BT_DATAELEM, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, BT::_BT_DATAELEM>>>, std::__1::less<BT::_BT_DATAELEM *>, std::__1::allocator<std::__1::pair<BT::_BT_DATAELEM *const, std::__1::map<unsigned int, BT::_BT_DATAELEM, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, BT::_BT_DATAELEM>>>>>> _field37;
    unsigned int _field38;
    struct vector<BT::DeviceProfile, std::__1::allocator<BT::DeviceProfile>> _field39;
    _Bool _field40;
    _Bool _field41;
    _Bool _field42;
    _Bool _field43;
    _Bool _field44;
    _Bool _field45;
    _Bool _field46;
    _Bool _field47;
    _Bool _field48;
    unsigned short _field49;
    _Bool _field50;
    unsigned short _field51;
    unsigned short _field52;
    unsigned short _field53;
    unsigned short _field54;
    unsigned short _field55;
    unsigned short _field56;
    unsigned short _field57;
    unsigned short _field58;
    unsigned short _field59;
    unsigned short _field60;
    unsigned short _field61;
    unsigned short _field62;
    unsigned short _field63;
    unsigned short _field64;
    unsigned short _field65;
    unsigned short _field66;
    unsigned short _field67;
    unsigned short _field68;
    unsigned short _field69;
    unsigned short _field70;
    unsigned int _field71;
    unsigned char _field72[20];
    unsigned char _field73[20];
    _Bool _field74;
    _Bool _field75;
    _Bool _field76;
    _Bool _field77;
    struct vector<int, std::__1::allocator<int>> _field78;
    int _field79;
    struct bitset<32> _field80;
    _Bool _field81;
    _Bool _field82;
    _Bool _field83;
    unsigned int _field84;
    unsigned int _field85;
    _Bool _field86;
    int _field87;
    unsigned int _field88;
    unsigned int _field89;
    unsigned int _field90;
    unsigned int _field91;
    unsigned int _field92;
    unsigned int _field93;
    unsigned int _field94;
    unsigned char _field95;
    unsigned char _field96;
    unsigned char _field97;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _field98;
    _Bool _field99;
    int _field100;
    _Bool _field101;
    int _field102;
    _Bool _field103;
    int _field104;
    _Bool _field105;
    _Bool _field106;
    unsigned short _field107;
    _Bool _field108;
    _Bool _field109;
    _Bool _field110;
    _Bool _field111;
    _Bool _field112;
    _Bool _field113;
    _Bool _field114;
    unsigned char _field115;
    int _field116;
    unsigned char _field117;
    struct {
        struct ByteBuffer _field1;
        unsigned short _field2;
        unsigned short _field3;
        unsigned short _field4;
        unsigned short _field5;
    } _field118;
    struct {
        _Bool _field1;
        _Bool _field2;
        _Bool _field3;
        _Bool _field4;
        unsigned int _field5;
        unsigned int _field6;
        unsigned int _field7;
        unsigned int _field8;
        unsigned int _field9;
        unsigned short _field10;
        struct {
            unsigned int _field1;
            unsigned int _field2;
        } _field11;
    } _field119;
    struct __CFString *_field120;
    struct __CFString *_field121;
    _Bool _field122;
    _Bool _field123;
    _Bool _field124;
    float _field125;
    struct vector<float, std::__1::allocator<float>> _field126;
    unsigned char _field127;
    unsigned int _field128;
    unsigned int _field129;
    unsigned int _field130;
    int _field131;
    struct vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>> _field132;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
            struct __rep {
                union {
                    struct __long _field1;
                    struct __short {
                        char _field1[23];
                        CDStruct_6b48f683 _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field133;
    struct CaseInfo _field134;
    unsigned long long _field135;
    id _field136;
    _Bool _field137;
    id _field138;
    int _field139;
    _Bool _field140;
    unsigned int _field141;
    _Bool _field142;
    unsigned int _field143;
    _Bool _field144;
    struct Time _field145;
    unsigned char _field146;
    unsigned char _field147;
    unsigned char _field148;
    int _field149;
    unsigned char _field150;
    int _field151;
    _Bool _field152;
    _Bool _field153;
    _Bool _field154;
    unsigned char _field155;
    id _field156;
    unsigned char _field157;
    struct ScanCorePageScanStats _field158;
    int _field159;
};

struct DeviceAddress {
    unsigned char _field1[6];
};

struct DeviceProfile;

struct LeDevice {
    id _field1;
    id _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    _Bool _field5;
    _Bool _field6;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
            struct __rep {
                union {
                    struct __long _field1;
                    struct __short {
                        unsigned char _field1[23];
                        CDStruct_6b48f683 _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field7;
    int _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    long long _field13;
    _Bool _field14;
    _Bool _field15;
    _Bool _field16;
    _Bool _field17;
    _Bool _field18;
    struct set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>> _field19;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
            struct __rep {
                union {
                    struct __long _field1;
                    struct __short {
                        unsigned char _field1[23];
                        CDStruct_6b48f683 _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
    struct Time _field27;
    unsigned short _field28;
    unsigned char _field29;
    unsigned char _field30;
    _Bool _field31;
    id _field32;
    id _field33;
    id _field34;
    id _field35;
    id _field36;
    id _field37;
    id _field38;
    id _field39;
    id _field40;
    unsigned short _field41;
    unsigned char _field42;
    unsigned char _field43;
    _Bool _field44;
    _Bool _field45;
    _Bool _field46;
    id _field47;
    _Bool _field48;
    unsigned short _field49;
    _Bool _field50;
    char _field51;
    unsigned char _field52;
    unsigned int _field53;
    _Bool _field54;
    _Bool _field55;
    double _field56;
    unsigned int _field57;
    unsigned int _field58;
    unsigned int _field59;
    unsigned int _field60;
    int _field61;
    int _field62;
};

struct LeDeviceCacheEventListener {
    CDUnknownFunctionPointerType *_field1;
};

struct LeScanRequest {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    vector_057f0f09 _field6;
    vector_057f0f09 _field7;
    id _field8;
    struct vector<BT::LeScanRequest::ApplePuckDefinition, std::__1::allocator<BT::LeScanRequest::ApplePuckDefinition>> _field9;
    id _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    unsigned int _field14;
    unsigned int _field15;
    _Bool _field16;
    unsigned char _field17;
    _Bool _field18;
    unsigned char _field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    unsigned char _field25;
};

struct LeUuid;

struct LogCategory {
    int _field1;
    int _field2;
    char *_field3;
    unsigned int _field4;
    char *_field5;
    char *_field6;
    int _field7;
    struct LogCategory *_field8;
    struct LogOutput *_field9;
    struct LogOutput *_field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned int _field13;
    unsigned int _field14;
    char *_field15;
    struct LogCategoryPrivate *_field16;
};

struct LogCategoryPrivate;

struct LogOutput;

struct ScanCorePageScanStats {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
    unsigned short _field7;
    unsigned short _field8;
    unsigned short _field9;
    unsigned short _field10;
    unsigned short _field11;
    unsigned short _field12;
    unsigned short _field13;
};

struct Session {
    struct Mutex {
        struct _opaque_pthread_mutex_t {
            long long _field1;
            char _field2[56];
        } _field1;
    } _field1;
    struct BTSessionImpl *_field2;
    _Bool _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
            struct __rep {
                union {
                    struct __long _field1;
                    struct __short {
                        char _field1[23];
                        CDStruct_6b48f683 _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field4;
    struct map<const char *, void *, std::__1::less<const char *>, std::__1::allocator<std::__1::pair<const char *const, void *>>> _field5;
    void *_field6;
    _Bool _field7;
    _Bool _field8;
};

struct SharedBuffer;

struct Time {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct XPCAudioPluginDeviceDelegate;

struct XpcAudioPluginClient {
    struct _xpc_connection_s *_field1;
};

struct XpcAudioPluginDevice {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
            struct __rep {
                union {
                    struct __long _field1;
                    struct __short {
                        unsigned char _field1[23];
                        CDStruct_6b48f683 _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field2;
    struct XPCAudioPluginDeviceDelegate *_field3;
    struct atomic<bool> _field4;
    struct atomic<bool> _field5;
};

struct __CFString;

struct __long {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct __raw {
    unsigned long long _field1[3];
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct atomic<bool> {
    struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>> {
        _Atomic _Bool _field1;
    } _field1;
};

struct bitset<32> {
    unsigned long long _field1;
};

struct map<BT::_BT_DATAELEM *, std::__1::map<unsigned int, BT::_BT_DATAELEM, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, BT::_BT_DATAELEM>>>, std::__1::less<BT::_BT_DATAELEM *>, std::__1::allocator<std::__1::pair<BT::_BT_DATAELEM *const, std::__1::map<unsigned int, BT::_BT_DATAELEM, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, BT::_BT_DATAELEM>>>>>> {
    struct __tree<std::__1::__value_type<BT::_BT_DATAELEM *, std::__1::map<unsigned int, BT::_BT_DATAELEM, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, BT::_BT_DATAELEM>>>>, std::__1::__map_value_compare<BT::_BT_DATAELEM *, std::__1::__value_type<BT::_BT_DATAELEM *, std::__1::map<unsigned int, BT::_BT_DATAELEM, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, BT::_BT_DATAELEM>>>>, std::__1::less<BT::_BT_DATAELEM *>, true>, std::__1::allocator<std::__1::__value_type<BT::_BT_DATAELEM *, std::__1::map<unsigned int, BT::_BT_DATAELEM, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, BT::_BT_DATAELEM>>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<BT::_BT_DATAELEM *, std::__1::map<unsigned int, BT::_BT_DATAELEM, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, BT::_BT_DATAELEM>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<BT::_BT_DATAELEM *, std::__1::__value_type<BT::_BT_DATAELEM *, std::__1::map<unsigned int, BT::_BT_DATAELEM, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, BT::_BT_DATAELEM>>>>, std::__1::less<BT::_BT_DATAELEM *>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<const char *, void *, std::__1::less<const char *>, std::__1::allocator<std::__1::pair<const char *const, void *>>> {
    struct __tree<std::__1::__value_type<const char *, void *>, std::__1::__map_value_compare<const char *, std::__1::__value_type<const char *, void *>, std::__1::less<const char *>, true>, std::__1::allocator<std::__1::__value_type<const char *, void *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const char *, void *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const char *, std::__1::__value_type<const char *, void *>, std::__1::less<const char *>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, BT::XpcAudioPluginDevice *, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, BT::XpcAudioPluginDevice *>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, BT::XpcAudioPluginDevice *>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, BT::XpcAudioPluginDevice *>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, BT::XpcAudioPluginDevice *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, BT::XpcAudioPluginDevice *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, BT::XpcAudioPluginDevice *>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, BTDeviceCapability, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, BTDeviceCapability>>> {
    struct __tree<std::__1::__value_type<unsigned int, BTDeviceCapability>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, BTDeviceCapability>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, BTDeviceCapability>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, BTDeviceCapability>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, BTDeviceCapability>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct nexus_controller;

struct set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>> {
    struct __tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct vector<BT::DeviceProfile, std::__1::allocator<BT::DeviceProfile>> {
    struct DeviceProfile *_field1;
    struct DeviceProfile *_field2;
    struct __compressed_pair<BT::DeviceProfile *, std::__1::allocator<BT::DeviceProfile>> {
        struct DeviceProfile *_field1;
    } _field3;
};

struct vector<BT::LeScanRequest::ApplePuckDefinition, std::__1::allocator<BT::LeScanRequest::ApplePuckDefinition>> {
    struct ApplePuckDefinition *_field1;
    struct ApplePuckDefinition *_field2;
    struct __compressed_pair<BT::LeScanRequest::ApplePuckDefinition *, std::__1::allocator<BT::LeScanRequest::ApplePuckDefinition>> {
        struct ApplePuckDefinition *_field1;
    } _field3;
};

struct vector<BT::LeUuid, std::__1::allocator<BT::LeUuid>> {
    struct LeUuid *_field1;
    struct LeUuid *_field2;
    struct __compressed_pair<BT::LeUuid *, std::__1::allocator<BT::LeUuid>> {
        struct LeUuid *_field1;
    } _field3;
};

struct vector<BT::XpcAudioPluginClient *, std::__1::allocator<BT::XpcAudioPluginClient *>> {
    struct XpcAudioPluginClient **__begin_;
    struct XpcAudioPluginClient **__end_;
    struct __compressed_pair<BT::XpcAudioPluginClient **, std::__1::allocator<BT::XpcAudioPluginClient *>> {
        struct XpcAudioPluginClient **__value_;
    } __end_cap_;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
};

struct vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field2;
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>*, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    } _field3;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *_field1;
    char *_field2;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *_field1;
    } _field3;
};

#if 0
// Names with conflicting types:
typedef struct {
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field1;
} Mutex_31056206;

typedef struct ?<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
    struct __rep {
        union {
            struct __long _field1;
            struct __short {
                unsigned char _field1[23];
                CDStruct_6b48f683 _field2;
            } _field2;
            struct __raw _field3;
        } _field1;
    } _field1;
} __compressed_pair_b7c00f30;

typedef struct ?<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
    struct __rep {
        union {
            struct __long _field1;
            struct __short {
                char _field1[23];
                CDStruct_6b48f683 _field2;
            } _field2;
            struct __raw _field3;
        } _field1;
    } _field1;
} __compressed_pair_9f3432a8;

typedef struct ?<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long _field1;
                struct __short {
                    unsigned char _field1[23];
                    CDStruct_6b48f683 _field2;
                } _field2;
                struct __raw _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_3f66b750;

typedef struct ?<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long _field1;
                struct __short {
                    char _field1[23];
                    CDStruct_6b48f683 _field2;
                } _field2;
                struct __raw _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_7c0a1c0b;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
} CDStruct_6b48f683;

typedef struct {
    unsigned char _field1[6];
} CDStruct_5cfa2073;

// Template types
typedef struct vector<BT::LeUuid, std::__1::allocator<BT::LeUuid>> {
    struct LeUuid *_field1;
    struct LeUuid *_field2;
    struct __compressed_pair<BT::LeUuid *, std::__1::allocator<BT::LeUuid>> {
        struct LeUuid *_field1;
    } _field3;
} vector_057f0f09;

