/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableSet, Protocol, NSXPCListener, NSString;

@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate> {

	BOOL _isResumed;
	id _xObj;
	NSMutableSet* _requiredEntitlements;
	Protocol* _protocol;
	NSXPCListener* _listener;
	NSString* _serviceName;

}

@property (assign,nonatomic) BOOL isResumed;                                   //@synthesize isResumed=_isResumed - In the implementation block
@property (nonatomic,retain) id xObj;                                          //@synthesize xObj=_xObj - In the implementation block
@property (nonatomic,retain) NSMutableSet * requiredEntitlements;              //@synthesize requiredEntitlements=_requiredEntitlements - In the implementation block
@property (nonatomic,retain) Protocol * protocol;                              //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                         //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                           //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)resume;
-(void)suspend;
-(Protocol *)protocol;
-(NSString *)serviceName;
-(void)setProtocol:(Protocol *)arg1 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSMutableSet *)requiredEntitlements;
-(id)xObj;
-(BOOL)isResumed;
-(void)setIsResumed:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 listener:(id)arg2 protocol:(id)arg3 exportedObj:(id)arg4 isExtension:(BOOL)arg5 ;
-(void)addRequiredEntitlement:(id)arg1 ;
-(void)setXObj:(id)arg1 ;
-(void)setRequiredEntitlements:(NSMutableSet *)arg1 ;
@end

