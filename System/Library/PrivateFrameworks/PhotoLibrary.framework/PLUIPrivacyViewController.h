/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class _UIAccessDeniedView;

@interface PLUIPrivacyViewController : UIViewController {

	BOOL _showingAccessDeniedView;
	_UIAccessDeniedView* _accessDeniedView;

}
-(void)dealloc;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(void)_updateAccessDeniedView;
-(void)_showCancelButton;
-(void)_cancelButtonClicked:(id)arg1 ;
@end

