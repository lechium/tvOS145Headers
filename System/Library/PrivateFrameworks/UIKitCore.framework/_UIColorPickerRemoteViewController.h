/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKitCore/_UIColorPickerRemoteViewControllerHost.h>

@protocol _UIColorPickerRemoteViewControllerHost;
@class NSString;

@interface _UIColorPickerRemoteViewController : _UIRemoteViewController <_UIColorPickerRemoteViewControllerHost> {

	id<_UIColorPickerRemoteViewControllerHost> _delegate;

}

@property (assign,nonatomic,__weak) id<_UIColorPickerRemoteViewControllerHost> _delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(BOOL)__shouldHostedWindowMoveBetweenSecureAndInsecureMainScreen;
-(id<_UIColorPickerRemoteViewControllerHost>)_delegate;
-(BOOL)_canShowWhileLocked;
-(void)set_delegate:(id<_UIColorPickerRemoteViewControllerHost>)arg1 ;
-(void)_pickerDidSelectColor:(id)arg1 colorspace:(id)arg2 isVolatile:(BOOL)arg3 ;
-(void)_pickerDidShowEyedropper;
-(void)_pickerDidFloatEyedropper;
-(void)_pickerDidDismissEyedropper;
-(void)_colorPickerDidFinish;
@end

