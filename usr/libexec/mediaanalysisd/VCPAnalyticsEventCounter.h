//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;

@interface VCPAnalyticsEventCounter : NSObject
{
    NSCountedSet *_analytics;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010005e8d0
- (long long)getValueForKey:(id)arg1;	// IMP=0x000000010005e82c
- (void)increaseCount:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000010005e77c
- (id)init;	// IMP=0x000000010005e6e8

@end

