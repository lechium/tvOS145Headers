/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSLayoutDimension;


@protocol _UILayoutItem <NSLayoutItem>
@property (nonatomic,readonly) NSLayoutXAxisAnchor * leadingAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * trailingAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * leftAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * rightAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (nonatomic,readonly) NSLayoutDimension * widthAnchor; 
@property (nonatomic,readonly) NSLayoutDimension * heightAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * centerXAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * centerYAnchor; 
@optional
-(id)nsli_contentHeightVariable;
-(id)nsli_contentWidthVariable;
-(id)_contentWidthVariable;
-(id)_contentHeightVariable;

@required
-(NSLayoutXAxisAnchor *)leadingAnchor;
-(NSLayoutXAxisAnchor *)trailingAnchor;
-(NSLayoutYAxisAnchor *)topAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(NSLayoutDimension *)heightAnchor;
-(NSLayoutDimension *)widthAnchor;
-(NSLayoutYAxisAnchor *)centerYAnchor;
-(NSLayoutXAxisAnchor *)centerXAnchor;
-(NSLayoutXAxisAnchor *)leftAnchor;
-(NSLayoutXAxisAnchor *)rightAnchor;
-(id)nsli_minXVariable;
-(id)nsli_minYVariable;
-(id)nsli_boundsWidthVariable;
-(id)nsli_boundsHeightVariable;
-(BOOL)nsli_defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
-(void*)_referenceView;
-(BOOL)_uili_isFocusGuide;
-(id)_boundsWidthVariable;
-(id)_boundsHeightVariable;
-(id)_minXVariable;
-(id)_minYVariable;
-(void)_faultInGuidesForConstraint:(id)arg1;
-(id)_uili_existingBaseFrameVariables;
-(id)_uili_observableLayoutEngineForBaseFrameVariables:(BOOL)arg1;
-(id)_uili_existingObservationEligibleLayoutVariables;
-(void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(BOOL)arg1;
-(void)_uili_stashLayoutVariableObservation:(id)arg1 forVariable:(id)arg2;
-(BOOL)_uili_requiresObservationForVariable:(id)arg1;
-(id)nsli_widthVariable;
-(id)nsli_heightVariable;

@end

