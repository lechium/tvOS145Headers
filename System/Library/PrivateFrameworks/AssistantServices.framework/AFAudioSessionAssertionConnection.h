/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFInvalidating.h>
#import <libobjc.A.dylib/AFRelinquishableAssertion.h>

@protocol OS_dispatch_queue;
@class NSObject, AFInstanceContext, NSXPCConnection, AFAssertionContext, AFTwoArgumentSafetyBlock, NSUUID, NSString;

@interface AFAudioSessionAssertionConnection : NSObject <AFInvalidating, AFRelinquishableAssertion> {

	NSObject*<OS_dispatch_queue> _queue;
	AFInstanceContext* _instanceContext;
	NSXPCConnection* _xpcConnection;
	AFAssertionContext* _acquisitionContext;
	AFTwoArgumentSafetyBlock* _relinquishmentHandler;
	NSUUID* _uuid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) AFAssertionContext * context;              //@synthesize acquisitionContext=_acquisitionContext - In the implementation block
-(NSString *)description;
-(void)dealloc;
-(void)invalidate;
-(AFAssertionContext *)context;
-(id)_xpcConnection;
-(NSUUID *)uuid;
-(id)initWithInstanceContext:(id)arg1 acquisitionContext:(id)arg2 relinquishmentHandler:(/*^block*/id)arg3 ;
-(void)relinquishWithContext:(id)arg1 options:(unsigned long long)arg2 ;
-(void)relinquishWithError:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_acquireWithContext:(id)arg1 ;
-(void)_finalizeWithContext:(id)arg1 error:(id)arg2 ;
-(void)_relinquishWithContext:(id)arg1 error:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_clearXPCConnection;
-(void)handleXPCConnectionInterrupted;
-(void)handleXPCConnectionInvalidated;
@end

