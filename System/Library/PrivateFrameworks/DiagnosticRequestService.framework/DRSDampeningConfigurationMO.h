/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, DRSTeamDampeningConfigurationMO, DRSDampeningManagerMO;

@interface DRSDampeningConfigurationMO : NSManagedObject

@property (assign,nonatomic) double acceptanceRate; 
@property (assign,nonatomic) long long countCap; 
@property (assign,nonatomic) double hysteresis; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) DRSTeamDampeningConfigurationMO * defaultTeamConfiguration; 
@property (nonatomic,retain) DRSDampeningManagerMO * parentDampeningManagerResource; 
@property (nonatomic,retain) DRSDampeningManagerMO * parentDampeningManagerSignature; 
@property (nonatomic,retain) DRSTeamDampeningConfigurationMO * parentTeamConfiguration; 
+(id)fetchRequest;
@end

