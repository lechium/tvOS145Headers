//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TCCDPolicyOverride.h"

@interface TCCDMDMPolicyOverride : TCCDPolicyOverride
{
}

+ (id)MDMOverridesFilePath;	// IMP=0x0000000100033994
- (void)parsePlist;	// IMP=0x0000000100034c14
- (void)updateDatabase;	// IMP=0x0000000100034be0
- (void)resetDatabaseFlagsForRecordsRemovedFromPreviousPolicy;	// IMP=0x0000000100034790
- (void)addOrUpdateRecordsForCurrentPolicy;	// IMP=0x00000001000344f0
- (void)updateDatabaseForPolicyAuthorizationRecord:(id)arg1 service:(id)arg2;	// IMP=0x0000000100033b84
- (id)init;	// IMP=0x00000001000339a0

@end
