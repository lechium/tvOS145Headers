//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSUUID, UASharedPasteboardDataRequester, UASharedPasteboardInfo;
@protocol OS_dispatch_queue;

@interface UCRemotePasteboardGeneration : NSObject
{
    _Bool _returnEarly;	// 8 = 0x8
    _Bool _dataRequested;	// 9 = 0x9
    UASharedPasteboardDataRequester *_dataRequester;	// 16 = 0x10
    UASharedPasteboardInfo *_pbInfo;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    long long _streamProtocolVersion;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_respQueue;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010002bf2c
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSObject<OS_dispatch_queue> *respQueue; // @synthesize respQueue=_respQueue;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property _Bool dataRequested; // @synthesize dataRequested=_dataRequested;
@property long long streamProtocolVersion; // @synthesize streamProtocolVersion=_streamProtocolVersion;
@property _Bool returnEarly; // @synthesize returnEarly=_returnEarly;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) UASharedPasteboardInfo *pbInfo; // @synthesize pbInfo=_pbInfo;
@property(retain) UASharedPasteboardDataRequester *dataRequester; // @synthesize dataRequester=_dataRequester;
- (void)requestRemotePasteboardData:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ba6c
- (void)requestRemoteTypeInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000010002acf0
- (void)dealloc;	// IMP=0x000000010002aba0
- (void)updateState:(unsigned long long)arg1;	// IMP=0x000000010002aa10
- (id)stateAsString;	// IMP=0x000000010002a980
- (id)initWithRequester:(id)arg1;	// IMP=0x000000010002a7a4

@end

