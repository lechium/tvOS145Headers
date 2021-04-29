//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PBAppInfo, PBAppSwitcherDataSource, UIImage;

@interface PBAppSwitcherItem : NSObject
{
    _Bool _live;	// 8 = 0x8
    _Bool _pendingDeletion;	// 9 = 0x9
    _Bool _pendingInsertion;	// 10 = 0xa
    long long _itemType;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    UIImage *_iconImage;	// 40 = 0x28
    PBAppSwitcherDataSource *_dataSource;	// 48 = 0x30
    PBAppInfo *_appInfo;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010022a228
@property(nonatomic, getter=isPendingInsertion) _Bool pendingInsertion; // @synthesize pendingInsertion=_pendingInsertion;
@property(copy, nonatomic) PBAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(readonly, nonatomic) __weak PBAppSwitcherDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isPendingDeletion) _Bool pendingDeletion; // @synthesize pendingDeletion=_pendingDeletion;
@property(readonly, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic, getter=isLive) _Bool live; // @synthesize live=_live;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
- (void)_updateIconImage;	// IMP=0x0000000100229ec4
- (void)_updateDisplayName;	// IMP=0x0000000100229dac
- (void)_updateForProgressChange;	// IMP=0x0000000100229d7c
- (id)description;	// IMP=0x0000000100229d28
- (id)initWithType:(long long)arg1 bundleIdentifier:(id)arg2 appInfo:(id)arg3 dataSource:(id)arg4 live:(_Bool)arg5;	// IMP=0x00000001002298f0

@end

