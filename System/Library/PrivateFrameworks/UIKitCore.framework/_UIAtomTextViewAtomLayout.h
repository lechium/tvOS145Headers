/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIAtomTextViewAtomLayout <NSObject>
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long selectionStyle; 
@property (nonatomic,readonly) CGRect selectionBounds; 
@property (nonatomic,readonly) long long baseWritingDirection; 
@optional
-(long long)baseWritingDirection;

@required
-(void)setEnabled:(BOOL)arg1;
-(BOOL)isEnabled;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
-(CGRect)selectionBounds;
-(void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2;

@end

