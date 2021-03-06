/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString, NSNumber, HMDDevice;

@interface HMDResidentDeviceModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * deviceUUID; 
@property (nonatomic,retain) NSNumber * enabled; 
@property (nonatomic,retain) NSNumber * confirmed; 
@property (nonatomic,retain) HMDDevice * device; 
@property (nonatomic,retain) NSString * changeToken; 
+(id)properties;
@end

