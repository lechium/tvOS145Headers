//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PBSUserProfile, PBUserProfileStore;

@protocol PBUserProfileStoreDelegate
- (void)userProfileStore:(PBUserProfileStore *)arg1 didUpdateiTunesForSelectedUserProfile:(PBSUserProfile *)arg2;
- (void)userProfileStore:(PBUserProfileStore *)arg1 didChangeSelectedUserProfile:(PBSUserProfile *)arg2 previousSelectedUserProfile:(PBSUserProfile *)arg3;
@end
