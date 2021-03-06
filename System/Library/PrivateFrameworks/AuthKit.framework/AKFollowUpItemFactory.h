/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol AKFollowUpItemFactory <NSObject>
@property (nonatomic,copy) NSString * extensionIdentifier; 
@property (nonatomic,copy) NSString * representingBundlePath; 
@property (nonatomic,copy) NSString * bundleIconName; 
@required
-(NSString *)extensionIdentifier;
-(void)setExtensionIdentifier:(id)arg1;
-(void)setRepresentingBundlePath:(id)arg1;
-(void)setBundleIconName:(id)arg1;
-(id)itemsForAltDSID:(id)arg1 fromIDMSPayload:(id)arg2;
-(id)itemIdentifiersRequiringNotificationClearFromPayload:(id)arg1;
-(BOOL)IsFollowUpItemNotificationForced:(id)arg1;
-(NSString *)representingBundlePath;
-(NSString *)bundleIconName;

@end

