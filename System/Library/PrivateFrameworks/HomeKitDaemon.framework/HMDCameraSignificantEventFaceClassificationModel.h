/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HMBModel.h>

@class NSUUID, NSString;

@interface HMDCameraSignificantEventFaceClassificationModel : HMBModel

@property (retain) NSUUID * personManagerUUID; 
@property (retain) NSUUID * personUUID; 
@property (retain) NSString * personName; 
@property (retain) NSUUID * unassociatedFaceCropUUID; 
+(id)hmbProperties;
+(id)hmbExternalRecordType;
-(id)createFaceClassification;
@end

