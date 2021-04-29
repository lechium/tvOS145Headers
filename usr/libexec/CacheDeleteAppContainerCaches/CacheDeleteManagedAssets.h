//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CacheDeleteManagedAssets : NSObject
{
    _Bool _cancel;	// 8 = 0x8
    int _urgency;	// 12 = 0xc
    NSString *_volume;	// 16 = 0x10
    NSDictionary *_info;	// 24 = 0x18
}

+ (id)cacheDeleteManagedAssetsWithInfo:(id)arg1 atUrgency:(int)arg2;	// IMP=0x0000000100008910
- (void).cxx_destruct;	// IMP=0x000000010000aec4
@property _Bool cancel; // @synthesize cancel=_cancel;
@property(readonly, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly) int urgency; // @synthesize urgency=_urgency;
@property(readonly, nonatomic) NSString *volume; // @synthesize volume=_volume;
- (id)analytics;	// IMP=0x000000010000a5f0
- (void)periodic:(id)arg1;	// IMP=0x0000000100009fc0
- (void)cancelPurge;	// IMP=0x0000000100009fb0
- (unsigned long long)purgeAssets:(unsigned long long)arg1 testObject:(id)arg2;	// IMP=0x000000010000988c
- (id)assetsFromArray:(id)arg1 forAmount:(unsigned long long)arg2;	// IMP=0x000000010000961c
- (id)sizeEligibleAsset:(long long *)arg1;	// IMP=0x0000000100009378
- (id)sortAssets:(id)arg1;	// IMP=0x0000000100008b30
- (_Bool)periodicShouldRemoveAsset:(id)arg1;	// IMP=0x0000000100008a34
- (_Bool)dateHasExpired:(id)arg1 interval:(double)arg2;	// IMP=0x0000000100008974
- (id)initWithInfo:(id)arg1 atUrgency:(int)arg2;	// IMP=0x00000001000087e0

@end

