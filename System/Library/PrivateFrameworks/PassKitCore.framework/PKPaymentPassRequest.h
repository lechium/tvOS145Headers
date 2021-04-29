/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentPassRequest : PKPaymentWebServiceRequest {

	NSString* _passTypeID;
	NSString* _serialNumber;

}

@property (nonatomic,copy) NSString * passTypeID;                //@synthesize passTypeID=_passTypeID - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithPassTypeID:(id)arg1 serialNumber:(id)arg2 ;
-(NSString *)passTypeID;
-(void)setPassTypeID:(NSString *)arg1 ;
@end

