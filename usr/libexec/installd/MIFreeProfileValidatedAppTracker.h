//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface MIFreeProfileValidatedAppTracker : NSObject
{
    NSMutableSet *_refs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_q;	// 16 = 0x10
}

+ (id)sharedTracker;	// IMP=0x000000010003ed70
- (void).cxx_destruct;	// IMP=0x0000000100040194
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *q; // @synthesize q=_q;
@property(retain, nonatomic) NSMutableSet *refs; // @synthesize refs=_refs;
- (_Bool)removeReferenceForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003ff80
- (_Bool)_onQueue_removeReferenceForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003fc08
- (_Bool)addReferenceForApplicationIdentifier:(id)arg1 bundle:(id)arg2 error:(id *)arg3;	// IMP=0x000000010003f93c
- (_Bool)_onQueue_addReferenceForApplicationIdentifier:(id)arg1 bundle:(id)arg2 error:(id *)arg3;	// IMP=0x000000010003f51c
- (_Bool)_onQueue_discoverReferencesWithError:(id *)arg1;	// IMP=0x000000010003f378
- (_Bool)_onQueue_addAppIdentifierIfCachedOnContainer:(struct container_object_s *)arg1 error:(id *)arg2;	// IMP=0x000000010003ef80
- (void)invalidateCache;	// IMP=0x000000010003eef0
- (id)init;	// IMP=0x000000010003ee10

@end
