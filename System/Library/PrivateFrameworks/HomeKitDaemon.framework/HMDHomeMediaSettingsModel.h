/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSString;

@interface HMDHomeMediaSettingsModel : HMDBackingStoreModelObject

@property (nonatomic,copy) NSNumber * minimumMediaUserPrivilege; 
@property (nonatomic,copy) NSNumber * mediaPeerToPeerEnabled; 
@property (nonatomic,copy) NSString * mediaPassword; 
+(id)properties;
+(id)modelIDForHome:(id)arg1 ;
+(id)defaultModelForHome:(id)arg1 ;
+(id)modelNamespace;
@end

