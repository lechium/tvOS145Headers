//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, PBAppSwitcherItem;

@interface PBAppSwitcherUpdate : NSObject
{
    long long _type;	// 8 = 0x8
    PBAppSwitcherItem *_item;	// 16 = 0x10
    NSIndexPath *_fromIndexPath;	// 24 = 0x18
    NSIndexPath *_toIndexPath;	// 32 = 0x20
}

+ (id)insertUpdateWithItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000001000668d8
+ (id)deleteUpdateWithItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000100066830
- (void).cxx_destruct;	// IMP=0x0000000100066a48
@property(readonly, copy, nonatomic) NSIndexPath *toIndexPath; // @synthesize toIndexPath=_toIndexPath;
@property(readonly, copy, nonatomic) NSIndexPath *fromIndexPath; // @synthesize fromIndexPath=_fromIndexPath;
@property(readonly, copy, nonatomic) PBAppSwitcherItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 item:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;	// IMP=0x00000001000666c0

@end

