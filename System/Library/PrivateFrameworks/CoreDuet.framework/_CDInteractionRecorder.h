/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_CDInteractionDeleting.h>
#import <libobjc.A.dylib/_CDInteractionQuerying.h>
#import <libobjc.A.dylib/_CDInteractionRecording.h>

@class NSXPCConnection, _CDInteractionPolicies;

@interface _CDInteractionRecorder : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording> {

	NSXPCConnection* _connection;
	_CDInteractionPolicies* _policies;
	BOOL _enforceDataLimits;
	BOOL _enforcePrivacy;

}

@property (assign) BOOL enforceDataLimits;              //@synthesize enforceDataLimits=_enforceDataLimits - In the implementation block
@property (assign) BOOL enforcePrivacy;                 //@synthesize enforcePrivacy=_enforcePrivacy - In the implementation block
+(id)interactionRecorder;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)recordInteractions:(id)arg1 ;
-(unsigned long long)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)recordInteraction:(id)arg1 ;
-(void)recordInteractions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)countContactsUsingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)enforceDataLimits;
-(BOOL)enforcePrivacy;
-(BOOL)recordInteractions:(id)arg1 synchronous:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queryInteractionsUsingPredicate:(id)arg1 synchronous:(BOOL)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)countInteractionsUsingPredicate:(id)arg1 synchronous:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queryContactsUsingPredicate:(id)arg1 synchronous:(BOOL)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)countContactsUsingPredicate:(id)arg1 synchronous:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteInteractionsMatchingPredicate:(id)arg1 synchronous:(BOOL)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(BOOL)arg2 account:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(BOOL)arg2 domainIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setEnforceDataLimits:(BOOL)arg1 ;
-(void)setEnforcePrivacy:(BOOL)arg1 ;
@end

