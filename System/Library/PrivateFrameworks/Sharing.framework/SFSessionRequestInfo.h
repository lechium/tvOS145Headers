/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface SFSessionRequestInfo : NSObject {

	NSString* _requestID;
	NSDictionary* _options;
	NSDictionary* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSString * requestID;                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSDictionary * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                  //@synthesize responseHandler=_responseHandler - In the implementation block
-(NSDictionary *)request;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setRequest:(NSDictionary *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(id)responseHandler;
@end

