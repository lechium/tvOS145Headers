/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKOperationGroupSystemImposedInfo, CKOperationConfiguration, NSString, NSNumber;

@interface CKOperationGroup : NSObject <NSSecureCoding> {

	CKOperationGroupSystemImposedInfo* _systemImposedInfo_locked;
	long long _expectedSendSize;
	long long _expectedReceiveSize;
	CKOperationConfiguration* _defaultConfiguration;
	NSString* _operationGroupID;
	NSString* _name;
	NSNumber* _quantityNumber;
	NSString* _authPromptReason;

}

@property (nonatomic,copy) CKOperationGroupSystemImposedInfo * systemImposedInfo; 
@property (nonatomic,copy) NSNumber * quantityNumber;                                          //@synthesize quantityNumber=_quantityNumber - In the implementation block
@property (copy) NSString * authPromptReason;                                                  //@synthesize authPromptReason=_authPromptReason - In the implementation block
@property (nonatomic,readonly) long long approximateSendBytes; 
@property (nonatomic,readonly) long long approximateReceiveBytes; 
@property (nonatomic,copy,readonly) NSString * operationGroupID;                               //@synthesize operationGroupID=_operationGroupID - In the implementation block
@property (copy) CKOperationConfiguration * defaultConfiguration;                              //@synthesize defaultConfiguration=_defaultConfiguration - In the implementation block
@property (copy) NSString * name;                                                              //@synthesize name=_name - In the implementation block
@property (assign) unsigned long long quantity; 
@property (assign) long long expectedSendSize;                                                 //@synthesize expectedSendSize=_expectedSendSize - In the implementation block
@property (assign) long long expectedReceiveSize;                                              //@synthesize expectedReceiveSize=_expectedReceiveSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CKOperationConfiguration *)defaultConfiguration;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setDefaultConfiguration:(CKOperationConfiguration *)arg1 ;
-(void)setSystemImposedInfo:(CKOperationGroupSystemImposedInfo *)arg1 ;
-(NSNumber *)quantityNumber;
-(void)setQuantityNumber:(NSNumber *)arg1 ;
-(long long)expectedSendSize;
-(long long)expectedReceiveSize;
-(long long)_approximateBytesForTransferSize:(long long)arg1 ;
-(CKOperationGroupSystemImposedInfo *)systemImposedInfo;
-(NSString *)operationGroupID;
-(unsigned long long)quantity;
-(NSString *)authPromptReason;
-(void)setQuantity:(unsigned long long)arg1 ;
-(void)setExpectedSendSize:(long long)arg1 ;
-(void)setExpectedReceiveSize:(long long)arg1 ;
-(long long)approximateSendBytes;
-(long long)approximateReceiveBytes;
-(unsigned long long)resolvedNetworkServiceTypeForConfig:(id)arg1 ;
-(void)setAuthPromptReason:(NSString *)arg1 ;
@end

