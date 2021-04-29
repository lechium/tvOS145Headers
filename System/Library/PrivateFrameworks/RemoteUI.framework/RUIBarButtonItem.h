/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteUI/RUIElement.h>

@class UIBarButtonItem, NSString;

@interface RUIBarButtonItem : RUIElement {

	UIBarButtonItem* _barButtonItem;
	/*^block*/id _action;

}

@property (nonatomic,copy) id action;                                        //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem; 
@property (nonatomic,readonly) NSString * itemType; 
-(void)setEnabled:(BOOL)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(NSString *)itemType;
-(id)_labelColor;
-(UIBarButtonItem *)barButtonItem;
-(void)_buttonPressed:(id)arg1 ;
@end
