//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class STAlarm;

@interface ADAlarmQuery : NSObject
{
    STAlarm *_criteria;	// 8 = 0x8
    long long _searchOptions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010012b610
- (long long)searchOptions;	// IMP=0x000000010012b608
- (id)criteria;	// IMP=0x000000010012b600
- (id)initWithCriteria:(id)arg1 searchOptions:(long long)arg2;	// IMP=0x000000010012b570
- (_Bool)matchesAlarm:(id)arg1;	// IMP=0x000000010012b61c

@end
