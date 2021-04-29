//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, _DASDataProtectionMaster;

@interface _DASDataProtectionStateMonitor : NSObject
{
    CDUnknownBlockType _changeHandler;	// 8 = 0x8
    _DASDataProtectionMaster *_master;	// 16 = 0x10
    NSUUID *_handlerUUID;	// 24 = 0x18
}

+ (id)dataProtectionClassD;	// IMP=0x00000001000183f4
+ (id)dataProtectionClassC;	// IMP=0x00000001000183e4
+ (id)dataProtectionClassA;	// IMP=0x00000001000183d4
- (void).cxx_destruct;	// IMP=0x00000001000185a8
@property(readonly, nonatomic) NSUUID *handlerUUID; // @synthesize handlerUUID=_handlerUUID;
@property(readonly, nonatomic) _DASDataProtectionMaster *master; // @synthesize master=_master;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (_Bool)unnotifiedIsDataAvailableForClassC;	// IMP=0x0000000100018584
- (_Bool)isDataAvailableFor:(id)arg1;	// IMP=0x0000000100018574
- (void)dealloc;	// IMP=0x0000000100018490
- (id)init;	// IMP=0x0000000100018404

@end

