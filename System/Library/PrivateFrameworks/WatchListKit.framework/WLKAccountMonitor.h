/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccount;

@interface WLKAccountMonitor : NSObject {

	ACAccount* _activeAccount;

}

@property (nonatomic,readonly) ACAccount * activeAccount;              //@synthesize activeAccount=_activeAccount - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_accountStoreDidChange:(id)arg1 ;
-(ACAccount *)activeAccount;
-(BOOL)_shouldNotifyAccountChange:(id)arg1 newAccount:(id)arg2 ;
-(BOOL)_shouldNotifyStoreFrontChange:(id)arg1 newAccount:(id)arg2 ;
@end
