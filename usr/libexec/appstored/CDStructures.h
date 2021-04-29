//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct FPSubscriptionInfo_ {
    unsigned long long _field1;
    int _field2;
};

struct FairPlayHWInfo_ {
    unsigned int _field1;
    unsigned char _field2[20];
};

struct _ASDServiceEntitlement {
    NSString *name;
    NSString *legacyName;
};

struct _OSVersion {
    long long major;
    long long minor;
    long long patch;
};

struct fstore {
    unsigned int fst_flags;
    int fst_posmode;
    long long fst_offset;
    long long fst_length;
    long long fst_bytesalloc;
};

struct lzma_internal_s;

struct os_state_data_decoder_s {
    char _field1[64];
    char _field2[64];
};

struct os_state_data_s {
    unsigned int _field1;
    union {
        unsigned int :32;
        unsigned int _field1;
    } _field2;
    struct os_state_data_decoder_s _field3;
    char _field4[64];
    unsigned char _field5[0];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

typedef struct {
    long long _field1;
    unsigned char _field2[16];
    long long _field3;
} CDStruct_ceac533e;

