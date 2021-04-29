//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKFriendService.h"

#import "GKFriendServicePrivate-Protocol.h"

@class NSString;

@interface GKFriendServicePrivate : GKFriendService <GKFriendServicePrivate>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001000ed648
+ (Class)interfaceClass;	// IMP=0x00000001000ed63c
- (void)expireFriendList;	// IMP=0x00000001000f030c
- (oneway void)acceptFriendRequestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000efefc
- (oneway void)cancelFriendRequestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000efb94
- (oneway void)createFriendRequestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ef768
- (void)getFriendIDsForPlayer:(id)arg1 withFilter:(id)arg2 commonFriends:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000ef6ec
- (void)getFriendsForPlayer:(id)arg1 withFilter:(id)arg2 commonFriends:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000ef53c
- (oneway void)getFriendsForPlayer:(id)arg1 withFilter:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ef528
- (oneway void)getPlayerIDFromFriendCode:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ef0fc
- (oneway void)requestGKPlayerIDforiCloudIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ef070
- (oneway void)reportConcern:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000eebc8
- (oneway void)getConcernsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ee4cc
- (oneway void)removeAllFriendsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000edf38
- (oneway void)removeFriendWithPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ed664
- (oneway void)getCommonFriendsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ed650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

