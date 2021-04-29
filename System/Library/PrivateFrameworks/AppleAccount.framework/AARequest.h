/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, NSDictionary, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate> {

	/*^block*/id _handler;
	NSString* _initialURLString;
	OpaqueCFHTTPCookieStorageRef _cookieStorage;
	NSString* _oneTimePassword;
	NSString* _machineId;
	BOOL _flushCache;
	NSDictionary* _customHeaders;

}

@property (readonly) NSURLRequest * urlRequest; 
@property (assign,nonatomic) BOOL flushCache;                         //@synthesize flushCache=_flushCache - In the implementation block
@property (nonatomic,copy) NSDictionary * customHeaders;              //@synthesize customHeaders=_customHeaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
+(id)protocolVersion;
+(id)redactedHeadersFromHTTPHeaders:(id)arg1 ;
-(void)dealloc;
-(BOOL)flushCache;
-(id)urlString;
-(id)initWithURLString:(id)arg1 ;
-(id)bodyDictionary;
-(void)performSignedRequestWithHandler:(/*^block*/id)arg1 ;
-(NSURLRequest *)urlRequest;
-(void)setFlushCache:(BOOL)arg1 ;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(void)setCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)setCustomHeaders:(NSDictionary *)arg1 ;
-(id)redactedBodyStringWithPropertyList:(id)arg1 ;
-(void)_performRequestWithSession:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)setDeviceProvisioningOneTimePassword:(id)arg1 ;
-(void)setDeviceProvisioningMachineId:(id)arg1 ;
-(id)urlCredential;
-(void)performRequestForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)customHeaders;
@end

