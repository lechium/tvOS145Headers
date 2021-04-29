//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, NSUserDefaults;

@interface ICDDefaults : NSObject
{
    NSUserDefaults *_userDefaults;	// 8 = 0x8
    NSUserDefaults *_internalDefaults;	// 16 = 0x10
}

+ (id)daemonDefaults;	// IMP=0x000000010001edf0
- (void).cxx_destruct;	// IMP=0x000000010001edc0
@property(retain, nonatomic) NSUserDefaults *internalDefaults; // @synthesize internalDefaults=_internalDefaults;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010001ecf0
- (id)_init;	// IMP=0x000000010001ec00
@property(retain, nonatomic) NSData *pendingBackgroundTasksData;
@property(copy, nonatomic) NSString *knownActiveAccountDSID;
@property(copy, nonatomic) NSArray *knownAccountDSIDs;

@end

