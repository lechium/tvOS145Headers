/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IdleTimerHosting.framework/IdleTimerHosting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IdleTimerHosting/IdleTimerHosting-Structs.h>
#import <libobjc.A.dylib/ITAttentionAwarenessClientDelegate.h>

@protocol ITIdleTimerDelegate;
@class NSString, ITAttentionAwarenessClient, ITIdleTimerDescriptor, ITAttentionAwarenessContext;

@interface ITAttentionAwareIdleTimer : NSObject <ITAttentionAwarenessClientDelegate> {

	os_unfair_recursive_lock_s _accessLock;
	NSString* _configurationIdentifier;
	ITAttentionAwarenessClient* _access_client;
	ITIdleTimerDescriptor* _access_descriptor;
	ITAttentionAwarenessContext* _access_context;
	id<ITIdleTimerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<ITIdleTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ITAttentionAwarenessContext * _context; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,copy,readonly) ITIdleTimerDescriptor * descriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_timeoutDictionaryForTimeouts:(id)arg1 ;
+(id)_configurationWithIdentifier:(id)arg1 descriptor:(id)arg2 context:(id)arg3 ;
-(NSString *)description;
-(id)init;
-(id<ITIdleTimerDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(ITAttentionAwarenessContext *)_context;
-(void)reset;
-(BOOL)isEnabled;
-(ITIdleTimerDescriptor *)descriptor;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)client:(id)arg1 attentionLostTimeoutDidExpire:(id)arg2 forContext:(id)arg3 ;
-(void)clientDidReset:(id)arg1 forUserAttentionEvent:(id)arg2 withContext:(id)arg3 ;
-(id)initWithConfigurationIdentifier:(id)arg1 delegate:(id)arg2 calloutQueue:(id)arg3 ;
-(id)_initWithConfigurationIdentifier:(id)arg1 delegate:(id)arg2 calloutQueue:(id)arg3 client:(id)arg4 ;
-(void)_access_reconfigureAttentionClientAndReset:(BOOL)arg1 ;
-(id)_access_generateConfiguration;
-(id)initWithConfigurationIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)setDescriptor:(id)arg1 resettingTimer:(BOOL)arg2 ;
@end

