//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface SYDTCCHelper : NSObject
{
    int _notifyToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSSet *_cachedDisabledStoreIdentifiers;	// 24 = 0x18
}

+ (id)sharedHelper;	// IMP=0x000000010003de94
- (void).cxx_destruct;	// IMP=0x000000010003e8a4
@property(retain, nonatomic) NSSet *cachedDisabledStoreIdentifiers; // @synthesize cachedDisabledStoreIdentifiers=_cachedDisabledStoreIdentifiers;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)stopListeningToTCCAccessChangedNotifications;	// IMP=0x000000010003e7f0
- (void)startListeningToTCCAccessChangedNotifications;	// IMP=0x000000010003e620
- (id)findDisabledStoreIdentifiers;	// IMP=0x000000010003e264
- (_Bool)isUbiquityDisabledForStoreIdentifier:(id)arg1;	// IMP=0x000000010003dfec
- (void)dealloc;	// IMP=0x000000010003dfa0
- (id)init;	// IMP=0x000000010003df00

@end

