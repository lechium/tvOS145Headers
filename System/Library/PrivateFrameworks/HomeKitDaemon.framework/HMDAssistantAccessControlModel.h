/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSArray, NSString;

@interface HMDAssistantAccessControlModel : HMDBackingStoreModelObject

@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSNumber * options; 
@property (nonatomic,copy) NSArray * accessoryModelIDs; 
@property (nonatomic,retain) NSString * changeTag; 
+(id)properties;
-(id)dependentUUIDs;
@end

