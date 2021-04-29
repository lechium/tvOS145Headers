/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ExposureNotificationDaemon/ENTestResultNetworkRequest.h>

@class NSString, NSData;

@interface ENTestResultCertificateRequest : ENTestResultNetworkRequest {

	NSString* _token;
	NSData* _symmetricKey;
	NSData* _HMAC;
	NSString* _certificate;

}

@property (nonatomic,copy,readonly) NSString * token;                    //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSData * symmetricKey;               //@synthesize symmetricKey=_symmetricKey - In the implementation block
@property (nonatomic,copy,readonly) NSData * HMAC;                       //@synthesize HMAC=_HMAC - In the implementation block
@property (nonatomic,copy,readonly) NSString * certificate;              //@synthesize certificate=_certificate - In the implementation block
+(id)deriveHMACForTemporaryExposureKeys:(id)arg1 symmetricKey:(id)arg2 ;
+(id)certificateRequestWithToken:(id)arg1 temporaryExposureKeys:(id)arg2 APIKey:(id)arg3 requestURL:(id)arg4 URLSession:(id)arg5 queue:(id)arg6 error:(id*)arg7 ;
-(NSString *)token;
-(NSString *)certificate;
-(id)bodyJSON;
-(id)handleResponse:(id)arg1 body:(id)arg2 ;
-(NSData *)symmetricKey;
-(NSData *)HMAC;
@end

