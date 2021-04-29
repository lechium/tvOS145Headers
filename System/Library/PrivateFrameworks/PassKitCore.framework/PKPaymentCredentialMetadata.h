/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PKPaymentCredentialMetadata : NSObject {

	NSString* _localizedDisplayName;
	NSString* _value;

}

@property (nonatomic,copy,readonly) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                             //@synthesize value=_value - In the implementation block
+(id)paymentCredentialMetadataWithConfiguration:(id)arg1 ;
+(Class)classForValueType:(id)arg1 ;
-(NSString *)value;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)localizedDisplayName;
-(id)displayString;
@end

