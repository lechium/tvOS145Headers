//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CBPreferencesManager : NSObject
{
}

+ (_Bool)isRunningInRecovery;	// IMP=0x0000000100040ea0
+ (id)deviceName;	// IMP=0x0000000100040e80
+ (void)removeuserPreference:(id)arg1 sync:(_Bool)arg2;	// IMP=0x0000000100040d30
+ (void)setuserPreference:(id)arg1 value:(in bycopy id)arg2 sync:(_Bool)arg3;	// IMP=0x0000000100040bc4
+ (id)readUserPreference:(id)arg1;	// IMP=0x0000000100040b88

@end
