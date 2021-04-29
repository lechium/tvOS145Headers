/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString, FBSSerialQueue, NSSet, NSMutableSet;

@interface FBSServiceFacility : NSObject <BSDescriptionProviding, BSInvalidatable> {

	NSString* _identifier;
	FBSSerialQueue* _queue;
	NSSet* _prerequisiteMilestones;
	NSMutableSet* _clients;
	NSSet* _clients_immutable;
	os_unfair_lock_s _clients_immutable_lock;
	BOOL _invalidated;

}

@property (nonatomic,readonly) NSSet * _prerequisiteMilestones; 
@property (nonatomic,copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) FBSSerialQueue * queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSSet * clients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSString *)identifier;
-(FBSSerialQueue *)queue;
-(NSSet *)clients;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 ;
-(BOOL)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(NSSet *)_prerequisiteMilestones;
-(BOOL)queue_clientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)queue_clientDidDisconnect:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3 ;
@end

