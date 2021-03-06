/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/PGMaterialView.h>

@protocol BSInvalidatable, PGButtonViewDelegate;
@class NSString, _PGButton, UIViewPropertyAnimator, UIFont;

@interface PGButtonView : PGMaterialView {

	double _currentGlyphSize;
	NSString* _currentGlyphImageName;
	id<BSInvalidatable> _preventAutoHideOfControlsAssertion;
	BOOL _circular;
	BOOL _highlighted;
	id<PGButtonViewDelegate> _delegate;
	NSString* _systemImageName;
	double _glyphSize;
	_PGButton* _actualButton;
	UIViewPropertyAnimator* _highlightAnimator;

}

@property (nonatomic,retain) _PGButton * actualButton;                                       //@synthesize actualButton=_actualButton - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                          //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic,__weak) UIViewPropertyAnimator * highlightAnimator;              //@synthesize highlightAnimator=_highlightAnimator - In the implementation block
@property (assign,nonatomic,__weak) id<PGButtonViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * systemImageName;                                       //@synthesize systemImageName=_systemImageName - In the implementation block
@property (assign,getter=isCircular,nonatomic) BOOL circular;                                //@synthesize circular=_circular - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) UIFont * font; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) double glyphSize;                                               //@synthesize glyphSize=_glyphSize - In the implementation block
+(Class)layerClass;
+(id)buttonWithDelegate:(id)arg1 ;
+(id)disabledTintColor;
+(id)enabledTintColor;
-(void)dealloc;
-(id<PGButtonViewDelegate>)delegate;
-(void)setDelegate:(id<PGButtonViewDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)systemImageName;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(void)sizeToFit;
-(double)glyphSize;
-(id)accessibilityIdentifier;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setAccessibilityIdentifier:(id)arg1 ;
-(void)didMoveToWindow;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setGlyphSize:(double)arg1 ;
-(void)setSystemImageName:(NSString *)arg1 ;
-(void)setCircular:(BOOL)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
-(void)_handleTouchDown:(id)arg1 ;
-(void)_handleDragEnter:(id)arg1 ;
-(void)_handleDragExit:(id)arg1 ;
-(void)_handleTouchUpOrCancel:(id)arg1 ;
-(_PGButton *)actualButton;
-(void)_updateForCircularAppearanceIfNeeded;
-(BOOL)_shouldHitTest;
-(void)_updateGlyphConfigurationIfNeeded;
-(BOOL)isCircular;
-(void)setActualButton:(_PGButton *)arg1 ;
-(UIViewPropertyAnimator *)highlightAnimator;
-(void)setHighlightAnimator:(UIViewPropertyAnimator *)arg1 ;
@end

