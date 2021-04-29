//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ACCAuthorizationManager : NSObject
{
    _Bool _bypassAuthorization;	// 8 = 0x8
    NSMutableDictionary *_notificationDictMutable;	// 16 = 0x10
}

+ (unsigned long long)promptUserForAuthorizationOfAccessoryWithName:(id)arg1 providesPower:(_Bool)arg2 certSerial:(id)arg3;	// IMP=0x00000001000e9cc8
+ (void)forceRequestAuthorizationForCertSerial:(id)arg1 withName:(id)arg2 providesPower:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000e9b8c
+ (void)requestAuthorizationForCertSerial:(id)arg1 withName:(id)arg2 providesPower:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000e99b4
+ (unsigned long long)authorizationStatusForCertSerial:(id)arg1;	// IMP=0x00000001000e9888
+ (id)sharedManager;	// IMP=0x00000001000e97ec
- (void).cxx_destruct;	// IMP=0x00000001000ea470
@property(retain, nonatomic) NSMutableDictionary *notificationDictMutable; // @synthesize notificationDictMutable=_notificationDictMutable;
@property(nonatomic) _Bool bypassAuthorization; // @synthesize bypassAuthorization=_bypassAuthorization;
- (id)init;	// IMP=0x00000001000e96c8

@end

