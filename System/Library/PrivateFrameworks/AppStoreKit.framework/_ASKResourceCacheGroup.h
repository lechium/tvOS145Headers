/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppStoreKit/AppStoreKit-Structs.h>
@class NSMutableArray;

@interface _ASKResourceCacheGroup : NSObject {

	NSMutableArray* _memberContents;
	os_unfair_lock_s _guard;
	BOOL _hasMultipleMembers;

}

@property (assign) BOOL hasMultipleMembers;              //@synthesize hasMultipleMembers=_hasMultipleMembers - In the implementation block
-(id)init;
-(void)setHasMultipleMembers:(BOOL)arg1 ;
-(id)snapshotMemberContents;
-(id)onlyMemberContents;
-(id)makeMemberContents;
-(void)discardMemberContents:(id)arg1 ;
-(BOOL)hasMultipleMembers;
@end

