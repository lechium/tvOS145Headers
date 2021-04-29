/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UILabel.h>
#import <TVUIKit/TVLockupViewComponent.h>

@class NSString;

@interface _TVLockupLabel : UILabel <TVLockupViewComponent> {

	BOOL _ancestorFocused;

}

@property (assign,getter=isAncestorFocused,nonatomic) BOOL ancestorFocused;              //@synthesize ancestorFocused=_ancestorFocused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateAppearanceForLockupViewState:(unsigned long long)arg1 ;
-(BOOL)isAncestorFocused;
-(id)_defaultFocusedTextColor;
-(id)_defaultUnfocusedTextColor;
-(void)setAncestorFocused:(BOOL)arg1 ;
-(void)_updateShadowInFocus:(BOOL)arg1 ;
@end
