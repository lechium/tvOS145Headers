/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, ManagedCatalogPreview;

@interface ManagedCatalogModalityMetadata : NSManagedObject

@property (copy,nonatomic) NSString * abridgedSummary; 
@property (copy,nonatomic) NSString * identifier; 
@property (copy,nonatomic) NSString * sharingURL; 
@property (copy,nonatomic) NSString * summary; 
@property (retain,nonatomic) NSSet * artwork; 
@property (retain,nonatomic) ManagedCatalogPreview * preview; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
