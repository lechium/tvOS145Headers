/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UINavigationController, IKAppContext;

@interface VUIGDPRPresentationManager : NSObject {

	UINavigationController* _navigationController;
	IKAppContext* _appContext;

}

@property (nonatomic,retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic,__weak) IKAppContext * appContext;                           //@synthesize appContext=_appContext - In the implementation block
+(id)_sharedInstance;
+(BOOL)shouldShowWelcomeScreen;
+(BOOL)showGDPRWelcomeScreen:(id)arg1 ;
+(void)acceptGDPRAndSyncWithServers:(/*^block*/id)arg1 ;
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end
