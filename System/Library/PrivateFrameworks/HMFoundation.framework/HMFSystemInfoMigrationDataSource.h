/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMFSystemInfoMigrationDataSource <NSObject>
@property (__weak) id<HMFSystemInfoMigrationDataSourceDelegate> delegate; 
@property (getter=isMigrating,nonatomic,readonly) BOOL migrating; 
@required
-(id<HMFSystemInfoMigrationDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isMigrating;

@end

