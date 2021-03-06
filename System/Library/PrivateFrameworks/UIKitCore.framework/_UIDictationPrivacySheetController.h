/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>

@protocol _UIDictationPrivacySheetControllerDelegate;
@class OBPrivacyPresenter;

@interface _UIDictationPrivacySheetController : UINavigationController {

	id<_UIDictationPrivacySheetControllerDelegate> _privacyDelegate;
	OBPrivacyPresenter* _privacyPresenter;
	long long _sheetType;

}

@property (assign,nonatomic) id<_UIDictationPrivacySheetControllerDelegate> privacyDelegate;              //@synthesize privacyDelegate=_privacyDelegate - In the implementation block
@property (nonatomic,retain) OBPrivacyPresenter * privacyPresenter;                                       //@synthesize privacyPresenter=_privacyPresenter - In the implementation block
@property (assign,nonatomic) long long sheetType;                                                         //@synthesize sheetType=_sheetType - In the implementation block
-(id)initWithType:(long long)arg1 ;
-(void)dismiss;
-(BOOL)_canShowWhileLocked;
-(id<_UIDictationPrivacySheetControllerDelegate>)privacyDelegate;
-(void)setPrivacyDelegate:(id<_UIDictationPrivacySheetControllerDelegate>)arg1 ;
-(OBPrivacyPresenter *)privacyPresenter;
-(void)setPrivacyPresenter:(OBPrivacyPresenter *)arg1 ;
-(long long)sheetType;
-(void)setSheetType:(long long)arg1 ;
@end

