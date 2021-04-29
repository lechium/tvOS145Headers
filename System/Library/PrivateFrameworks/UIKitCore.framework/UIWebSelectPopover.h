/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIWebFormRotatingAccessoryPopover.h>
#import <UIKit/UIWebFormControl.h>

@class UIWebSelectTableViewController;

@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {

	UIWebSelectTableViewController* _tableViewController;

}

@property (nonatomic,retain) UIWebSelectTableViewController * _tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
-(void)dealloc;
-(UIWebSelectTableViewController *)_tableViewController;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)_userActionDismissedPopover:(id)arg1 ;
-(id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(BOOL)arg5 ;
-(void)set_tableViewController:(UIWebSelectTableViewController *)arg1 ;
@end

