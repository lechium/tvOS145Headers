/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITextInputAdditions
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@optional
-(id)selectionInteractionAssistant;
-(BOOL)_allowAnimatedUpdateSelectionRectViews;
-(id)_textInputViewForAddingGestureRecognizers;
-(BOOL)_useGesturesForEditableContent;

@required
-(BOOL)isEditable;
-(BOOL)isEditing;
-(void)beginSelectionChange;
-(id)interactionAssistant;
-(void)endSelectionChange;
-(id)textInputView;
-(CGRect*)_caretRect;

@end

