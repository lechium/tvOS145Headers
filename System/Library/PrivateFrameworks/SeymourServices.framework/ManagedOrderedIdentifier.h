/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, ManagedCatalogProgramReference, ManagedCatalogWorkoutReference;

@interface ManagedOrderedIdentifier : NSManagedObject

@property (copy,nonatomic) NSString * identifier; 
@property (assign,nonatomic) int index; 
@property (retain,nonatomic) ManagedCatalogProgramReference * catalogProgramContributors; 
@property (retain,nonatomic) ManagedCatalogProgramReference * catalogProgramEquipment; 
@property (retain,nonatomic) ManagedCatalogProgramReference * catalogProgramModalities; 
@property (retain,nonatomic) ManagedCatalogProgramReference * catalogProgramMusicGenres; 
@property (retain,nonatomic) ManagedCatalogProgramReference * catalogProgramTrainers; 
@property (retain,nonatomic) ManagedCatalogProgramReference * catalogProgramWorkouts; 
@property (retain,nonatomic) ManagedCatalogWorkoutReference * catalogWorkoutContributors; 
@property (retain,nonatomic) ManagedCatalogWorkoutReference * catalogWorkoutEquipment; 
@property (retain,nonatomic) ManagedCatalogWorkoutReference * catalogWorkoutMusicGenres; 
@property (retain,nonatomic) ManagedCatalogWorkoutReference * catalogWorkoutTrainers; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
