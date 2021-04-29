/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSString, NSData;

@interface _SFCertificate : NSObject {

	id _certificateInternal;

}

@property (nonatomic,readonly) SecCertificateRef secCertificate; 
@property (nonatomic,readonly) long long certificateType; 
@property (nonatomic,readonly) NSString * subject; 
@property (nonatomic,readonly) NSString * issuerName; 
@property (nonatomic,readonly) NSData * serialNumber; 
+(BOOL)supportsSecureCoding;
-(NSString *)subject;
-(NSData *)serialNumber;
-(long long)certificateType;
-(NSString *)issuerName;
-(SecCertificateRef)secCertificate;
-(id)initWithSecCertificate:(SecCertificateRef)arg1 ;
@end
