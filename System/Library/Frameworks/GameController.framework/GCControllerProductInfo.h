/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSNumber;


@protocol GCControllerProductInfo <GCControllerComponent>
@property (copy,readonly) NSString * productCategory; 
@property (copy,readonly) NSString * detailedProductCategory; 
@property (copy,readonly) NSString * vendorName; 
@property (copy,readonly) NSString * anonymizedIdentifier; 
@property (getter=isAttachedToDevice,copy,readonly) NSNumber * attachedToDevice; 
@required
-(NSString *)vendorName;
-(NSString *)productCategory;
-(NSString *)detailedProductCategory;
-(NSString *)anonymizedIdentifier;
-(id)isAttachedToDevice;

@end
