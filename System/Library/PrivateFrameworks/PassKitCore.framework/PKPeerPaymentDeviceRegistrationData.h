/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSData;

@interface PKPeerPaymentDeviceRegistrationData : NSObject <NSSecureCoding> {

	BOOL _devSigned;
	NSString* _authorizationHeader;
	NSString* _signedAuthToken;
	NSDictionary* _enrollmentData;
	NSData* _signedEnrollmentDataSignature;
	NSString* _companionSerialNumber;

}

@property (nonatomic,copy) NSString * authorizationHeader;                      //@synthesize authorizationHeader=_authorizationHeader - In the implementation block
@property (nonatomic,copy) NSString * signedAuthToken;                          //@synthesize signedAuthToken=_signedAuthToken - In the implementation block
@property (nonatomic,copy) NSDictionary * enrollmentData;                       //@synthesize enrollmentData=_enrollmentData - In the implementation block
@property (nonatomic,copy) NSData * signedEnrollmentDataSignature;              //@synthesize signedEnrollmentDataSignature=_signedEnrollmentDataSignature - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                                    //@synthesize devSigned=_devSigned - In the implementation block
@property (nonatomic,copy) NSString * companionSerialNumber;                    //@synthesize companionSerialNumber=_companionSerialNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)devSigned;
-(void)setDevSigned:(BOOL)arg1 ;
-(NSString *)authorizationHeader;
-(void)setAuthorizationHeader:(NSString *)arg1 ;
-(NSString *)signedAuthToken;
-(void)setSignedAuthToken:(NSString *)arg1 ;
-(NSString *)companionSerialNumber;
-(void)setCompanionSerialNumber:(NSString *)arg1 ;
-(BOOL)isEqualToPeerPaymentDeviceRegistrationData:(id)arg1 ;
-(NSDictionary *)enrollmentData;
-(void)setEnrollmentData:(NSDictionary *)arg1 ;
-(NSData *)signedEnrollmentDataSignature;
-(void)setSignedEnrollmentDataSignature:(NSData *)arg1 ;
@end

