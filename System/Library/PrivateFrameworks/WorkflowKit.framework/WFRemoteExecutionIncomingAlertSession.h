/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class NSSet, NSDictionary;

@interface WFRemoteExecutionIncomingAlertSession : WFRemoteExecutionSession {

	NSSet* _lastKnownDestinations;
	NSDictionary* _lastKnownOptions;

}

@property (nonatomic,retain) NSSet * lastKnownDestinations;                //@synthesize lastKnownDestinations=_lastKnownDestinations - In the implementation block
@property (nonatomic,retain) NSDictionary * lastKnownOptions;              //@synthesize lastKnownOptions=_lastKnownOptions - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(void)handleTimeout;
-(double)timeoutLimitInSeconds;
-(NSSet *)lastKnownDestinations;
-(void)setLastKnownDestinations:(NSSet *)arg1 ;
-(NSDictionary *)lastKnownOptions;
-(void)setLastKnownOptions:(NSDictionary *)arg1 ;
-(void)handleIncomingProtobuf:(id)arg1 currentlyActiveSessions:(id)arg2 responseDestinations:(id)arg3 options:(id)arg4 ;
-(void)sendSelectedButton:(id)arg1 forAlertWithIdentifier:(id)arg2 error:(id)arg3 destinations:(id)arg4 options:(id)arg5 ;
@end

