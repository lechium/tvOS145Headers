/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSURL;

@interface PKAccountWebServiceCertificatesRequest : PKAccountWebServiceRequest {

	NSURL* _baseURL;
	unsigned long long _destination;

}

@property (nonatomic,retain) NSURL * baseURL;                             //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) unsigned long long destination;              //@synthesize destination=_destination - In the implementation block
-(NSURL *)baseURL;
-(void)setDestination:(unsigned long long)arg1 ;
-(unsigned long long)destination;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
@end

