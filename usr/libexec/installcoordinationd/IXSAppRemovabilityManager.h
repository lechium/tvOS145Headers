//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface IXSAppRemovabilityManager : NSObject
{
    NSMutableDictionary *_allAppRemovability;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)stringForRemovability:(unsigned long long)arg1;	// IMP=0x0000000100058250
+ (id)sharedInstance;	// IMP=0x00000001000580f4
- (void).cxx_destruct;	// IMP=0x0000000100058ec8
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *allAppRemovability; // @synthesize allAppRemovability=_allAppRemovability;
- (_Bool)_onQueue_writeRemovabilityWithError:(id *)arg1;	// IMP=0x0000000100058c04
- (_Bool)setRemovability:(unsigned long long)arg1 forAppWithBundleID:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000585bc
- (unsigned long long)removabilityForAppWithBundleID:(id)arg1;	// IMP=0x0000000100058464
@property(readonly, nonatomic) NSURL *removabilityURL; // @dynamic removabilityURL;
- (void)_onQueue_handleStateChangeForBundleID:(id)arg1;	// IMP=0x000000010005828c
- (id)init;	// IMP=0x0000000100058194

@end

