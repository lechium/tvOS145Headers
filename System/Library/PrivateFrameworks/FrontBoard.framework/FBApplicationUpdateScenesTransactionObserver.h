/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FBApplicationUpdateScenesTransactionObserver <BSTransactionObserver>
@optional
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
-(void)transaction:(id)arg1 didCreateScene:(id)arg2;
-(void)transaction:(id)arg1 willUpdateScene:(id)arg2;
-(void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
-(void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;

@end
