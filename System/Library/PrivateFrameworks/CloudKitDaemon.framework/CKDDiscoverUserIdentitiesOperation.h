/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDDiscoverUserIdentitiesOperation : CKDOperation {

	/*^block*/id _discoverUserIdentitiesProgressBlock;
	NSArray* _userIdentityLookupInfos;

}

@property (nonatomic,retain) NSArray * userIdentityLookupInfos;                 //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,copy) id discoverUserIdentitiesProgressBlock;              //@synthesize discoverUserIdentitiesProgressBlock=_discoverUserIdentitiesProgressBlock - In the implementation block
-(void)main;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSArray *)userIdentityLookupInfos;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setDiscoverUserIdentitiesProgressBlock:(id)arg1 ;
-(id)discoverUserIdentitiesProgressBlock;
-(void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3 ;
-(void)_discoverIdentitiesWithLookupInfos:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

