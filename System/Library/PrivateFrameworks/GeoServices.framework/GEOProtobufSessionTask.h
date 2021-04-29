/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>

@protocol GEODataSessionTask, GEOProtobufSessionTaskDelegate, OS_dispatch_queue;
@class GEOProtobufSession, NSObject, NSError, PBCodable, GEOApplicationAuditToken, GEODataRequestThrottlerToken, NSString, GEOClientMetrics;

@interface GEOProtobufSessionTask : NSObject <GEODataSessionTaskDelegate> {

	Class _responseClass;
	id<GEODataSessionTask> _dataTask;
	GEOProtobufSession* _session;
	id<GEOProtobufSessionTaskDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSError* _error;
	PBCodable* _response;
	unsigned _requestTypeCode;
	SCD_Struct_GE86 _requestKind;
	GEOApplicationAuditToken* _auditToken;
	BOOL _completedAsCancelled;
	GEODataRequestThrottlerToken* _throttleToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL completedAsCancelled; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) PBCodable * response; 
@property (nonatomic,readonly) SCD_Struct_GE86 requestKind; 
@property (nonatomic,readonly) Class responseClass;                                           //@synthesize responseClass=_responseClass - In the implementation block
@property (nonatomic,retain) id<GEODataSessionTask> dataTask;                                 //@synthesize dataTask=_dataTask - In the implementation block
@property (assign,nonatomic,__weak) GEOProtobufSession * session;                             //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<GEOProtobufSessionTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic) BOOL completedAsCancelled;                                       //@synthesize completedAsCancelled=_completedAsCancelled - In the implementation block
@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) PBCodable * response;                                            //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) unsigned requestTypeCode;                                      //@synthesize requestTypeCode=_requestTypeCode - In the implementation block
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
@property (nonatomic,readonly) unsigned long long requestedMultipathServiceType; 
@property (nonatomic,readonly) BOOL mptcpNegotiated; 
@property (nonatomic,readonly) BOOL receivedRNFNotification; 
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(id<GEOProtobufSessionTaskDelegate>)delegate;
-(void)setDelegate:(id<GEOProtobufSessionTaskDelegate>)arg1 ;
-(NSError *)error;
-(void)cancel;
-(GEOProtobufSession *)session;
-(void)setResponse:(PBCodable *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(PBCodable *)response;
-(void)start;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setSession:(GEOProtobufSession *)arg1 ;
-(GEOClientMetrics *)clientMetrics;
-(unsigned long long)incomingPayloadSize;
-(unsigned long long)outgoingPayloadSize;
-(NSString *)remoteAddressAndPort;
-(unsigned long long)requestedMultipathServiceType;
-(BOOL)mptcpNegotiated;
-(BOOL)receivedRNFNotification;
-(SCD_Struct_GE86)requestKind;
-(void)dataSession:(id)arg1 didCompleteSubtask:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(BOOL)completedAsCancelled;
-(id)initWithSession:(id)arg1 requestTypeCode:(unsigned)arg2 responseClass:(Class)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 requestKind:(SCD_Struct_GE86)arg6 auditToken:(id)arg7 throttleToken:(id)arg8 ;
-(void)setDataTask:(id<GEODataSessionTask>)arg1 ;
-(id<GEODataSessionTask>)dataTask;
-(void)completeWithCancelled:(BOOL)arg1 error:(id)arg2 response:(id)arg3 ;
-(void)setCompletedAsCancelled:(BOOL)arg1 ;
-(void)completeWithErrorCode:(long long)arg1 ;
-(void)_decodeResponseFromTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)parseInnerProtobufFromData:(id)arg1 ;
-(id)parseResponseFromResponseData:(id)arg1 ;
-(BOOL)parsePreambleWithReader:(id)arg1 ;
-(BOOL)parseProtocolVersionWithReader:(id)arg1 ;
-(BOOL)parseResponseTypeWithReader:(id)arg1 ;
@end

