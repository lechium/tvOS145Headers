/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKTableViewCell.h>

@class UIActivityIndicatorView, UISwitch;

@interface PKSettingTableCell : PKTableViewCell {

	UIActivityIndicatorView* _spinner;
	BOOL _showingSpinner;
	id _target;
	SEL _action;
	UISwitch* _settingSwitch;

}

@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (nonatomic,__weak,readonly) id target;                    //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                          //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UISwitch * settingSwitch;              //@synthesize settingSwitch=_settingSwitch - In the implementation block
-(void)dealloc;
-(id)target;
-(void)prepareForReuse;
-(SEL)action;
-(BOOL)isOn;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setOn:(BOOL)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(UISwitch *)settingSwitch;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)showSpinner:(BOOL)arg1 ;
-(void)setSettingSwitch:(UISwitch *)arg1 ;
@end
