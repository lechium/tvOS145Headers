//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SYDPushManager;

@interface SYDSchedulerPushManager : NSObject
{
    NSString *_user;	// 8 = 0x8
    SYDPushManager *_pushManager;	// 16 = 0x10
    NSString *_environment;	// 24 = 0x18
    double _refreshInterval;	// 32 = 0x20
}

+ (void)_unregisterManager:(id)arg1;	// IMP=0x0000000100057870
+ (void)_registerManager:(id)arg1;	// IMP=0x0000000100057804
+ (void)_managerDidChange:(id)arg1;	// IMP=0x00000001000575ac
+ (id)sharedManagers;	// IMP=0x0000000100057540
- (void).cxx_destruct;	// IMP=0x000000010005822c
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) SYDPushManager *pushManager; // @synthesize pushManager=_pushManager;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
- (void)shutdown;	// IMP=0x0000000100058188
- (void)didUpdateTokenOnServer:(id)arg1;	// IMP=0x0000000100058178
- (void)resetUpdates;	// IMP=0x0000000100058168
- (double)nextUpdateInterval;	// IMP=0x0000000100058120
- (void)setEnvironment:(id)arg1 forUser:(id)arg2 refreshInterval:(double)arg3;	// IMP=0x0000000100057f7c
- (_Bool)needsUpdate;	// IMP=0x0000000100057f54
- (id)publicToken;	// IMP=0x0000000100057f14
- (id)persistentState;	// IMP=0x0000000100057e1c
- (void)_managerDidReceivePushNotification:(id)arg1;	// IMP=0x0000000100057cc4
- (void)_managerNeedsUpdateOnServer:(id)arg1;	// IMP=0x0000000100057bd4
- (void)dealloc;	// IMP=0x0000000100057b5c
- (id)initWithPersistentState:(id)arg1 pushManager:(id)arg2;	// IMP=0x0000000100057940

@end

