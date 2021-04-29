/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBCloudDatabaseConfiguration.h>

@class NSString, CKOperationConfiguration, HMFScheduler;

@interface HMBMutableCloudDatabaseConfiguration : HMBCloudDatabaseConfiguration

@property (copy) NSString * sourceApplicationBundleIdentifier; 
@property (getter=isManateeContainer) BOOL manateeContainer; 
@property (copy) CKOperationConfiguration * defaultOperationConfiguration; 
@property (nonatomic,retain) HMFScheduler * apsRegistrationScheduler; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

