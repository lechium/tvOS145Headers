/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/_HMFCFHTTPServerDelegate.h>
#import <HMFoundation/HMFHTTPClientConnectionDelegate.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFHTTPServerDelegate, OS_dispatch_queue;
@class NSMutableArray, _HMFCFHTTPServer, NSString, HMFMutableNetService, NSObject, NSArray;

@interface HMFHTTPServer : HMFObject <_HMFCFHTTPServerDelegate, HMFHTTPClientConnectionDelegate, HMFLogging> {

	os_unfair_lock_s _lock;
	NSMutableArray* _connections;
	NSMutableArray* _requestHandlers;
	unsigned long long _port;
	double _connectionIdleTimeout;
	_HMFCFHTTPServer* _internal;
	id<HMFHTTPServerDelegate> _delegate;
	NSString* _serviceType;
	NSString* _name;
	unsigned long long _options;
	HMFMutableNetService* _netService;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) _HMFCFHTTPServer * internal;                             //@synthesize internal=_internal - In the implementation block
@property (__weak) id<HMFHTTPServerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                           //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long port;                                         //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                            //@synthesize options=_options - In the implementation block
@property (assign) double connectionIdleTimeout;                                      //@synthesize connectionIdleTimeout=_connectionIdleTimeout - In the implementation block
@property (nonatomic,readonly) HMFMutableNetService * netService;                     //@synthesize netService=_netService - In the implementation block
@property (copy,readonly) NSArray * connections;                                      //@synthesize connections=_connections - In the implementation block
@property (copy,readonly) NSArray * requestHandlers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(id<HMFHTTPServerDelegate>)delegate;
-(void)setDelegate:(id<HMFHTTPServerDelegate>)arg1 ;
-(unsigned long long)port;
-(NSString *)serviceType;
-(void)stop;
-(unsigned long long)options;
-(NSArray *)connections;
-(id)shortDescription;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(_HMFCFHTTPServer *)internal;
-(void)setInternal:(_HMFCFHTTPServer *)arg1 ;
-(HMFMutableNetService *)netService;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)connectionIdleTimeout;
-(void)setConnectionIdleTimeout:(double)arg1 ;
-(void)addConnection:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(NSArray *)requestHandlers;
-(void)stopWithError:(id)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(void)serverDidInvalidate:(id)arg1 ;
-(void)server:(id)arg1 didOpenConnection:(id)arg2 ;
-(void)server:(id)arg1 didCloseConnection:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)_stopWithError:(id)arg1 ;
-(void)_handleOpenedConnection:(id)arg1 ;
-(void)_handleClosedConnection:(id)arg1 ;
-(void)_handleReceivedRequest:(id)arg1 connection:(id)arg2 ;
-(id)initWithServiceType:(id)arg1 name:(id)arg2 port:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(void)registerRequestHandler:(id)arg1 ;
-(void)unregisterRequestHandler:(id)arg1 ;
@end

