/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PBSBulletinPresenter <NSObject>
@optional
+(id)_remoteViewControllerInterface;
-(void)bulletinServiceBeginUserInteraction;
-(void)bulletinServiceEndUserInteraction;
-(void)bulletinServiceToggleSize;
-(void)bulletinServiceWillPresentBulletin:(id)arg1;

@required
+(id)_exportedInterface;
-(void)bulletinServiceBeginPresentationWithBulletin:(id)arg1;
-(void)bulletinServiceUpdateWithBulletin:(id)arg1;
-(void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(/*^block*/id)arg2;

@end

