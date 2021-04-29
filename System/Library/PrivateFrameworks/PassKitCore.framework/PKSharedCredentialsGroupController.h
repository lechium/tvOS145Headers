/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PassKitCore/PassKitCore-Structs.h>
@class PKContactResolver, PKPaymentWebService, PKAppletSubcredential, NSObject, NSHashTable, NSArray, PKPaymentPass;

@interface PKSharedCredentialsGroupController : NSObject {

	PKContactResolver* _contactResolver;
	PKPaymentWebService* _webService;
	PKAppletSubcredential* _credential;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _delegates;
	os_unfair_lock_s _delegateLock;
	BOOL _sharingEnabled;
	NSArray* _groups;
	PKPaymentPass* _pass;

}

@property (nonatomic,readonly) NSArray * groups;                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) NSArray * nonLocalGroups; 
@property (nonatomic,readonly) BOOL sharingEnabled;                   //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass;                  //@synthesize pass=_pass - In the implementation block
-(NSArray *)groups;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(PKPaymentPass *)pass;
-(BOOL)sharingEnabled;
-(void)parseCredentialsOnPass:(id)arg1 ;
-(unsigned long long)numberOfOutstandingSharingSession;
-(void)immobilizerTokenCountWithCompletion:(/*^block*/id)arg1 ;
-(void)didUpdateGroups;
-(void)updateGroupsWithCredential:(id)arg1 ;
-(id)initWithPass:(id)arg1 contactResolver:(id)arg2 webService:(id)arg3 queue:(id)arg4 ;
-(id)contactForGroup:(id)arg1 ;
-(void)fetchContactForGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)canSendInvitationWithCompletion:(/*^block*/id)arg1 ;
-(void)revokeGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSArray *)nonLocalGroups;
@end
