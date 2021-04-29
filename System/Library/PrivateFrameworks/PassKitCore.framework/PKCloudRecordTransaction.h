/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKCloudRecordObject.h>

@class PKPaymentTransaction;

@interface PKCloudRecordTransaction : PKCloudRecordObject {

	PKPaymentTransaction* _transaction;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dateFormatter;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)item;
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(void)applyCloudRecordObject:(id)arg1 ;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
@end

