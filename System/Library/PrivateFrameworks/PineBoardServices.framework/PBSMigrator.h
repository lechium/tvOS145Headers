/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface PBSMigrator : NSObject {

	NSMutableArray* _allMigrations;

}

@property (nonatomic,readonly) NSMutableArray * allMigrations;              //@synthesize allMigrations=_allMigrations - In the implementation block
+(id)_contextForCurrentOS;
+(BOOL)_performMigrationWithContext:(id)arg1 ;
+(void)registerMigration:(id)arg1 ;
+(BOOL)performMigrationIfNeeded;
+(void)_resetMigrator;
-(id)init;
-(id)_init;
-(NSMutableArray *)allMigrations;
-(void)_performMigrationsWithContext:(id)arg1 ;
@end

