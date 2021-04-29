//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MISystemAppState : NSObject
{
    NSObject<OS_dispatch_queue> *_appStateQueue;	// 8 = 0x8
    NSMutableDictionary *_systemAppStateList;	// 16 = 0x10
}

+ (id)sharedList;	// IMP=0x0000000100005374
- (void).cxx_destruct;	// IMP=0x0000000100005d68
@property(retain, nonatomic) NSMutableDictionary *systemAppStateList; // @synthesize systemAppStateList=_systemAppStateList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *appStateQueue; // @synthesize appStateQueue=_appStateQueue;
- (void)removeIdentifiers:(id)arg1;	// IMP=0x0000000100005c08
- (void)addIdentifier:(id)arg1 withState:(int)arg2;	// IMP=0x0000000100005a6c
- (id)systemAppStateDictionaryRestoringBackedUpState:(_Bool)arg1;	// IMP=0x00000001000058c0
- (void)_onQueue_setSystemAppStateList:(id)arg1;	// IMP=0x0000000100005684
- (id)_onQueue_retrieveSystemAppStateRestoringBackedUpState:(_Bool)arg1;	// IMP=0x0000000100005550
- (id)_onQueue_systemAppStateList;	// IMP=0x000000010000541c
- (id)init;	// IMP=0x00000001000052ec

@end
