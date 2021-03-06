/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFHTTPRequestInternal.h>

@class _HMFCFHTTPServerConnection, NSMutableData;

@interface _HMFCFHTTPServerRequest : HMFHTTPRequestInternal {

	CFHTTPServerRequestRef _requestRef;
	CFReadStreamRef _bodyStream;
	_HMFCFHTTPServerConnection* _connection;
	NSMutableData* _bodyData;

}

@property (nonatomic,readonly) NSMutableData * bodyData;                                    //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) CFHTTPServerRequestRef requestRef;                           //@synthesize requestRef=_requestRef - In the implementation block
@property (nonatomic,readonly) CFReadStreamRef bodyStream;                                  //@synthesize bodyStream=_bodyStream - In the implementation block
@property (nonatomic,__weak,readonly) _HMFCFHTTPServerConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(void)dealloc;
-(NSMutableData *)bodyData;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)method;
-(_HMFCFHTTPServerConnection *)connection;
-(void)setBody:(id)arg1 ;
-(id)body;
-(void)setMethod:(id)arg1 ;
-(id)headerFields;
-(void)setHeaders:(id)arg1 ;
-(id)initWithConnection:(id)arg1 requestRef:(CFHTTPServerRequestRef)arg2 ;
-(CFReadStreamRef)bodyStream;
-(void)appendBodyData:(id)arg1 ;
-(id)responseWithStatusCode:(long long)arg1 ;
-(CFHTTPServerRequestRef)requestRef;
@end

