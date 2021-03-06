//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDUnitLogRule.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SDUnitLogGlob : SDUnitLogRule
{
    NSString *_glob;	// 128 = 0x80
}

+ (id)logRuleWithGlob:(id)arg1 withDate:(id)arg2 withFilter:(id)arg3 newestFileCount:(unsigned long long)arg4 atInternalDirectory:(id)arg5 withRuntimeChecks:(unsigned long long)arg6;	// IMP=0x0000000100008c28
+ (id)logRuleWithGlob:(id)arg1;	// IMP=0x0000000100008bb0
- (void).cxx_destruct;	// IMP=0x0000000100009680
@property(retain) NSString *glob; // @synthesize glob=_glob;
- (id)description;	// IMP=0x00000001000095f0
- (id)getNextMatch;	// IMP=0x0000000100009398
- (void)expandHomeDirectoriesForGlob:(id)arg1 andAddToURLArray:(id)arg2;	// IMP=0x0000000100009018
- (void)addGlobContents:(id)arg1 toURLArray:(id)arg2;	// IMP=0x0000000100008d0c

@end

