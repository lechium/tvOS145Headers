/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSDate, HMBModelCloudReference, NSUUID;

@interface HMDFaceCropModel : HMBModel

@property (retain) NSData * faceBoundingBoxData; 
@property (retain) NSData * dataRepresentation; 
@property (retain) NSDate * dateCreated; 
@property (assign) CGRect faceBoundingBox; 
@property (retain) HMBModelCloudReference * person; 
@property (retain) NSUUID * unassociatedFaceCropUUID; 
+(id)faceCropsForPersonQuery;
+(id)faceCropsForAnyPersonQuery;
+(id)faceCropsForNoPersonQuery;
+(id)faceCropsWithUnassociatedFaceCropUUIDQuery;
+(id)sentinelParentUUID;
+(id)hmbProperties;
+(id)hmbQueries;
-(CGRect)faceBoundingBox;
-(void)setFaceBoundingBox:(CGRect)arg1 ;
-(id)initWithPersonFaceCrop:(id)arg1 ;
-(id)createFaceCrop;
-(id)createPersonFaceCrop;
@end

