/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DeviceIdentitySignature : NSObject {

	NSString* _signature;
	NSString* _leafCertificate;
	NSString* _intermediateCertificate;

}

@property (nonatomic,copy) NSString * signature;                            //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy) NSString * leafCertificate;                      //@synthesize leafCertificate=_leafCertificate - In the implementation block
@property (nonatomic,copy) NSString * intermediateCertificate;              //@synthesize intermediateCertificate=_intermediateCertificate - In the implementation block
-(id)description;
-(NSString *)signature;
-(void)setSignature:(NSString *)arg1 ;
-(NSString *)leafCertificate;
-(NSString *)intermediateCertificate;
-(void)setLeafCertificate:(NSString *)arg1 ;
-(void)setIntermediateCertificate:(NSString *)arg1 ;
@end

