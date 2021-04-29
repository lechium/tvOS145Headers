/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PBSBulletinPresenter.h>

@class PBSBulletin, GKNotificationBannerView, NSString;

@interface GKDashboardNotificationBannerViewController : UIViewController <PBSBulletinPresenter> {

	PBSBulletin* _bulletin;
	GKNotificationBannerView* _bulletinView;

}

@property (nonatomic,retain) PBSBulletin * bulletin;                               //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,retain) GKNotificationBannerView * bulletinView;              //@synthesize bulletinView=_bulletinView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)init;
-(void)viewDidLoad;
-(void)setBulletin:(PBSBulletin *)arg1 ;
-(PBSBulletin *)bulletin;
-(void)bulletinServiceBeginPresentationWithBulletin:(id)arg1 ;
-(void)bulletinServiceUpdateWithBulletin:(id)arg1 ;
-(void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBulletinView:(GKNotificationBannerView *)arg1 ;
-(GKNotificationBannerView *)bulletinView;
@end

