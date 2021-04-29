/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXSettingsConfigurationsMutableSource.h>

@protocol PXSettingsConfigurationsSourceObserver;
@class NSUserDefaults, NSMutableArray;

@interface PXSettingsConfigurationsSource : NSObject <PXSettingsConfigurationsMutableSource> {

	NSUserDefaults* _userDefaults;
	id<PXSettingsConfigurationsSourceObserver> _observer;
	NSMutableArray* _configurations;

}

@property (nonatomic,readonly) NSMutableArray * configurations;                                       //@synthesize configurations=_configurations - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                                         //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) long long numberOfConfigurations; 
@property (assign,nonatomic,__weak) id<PXSettingsConfigurationsSourceObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(id)init;
-(void)setObserver:(id<PXSettingsConfigurationsSourceObserver>)arg1 ;
-(NSMutableArray *)configurations;
-(id<PXSettingsConfigurationsSourceObserver>)observer;
-(NSUserDefaults *)userDefaults;
-(void)_save;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)insertConfiguration:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertConfigurations:(id)arg1 atIndex:(long long)arg2 ;
-(void)deleteConfigurationAtIndex:(long long)arg1 ;
-(void)deleteAllConfigurations;
-(void)renameConfigurationAtIndex:(long long)arg1 withName:(id)arg2 ;
-(void)updateConfigurationAtIndex:(long long)arg1 ;
-(id)initWithUserDefaults:(id)arg1 ;
-(long long)numberOfConfigurations;
-(id)configurationAtIndex:(long long)arg1 ;
-(long long)indexOfConfiguration:(id)arg1 ;
@end

