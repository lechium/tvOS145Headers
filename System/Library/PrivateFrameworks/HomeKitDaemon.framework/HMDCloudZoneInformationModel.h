/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString;

@interface HMDCloudZoneInformationModel : HMDBackingStoreModelObject {

	BOOL _requiresHomeManagerUpdate;

}

@property (nonatomic,retain) NSString * ownerName; 
@property (assign,nonatomic) BOOL requiresHomeManagerUpdate;              //@synthesize requiresHomeManagerUpdate=_requiresHomeManagerUpdate - In the implementation block
+(id)properties;
-(id)dependentUUIDs;
-(BOOL)requiresHomeManagerUpdate;
-(void)setRequiresHomeManagerUpdate:(BOOL)arg1 ;
@end
