/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBSServiceFacilityClientHandle_Internal.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol FBSServiceFacilityClientContext;
@class NSString, BSServiceConnection, FBProcess, BSProcessHandle, RBSProcessIdentity;

@interface FBServiceFacilityServerClientHandle : NSObject <FBSServiceFacilityClientHandle_Internal, BSInvalidatable> {

	NSString* _facilityID;
	BSServiceConnection* _connection;
	FBProcess* _process;
	BSProcessHandle* _processHandle;
	id<FBSServiceFacilityClientContext> _context;

}

@property (nonatomic,readonly) id<BSXPCServiceConnectionMessaging> clientHandle_messageBuilder; 
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) BSProcessHandle * processHandle;                                              //@synthesize processHandle=_processHandle - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * processIdentity; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,copy,readonly) NSString * facilityID;                                                   //@synthesize facilityID=_facilityID - In the implementation block
@property (nonatomic,retain) id<FBSServiceFacilityClientContext> context;                                    //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)invalidate;
-(BOOL)isSuspended;
-(id<FBSServiceFacilityClientContext>)context;
-(void)setContext:(id<FBSServiceFacilityClientContext>)arg1 ;
-(int)pid;
-(BSProcessHandle *)processHandle;
-(RBSProcessIdentity *)processIdentity;
-(id)prettyProcessDescription;
-(NSString *)facilityID;
-(id<BSXPCServiceConnectionMessaging>)clientHandle_messageBuilder;
-(id)initWithFacilityID:(id)arg1 connection:(id)arg2 ;
@end

