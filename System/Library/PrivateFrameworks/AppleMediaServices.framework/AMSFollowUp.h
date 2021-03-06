/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class FLFollowUpController, NSObject;

@interface AMSFollowUp : NSObject {

	FLFollowUpController* _followUpController;
	NSObject*<OS_dispatch_queue> _followUpQueue;

}

@property (nonatomic,retain) FLFollowUpController * followUpController;               //@synthesize followUpController=_followUpController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> followUpQueue;              //@synthesize followUpQueue=_followUpQueue - In the implementation block
-(id)init;
-(FLFollowUpController *)followUpController;
-(id)pendingFollowUpsForAccount:(id)arg1 ;
-(id)clearFollowUpWithIdentifier:(id)arg1 account:(id)arg2 ;
-(id)postFollowUpItem:(id)arg1 ;
-(id)pendingFollowUps;
-(id)clearFollowUpItem:(id)arg1 ;
-(id)clearFollowUpWithBackingIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)followUpQueue;
-(id)_pendingFollowUpWithBackingIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)pendingFollowUpWithIdentifier:(id)arg1 account:(id)arg2 ;
-(void)setFollowUpController:(FLFollowUpController *)arg1 ;
-(void)setFollowUpQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

