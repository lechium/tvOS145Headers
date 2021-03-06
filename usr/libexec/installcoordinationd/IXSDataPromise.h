//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXSDataPromiseAwakening-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class IXDataPromiseSeed, NSError, NSSet, NSString, NSUUID;
@protocol IXSDataPromiseDelegate, OS_dispatch_queue;

@interface IXSDataPromise : NSObject <NSSecureCoding, IXSDataPromiseAwakening>
{
    _Bool _isTracked;	// 8 = 0x8
    _Bool _complete;	// 9 = 0x9
    _Bool _didAwake;	// 10 = 0xa
    double _percentComplete;	// 16 = 0x10
    id <IXSDataPromiseDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_accessQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateDeliveryQueue;	// 40 = 0x28
    IXDataPromiseSeed *_seed;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
    unsigned long long _errorSourceIdentifier;	// 64 = 0x40
    double _lastSavedPercentComplete;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000596d4
- (void).cxx_destruct;	// IMP=0x000000010005b4bc
@property(nonatomic) double lastSavedPercentComplete; // @synthesize lastSavedPercentComplete=_lastSavedPercentComplete;
@property(nonatomic) unsigned long long errorSourceIdentifier; // @synthesize errorSourceIdentifier=_errorSourceIdentifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) IXDataPromiseSeed *seed; // @synthesize seed=_seed;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateDeliveryQueue; // @synthesize delegateDeliveryQueue=_delegateDeliveryQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (id)description;	// IMP=0x000000010005b318
- (void)supersede;	// IMP=0x000000010005b26c
- (void)decommission;	// IMP=0x000000010005b120
@property(nonatomic) __weak id <IXSDataPromiseDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didAwake; // @synthesize didAwake=_didAwake;
@property(readonly, nonatomic) _Bool hasBegun; // @dynamic hasBegun;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(readonly, copy, nonatomic) NSSet *subPromiseUUIDs;
@property(readonly, nonatomic) unsigned long long bytesConsumedOnDisk; // @dynamic bytesConsumedOnDisk;
@property(readonly, nonatomic) unsigned long long totalBytesForProgress; // @dynamic totalBytesForProgress;
@property(readonly, nonatomic) unsigned long long totalBytesNeededOnDisk; // @dynamic totalBytesNeededOnDisk;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long creatorIdentifier; // @dynamic creatorIdentifier;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) _Bool isTracked; // @synthesize isTracked=_isTracked;
- (void)_removeSavedState;	// IMP=0x000000010005a2a8
- (void)saveState;	// IMP=0x0000000100059f44
- (_Bool)awakeFromSerializationWithLookupBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000100059ed8
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x0000000100059a54
- (void)reset;	// IMP=0x00000001000597f8
- (unsigned long long)hash;	// IMP=0x00000001000597ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000596dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000594fc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100059290
@property(readonly, copy, nonatomic) IXDataPromiseSeed *clientSeed; // @dynamic clientSeed;
- (id)initWithSeed:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005908c
- (void)_internalInitWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000100058f30
- (oneway void)_remote_preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005bf50
- (oneway void)_remote_getErrorInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000010005be08
- (oneway void)_remote_resetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005bb40
- (oneway void)_remote_cancelForReason:(id)arg1 client:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010005b9e8
- (oneway void)_remote_setIsComplete:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b800
- (oneway void)_remote_getIsComplete:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b6ec
- (oneway void)_remote_setPercentComplete:(double)arg1;	// IMP=0x000000010005b61c
- (oneway void)_remote_getPercentComplete:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b50c

@end

