/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKPaymentSetupProductPaymentOption : NSObject <NSSecureCoding> {

	unsigned long long _priority;
	long long _cardType;
	long long _supportedProtocols;

}

@property (nonatomic,readonly) unsigned long long priority;               //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) long long cardType;                        //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) long long supportedProtocols;              //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)priority;
-(long long)cardType;
-(id)initWithPaymentOptionDictionary:(id)arg1 ;
-(long long)supportedProtocols;
@end
