/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/AAURLSessionTaskProtocol.h>

@protocol AAURLSessionTaskProtocol;
@class AAURLSession, NSURLRequest, NSString;

@interface _AAURLSessionConfigurationTask : NSObject <AAURLSessionTaskProtocol> {

	/*^block*/id _completion;
	os_unfair_lock_s _unfairLock;
	struct {
		unsigned isCanceled : 1;
		unsigned isFetchingConfiguration : 1;
	}  _flags;
	id<AAURLSessionTaskProtocol> _configurationTask;
	id<AAURLSessionTaskProtocol> _sessionTask;
	AAURLSession* _session;
	NSURLRequest* _originalRequest;

}

@property (nonatomic,readonly) AAURLSession * session;                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSURLRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)cancel;
-(AAURLSession *)session;
-(void)resume;
-(void)suspend;
-(NSURLRequest *)originalRequest;
-(void)_invokeCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)_initiateSessionTaskWithConfiguration:(id)arg1 ;
-(void)_unfairLock_initiateConfigurationTask;
-(id)initWithSession:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

