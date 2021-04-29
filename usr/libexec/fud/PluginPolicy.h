//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface PluginPolicy : NSObject <NSSecureCoding>
{
    NSString *pluginName;	// 8 = 0x8
    _Bool isValid;	// 16 = 0x10
    double remoteFirmwareCheckInterval;	// 24 = 0x18
    NSMutableArray *groups;	// 32 = 0x20
    NSMutableArray *matchingFilters;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100016978
@property(retain) NSMutableArray *groups; // @synthesize groups;
@property(retain) NSMutableArray *matchingFilters; // @synthesize matchingFilters;
@property double remoteFirmwareCheckInterval; // @synthesize remoteFirmwareCheckInterval;
@property _Bool isValid; // @synthesize isValid;
@property(retain) NSString *pluginName; // @synthesize pluginName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100016bac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000169e4
- (void)dealloc;	// IMP=0x0000000100016980
- (_Bool)doesPolicyContainGroup:(id)arg1;	// IMP=0x0000000100016834
- (id)getMatchingFilterWithName:(id)arg1;	// IMP=0x00000001000166f4
- (void)parsePolicyDict:(id)arg1;	// IMP=0x0000000100015c3c
- (id)initWithPolicyDictionary:(id)arg1 pluginName:(id)arg2;	// IMP=0x0000000100015b80

@end
