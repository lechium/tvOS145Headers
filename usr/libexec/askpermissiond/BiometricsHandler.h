//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BiometricsHandler : NSObject
{
}

+ (void)_storeToken:(id)arg1;	// IMP=0x0000000100003edc
+ (void)_retreiveTokenWithAction:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003bf4
+ (void)_removeToken;	// IMP=0x0000000100003958
+ (void)_presentBiometricsDialogWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100003734
+ (void)storeToken:(id)arg1;	// IMP=0x0000000100003454
+ (id)retreiveTokenWithAction:(long long)arg1;	// IMP=0x00000001000030c4
+ (void)reset;	// IMP=0x000000010000308c
+ (void)removeToken;	// IMP=0x0000000100003080
+ (void)setState:(long long)arg1;	// IMP=0x0000000100003028
+ (_Bool)isSupported;	// IMP=0x0000000100002ea8
+ (id)storeQueue;	// IMP=0x0000000100002e38
+ (long long)state;	// IMP=0x0000000100002ddc

@end
