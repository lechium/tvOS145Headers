//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OSACrashUserNotificationInfo : NSObject
{
    _Bool _isUserMissingLibrary;	// 8 = 0x8
    _Bool _isCSKillFromAppStore;	// 9 = 0x9
    _Bool _isCSKillFromDyld;	// 10 = 0xa
    _Bool _isSpecialCased;	// 11 = 0xb
    NSString *_visibleName;	// 16 = 0x10
    NSString *_procPath;	// 24 = 0x18
    NSString *_pluginName;	// 32 = 0x20
    NSString *_reportPath;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010000ee20
@property(nonatomic) _Bool isSpecialCased; // @synthesize isSpecialCased=_isSpecialCased;
@property(nonatomic) _Bool isCSKillFromDyld; // @synthesize isCSKillFromDyld=_isCSKillFromDyld;
@property(nonatomic) _Bool isCSKillFromAppStore; // @synthesize isCSKillFromAppStore=_isCSKillFromAppStore;
@property(nonatomic) _Bool isUserMissingLibrary; // @synthesize isUserMissingLibrary=_isUserMissingLibrary;
@property(retain, nonatomic) NSString *reportPath; // @synthesize reportPath=_reportPath;
@property(retain, nonatomic) NSString *pluginName; // @synthesize pluginName=_pluginName;
@property(retain, nonatomic) NSString *procPath; // @synthesize procPath=_procPath;
@property(retain, nonatomic) NSString *visibleName; // @synthesize visibleName=_visibleName;

@end

