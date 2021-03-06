/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class FBWorkspaceIdentity, RBSProcessHandle, BSSimpleAssertion, NSSet, NSString;

@interface FBWorkspaceEventDispatcherRegistration : NSObject <BSInvalidatable> {

	FBWorkspaceIdentity* _identity;
	RBSProcessHandle* _processHandle;
	BSSimpleAssertion* _underlyingAssertion;
	os_unfair_lock_s _lock;
	NSSet* _lock_remnants;

}

@property (nonatomic,copy,readonly) FBWorkspaceIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) RBSProcessHandle * processHandle;                 //@synthesize processHandle=_processHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(FBWorkspaceIdentity *)identity;
-(RBSProcessHandle *)processHandle;
-(id)consumeRemnantsPassingTest:(/*^block*/id)arg1 ;
-(id)_initWithIdentity:(id)arg1 processHandle:(id)arg2 underlyingAssertion:(id)arg3 ;
-(void)noteHandshakeWithRemnants:(id)arg1 ;
@end

