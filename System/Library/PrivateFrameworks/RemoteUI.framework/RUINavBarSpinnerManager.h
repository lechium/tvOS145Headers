/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface RUINavBarSpinnerManager : NSObject {

	NSMutableDictionary* _savedRecords;
	long long _activityIndicatorViewStyle;

}

@property (assign,nonatomic) long long activityIndicatorViewStyle;              //@synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle - In the implementation block
+(id)sharedSpinnerManager;
-(id)init;
-(void)stopAnimatingForIdentifier:(id)arg1 ;
-(void)setActivityIndicatorViewStyle:(long long)arg1 ;
-(void)startAnimatingInNavItem:(id)arg1 title:(id)arg2 forIdentifier:(id)arg3 hideBackButton:(BOOL)arg4 hideLeftItems:(BOOL)arg5 ;
-(long long)activityIndicatorViewStyle;
@end
