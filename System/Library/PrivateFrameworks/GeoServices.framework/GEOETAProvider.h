/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOProtobufSessionTaskDelegate.h>

@protocol OS_dispatch_queue;
@class GEOProtobufSession, GEOProtobufSessionTask, GEOETATrafficUpdateRequest, GEOApplicationAuditToken, GEOMapServiceTraits, NSObject, NSString;

@interface GEOETAProvider : NSObject <GEOProtobufSessionTaskDelegate> {

	GEOProtobufSession* _protobufSession;
	GEOProtobufSessionTask* _task;
	GEOETATrafficUpdateRequest* _currentRequest;
	/*^block*/id _errorHandler;
	/*^block*/id _finishedHandler;
	/*^block*/id _willSendRequestHandler;
	GEOApplicationAuditToken* _auditToken;
	GEOMapServiceTraits* _traits;
	BOOL _cancelled;
	GEOOnce_s _didStart;
	NSObject*<OS_dispatch_queue> _isolationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOProtobufSession * protobufSession;              //@synthesize protobufSession=_protobufSession - In the implementation block
@property (nonatomic,retain) GEOProtobufSessionTask * task;                       //@synthesize task=_task - In the implementation block
@property (retain) GEOETATrafficUpdateRequest * currentRequest;                   //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,copy) id errorHandler;                                       //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id finishedHandler;                                    //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id willSendRequestHandler;                             //@synthesize willSendRequestHandler=_willSendRequestHandler - In the implementation block
-(id)init;
-(GEOETATrafficUpdateRequest *)currentRequest;
-(void)setCurrentRequest:(GEOETATrafficUpdateRequest *)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)cancelRequest;
-(void)setFinishedHandler:(id)arg1 ;
-(void)setWillSendRequestHandler:(id)arg1 ;
-(id)willSendRequestHandler;
-(id)finishedHandler;
-(GEOProtobufSession *)protobufSession;
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(void)protobufSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)protobufSession:(id)arg1 validateResponse:(id)arg2 ;
-(GEOProtobufSessionTask *)task;
-(void)setTask:(GEOProtobufSessionTask *)arg1 ;
-(void)startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)_startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)didCompleteTask;
-(id)initWithAuditToken:(id)arg1 traits:(id)arg2 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)updateRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
@end

