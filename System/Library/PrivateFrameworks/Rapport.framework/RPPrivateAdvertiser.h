/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Rapport/Rapport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPPrivateDiscoveryXPCClientInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, NSObject, NSDictionary;

@interface RPPrivateAdvertiser : NSObject <NSSecureCoding, RPPrivateDiscoveryXPCClientInterface> {

	BOOL _activateCalled;
	BOOL _changesPending;
	BOOL _direct;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	unsigned _clientID;
	NSString* _accessGroup;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSDictionary* _serviceInfo;
	NSString* _serviceType;

}

@property (assign,nonatomic) unsigned clientID;                                       //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSString * accessGroup;                                    //@synthesize accessGroup=_accessGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSDictionary * serviceInfo;                                //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_update;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)activate;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)_interrupted;
-(unsigned)clientID;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_ensureXPCStarted;
-(void)_invalidateDirect;
-(void)_updateIfNeededWithBlock:(/*^block*/id)arg1 ;
-(void)setClientID:(unsigned)arg1 ;
-(NSDictionary *)serviceInfo;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(void)setServiceInfo:(NSDictionary *)arg1 ;
-(void)_activateDirect;
-(void)_activateXPC:(BOOL)arg1 ;
-(void)xpcPrivateDiscoveryEndpointFound:(id)arg1 ;
-(void)xpcPrivateDiscoveryEndpointLost:(id)arg1 ;
-(void)xpcPrivateDiscoveryEndpointChanged:(id)arg1 ;
@end

