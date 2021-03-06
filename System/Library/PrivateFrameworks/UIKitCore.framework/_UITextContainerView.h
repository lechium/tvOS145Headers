/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSUITextViewCommonMethods.h>
#import <UIKitCore/_UITextViewCanvasViewContext.h>

@protocol _UITextContainerViewDelegate;
@class NSTextContainer, NSDictionary, UITextView, _UITextViewCanvasView, NSTextStorage, NSLayoutManager, NSString, UIColor;

@interface _UITextContainerView : UIView <NSUITextViewCommonMethods, _UITextViewCanvasViewContext> {

	UIEdgeInsets _textContainerInset;
	CGPoint _textContainerOrigin;
	CGSize _minSize;
	CGSize _maxSize;
	NSTextContainer* _textContainer;
	NSDictionary* _linkTextAttributes;
	unsigned long long _invalidationSeqNo;
	long long _invalidationSeqClipsToBounds;
	struct {
		unsigned textContainerOriginInvalid : 1;
		unsigned verticalLayout : 2;
		unsigned horizontallyResizable : 1;
		unsigned verticallyResizable : 1;
		unsigned freezeTextContainerSize : 1;
		unsigned usesStandardTextScaling : 1;
	}  _tcvFlags;
	CGRect _constrainedTiledRenderingRect;
	UITextView* _textView;
	_UITextViewCanvasView* _canvasView;
	id<_UITextContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSTextContainer * textContainer;                                                                        //@synthesize textContainer=_textContainer - In the implementation block
@property (nonatomic,readonly) NSTextStorage * textStorage; 
@property (nonatomic,readonly) NSLayoutManager * layoutManager; 
@property (assign,nonatomic,__weak) id<_UITextContainerViewDelegate> delegate;                                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textContainerInset; 
@property (assign,getter=isHorizontallyResizable,nonatomic) BOOL horizontallyResizable; 
@property (assign,getter=isVerticallyResizable,nonatomic) BOOL verticallyResizable; 
@property (assign,nonatomic) CGSize minSize;                                                                                                //@synthesize minSize=_minSize - In the implementation block
@property (assign,nonatomic) CGSize maxSize;                                                                                                //@synthesize maxSize=_maxSize - In the implementation block
@property (assign,nonatomic) BOOL usesTiledViews; 
@property (assign,nonatomic) double maxTileHeight; 
@property (nonatomic,readonly) _UITextViewCanvasView * canvasView;                                                                          //@synthesize canvasView=_canvasView - In the implementation block
@property (assign,nonatomic) BOOL usesStandardTextScaling; 
@property (assign,setter=_setFreezeTextContainerSize:,getter=_freezeTextContainerSize,nonatomic) BOOL freezeTextContainerSize; 
@property (assign,nonatomic) NSRange markedRange; 
@property (nonatomic,readonly) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) long long layoutOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect constrainedTiledRenderingRect; 
@property (nonatomic,readonly) CGPoint textContainerOrigin; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) CGPoint drawingScale; 
-(NSString *)description;
-(id<_UITextContainerViewDelegate>)delegate;
-(void)setDelegate:(id<_UITextContainerViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isEditable;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(void)setBackgroundColor:(id)arg1 ;
-(void)sizeToFit;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSRange)markedRange;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
-(NSLayoutManager *)layoutManager;
-(NSTextStorage *)textStorage;
-(id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2 ;
-(id)linkTextAttributes;
-(id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2 ;
-(CGPoint)textContainerOrigin;
-(NSTextContainer *)textContainer;
-(void)invalidateTextContainerOrigin;
-(void)updateInsertionPointStateAndRestartTimer:(BOOL)arg1 ;
-(void)setConstrainedFrameSize:(CGSize)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2 ;
-(id)attributedSubstringForMarkedRange;
-(NSDictionary *)markedTextStyle;
-(UIEdgeInsets)textContainerInset;
-(void)setTextContainer:(NSTextContainer *)arg1 ;
-(CGSize)maxSize;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)setTextContainerInset:(UIEdgeInsets)arg1 ;
-(void)setUsesTiledViews:(BOOL)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(CGSize)minSize;
-(_UITextViewCanvasView *)canvasView;
-(void)setMaxTileHeight:(double)arg1 ;
-(double)maxTileHeight;
-(void)_setNeedsContentsFormatUpdate;
-(CGPoint)drawingScale;
-(void)addGhostedRange:(NSRange)arg1 ;
-(void)removeAllGhostedRanges;
-(void)_ensureLayoutCompleteForRect:(CGRect)arg1 ;
-(BOOL)isHorizontallyResizable;
-(BOOL)usesStandardTextScaling;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 delegate:(id)arg3 ;
-(void)setVerticallyResizable:(BOOL)arg1 ;
-(void)setUsesStandardTextScaling:(BOOL)arg1 ;
-(BOOL)_freezeTextContainerSize;
-(void)setMinSize:(CGSize)arg1 ;
-(BOOL)usesTiledViews;
-(void)setHorizontallyResizable:(BOOL)arg1 ;
-(void)_setFreezeTextContainerSize:(BOOL)arg1 ;
-(void)_constrainTiledRenderingToRect:(CGRect)arg1 ;
-(void)_unconstrainTiledRendering;
-(void)_sizeToConstrainedContainerUsedRect;
-(void)_ensureMinAndMaxSizesConsistentWithBounds;
-(BOOL)isVerticallyResizable;
-(void)_setFrameOrBounds:(CGRect)arg1 oldRect:(CGRect)arg2 isFrameRect:(BOOL)arg3 settingAction:(/*^block*/id)arg4 ;
-(BOOL)_shouldCapSizeToFitLayoutRange:(out NSRange*)arg1 ;
-(CGRect)constrainedTiledRenderingRect;
-(void)_ensureLayoutCompleteToEndOfCharacterRange:(NSRange)arg1 ;
-(CGRect)_intersectRectWithConstrainedTiledRenderingRect:(CGRect)arg1 ;
@end

