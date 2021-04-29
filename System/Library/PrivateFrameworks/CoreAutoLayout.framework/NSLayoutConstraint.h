/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSISConstraint.h>

@class _NSLayoutConstraintConstant, _NSConstraintDescriptionLayoutRuleNode, NSLayoutAnchor, NSString, NSSet;

@interface NSLayoutConstraint : NSObject <NSISConstraint> {

	id _container;
	id _firstAnchor;
	id _secondAnchor;
	double _constant;
	double _loweredConstant;
	id _markerAndPositiveExtraVar;
	id _negativeExtraVar;
	unsigned long long _layoutConstraintFlags;
	float _coefficient;
	float _priority;

}

@property (setter=_setEncodedConstant:,getter=_encodedConstant) _NSLayoutConstraintConstant * encodedConstant; 
@property (setter=_setAssociatedRuleNode:) _NSConstraintDescriptionLayoutRuleNode * _associatedRuleNode; 
@property (setter=_setFirstAnchor:,copy) NSLayoutAnchor * firstAnchor;                                                                               //@synthesize firstAnchor=_firstAnchor - In the implementation block
@property (setter=_setRelation:) long long relation; 
@property (setter=_setMultiplier:) double multiplier; 
@property (setter=_setSecondAnchor:,copy) NSLayoutAnchor * secondAnchor;                                                                             //@synthesize secondAnchor=_secondAnchor - In the implementation block
@property (copy) NSString * identifier; 
@property (readonly) BOOL hasBeenLowered; 
@property (assign) id container; 
@property (setter=_setContainerDeclaredConstraint:) BOOL _containerDeclaredConstraint; 
@property (readonly) double unsatisfaction; 
@property (copy) NSString * symbolicConstant; 
@property (assign) double symbolicConstantMultiplier; 
@property (assign,setter=_setLoweredConstantNeedsUpdate:,getter=_loweredConstantNeedsUpdate,nonatomic) BOOL loweredConstantNeedsUpdate; 
@property (copy,readonly) NSSet * _referencedLayoutItems; 
@property (assign) float priority; 
@property (assign) BOOL shouldBeArchived; 
@property (readonly) id firstItem; 
@property (readonly) long long firstAttribute; 
@property (readonly) id secondItem; 
@property (readonly) long long secondAttribute; 
@property (assign) double constant; 
@property (getter=isActive) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_gkConstraintsForView:(id)arg1 withinView:(id)arg2 insets:(UIEdgeInsets)arg3 ;
+(void)_gkInstallEdgeConstraintsForView:(id)arg1 containedWithinParentView:(id)arg2 ;
+(void)_gkInstallEdgeConstraintsForView:(id)arg1 containedWithinParentView:(id)arg2 edgeInsets:(UIEdgeInsets)arg3 ;
+(id)_gkConstraintForView:(id)arg1 centeredXInView:(id)arg2 ;
+(id)_gkConstraintForView:(id)arg1 withConstantWidth:(double)arg2 ;
+(id)_gkConstraintForView:(id)arg1 centeredYInView:(id)arg2 ;
+(id)_gkConstraintForView:(id)arg1 withConstantHeight:(double)arg2 ;
+(void)_gkInstallEdgeConstraintsForView:(id)arg1 containedWithinParentView:(id)arg2 margin:(double)arg3 ;
+(id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(BOOL)arg2 overlap:(double)arg3 withinView:(id)arg4 insets:(UIEdgeInsets)arg5 applyOrthogonalConstraints:(BOOL)arg6 ;
+(id)_gkConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 leading:(double)arg7 fontTextStyle:(id)arg8 ;
+(id)_gkConstraintForView:(id)arg1 equalsAttribute:(long long)arg2 ofView:(id)arg3 ;
+(id)_gkConstraintsForView:(id)arg1 centeredXInView:(id)arg2 enforceMargin:(double)arg3 ;
+(id)_gkConstraintForView:(id)arg1 baselineAlignedUnderView:(id)arg2 offsetBy:(double)arg3 ;
+(id)_gkConstraintForView:(id)arg1 withWidthDerivedFromView:(id)arg2 insetBy:(double)arg3 ;
+(id)_gkConstraintForView:(id)arg1 withHeightDerivedFromView:(id)arg2 insetBy:(double)arg3 ;
+(id)_gkConstraintsForViews:(id)arg1 alignedByAttribute:(long long)arg2 ;
+(id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(BOOL)arg2 overlap:(double)arg3 withinView:(id)arg4 insets:(UIEdgeInsets)arg5 ;
+(id)_gkBaselineConstraintsForViewsFontsLeadings:(id)arg1 superview:(id)arg2 options:(long long)arg3 ;
+(id)constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned long long)arg3 offset:(UIOffset)arg4 ;
+(id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(UIEdgeInsets)arg4 ;
+(id)constraintsByCenteringAndContainingView:(id)arg1 inView:(id)arg2 insets:(UIEdgeInsets)arg3 ;
+(id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 inCorner:(unsigned long long)arg3 offset:(UIOffset)arg4 ;
+(id)constraintsBySizingView:(id)arg1 toSize:(CGSize)arg2 ;
+(id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 relatedBy:(long long)arg4 insets:(UIEdgeInsets)arg5 ;
+(BOOL)naui_areConstraints:(id)arg1 equalToConstraints:(id)arg2 ;
+(id)naui_constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned long long)arg3 offset:(UIOffset)arg4 ;
+(id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(UIEdgeInsets)arg4 ;
+(id)naui_constraintsBySizingView:(id)arg1 toSize:(CGSize)arg2 ;
+(id)naui_viewsInConstraints:(id)arg1 ;
+(id)naui_constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 label:(id)arg5 ;
+(id)PG_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8 ;
+(id)ax_constraintsToMakeItem:(id)arg1 sameDimensionsAsItem:(id)arg2 ;
+(id)ax_constraintsToMakeView:(id)arg1 sameDimensionsAsView:(id)arg2 ;
+(double)_constraintConstantLimit;
+(BOOL)_UIWantsMarginAttributeSupport;
+(void)activateConstraints:(id)arg1 ;
+(void)deactivateConstraints:(id)arg1 ;
+(id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 ;
+(id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 multiplier:(double)arg4 constant:(double)arg5 ;
+(double)_constraintConstantLimit;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 symbolicConstantMultiplier:(double)arg8 ;
+(id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 ;
+(void)_setLegacyDecodingOnly:(BOOL)arg1 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4 ;
+(id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 constant:(double)arg3 ;
-(id)updateConstraintForAspectMultiplier:(double)arg1 ;
-(BOOL)naui_isEqualToConstraint:(id)arg1 ;
-(id)naui_debugIdentifierWithBaseLabel:(id)arg1 ;
-(void)naui_setIdentifierWithLabel:(id)arg1 ;
-(id)ax_copyWithPriority:(float)arg1 ;
-(void)ax_removeFromContainer;
-(id)_uiSecondRefView;
-(id)_uiFirstRefView;
-(id)_ui_constraintWithPriority:(float)arg1 ;
-(id)_ola_dimensionRefItem;
-(id)_ola_dimensionItem;
-(void)_setBaselineLoweringInfo:(id)arg1 forFirstItem:(BOOL)arg2 ;
-(id)_baselineLoweringInfoForFirstItem:(BOOL)arg1 ;
-(id)_encodedConstant;
-(void)_setEncodedConstant:(id)arg1 ;
-(id)_debuggableEquationBaseDescription;
-(id)_debuggableEquationLegendDescription;
-(id)_debuggableEquationDescriptionWithoutLegend;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)container;
-(NSString *)identifier;
-(id)_identifier;
-(float)priority;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPriority:(float)arg1 ;
-(double)constant;
-(double)multiplier;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setContainer:(id)arg1 ;
-(id)animations;
-(void)setAnimations:(id)arg1 ;
-(id)firstItem;
-(long long)relation;
-(id)secondItem;
-(void)setConstant:(double)arg1 ;
-(int)_constraintType;
-(long long)firstAttribute;
-(long long)secondAttribute;
-(NSLayoutAnchor *)firstAnchor;
-(NSLayoutAnchor *)secondAnchor;
-(BOOL)shouldBeArchived;
-(void)setShouldBeArchived:(BOOL)arg1 ;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(BOOL)_addToEngine:(id)arg1 mutuallyExclusiveConstraints:(id*)arg2 ;
-(double)unsatisfaction;
-(id)_markerAndPositiveExtraVar;
-(void)_removeFromEngine:(id)arg1 ;
-(void)_addToEngine:(id)arg1 ;
-(_NSConstraintDescriptionLayoutRuleNode *)_associatedRuleNode;
-(void)_setAssociatedRuleNode:(id)arg1 ;
-(void)_setContainerDeclaredConstraint:(BOOL)arg1 ;
-(double)priorityForVariable:(id)arg1 ;
-(void)_setFirstAnchor:(id)arg1 ;
-(BOOL)hasBeenLowered;
-(void)_setSecondAnchor:(id)arg1 ;
-(id)_constantDescriptionForDTrace;
-(BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(BOOL*)arg2 ;
-(id)_symbolicConstant;
-(NSSet *)_referencedLayoutItems;
-(double)symbolicConstantMultiplier;
-(void)_setSymbolicConstant:(id)arg1 ;
-(BOOL)_effectiveConstant:(double*)arg1 error:(id*)arg2 ;
-(id)_descriptionforSymbolicConstant;
-(id)descriptionAccessory;
-(id)_priorityDescription;
-(id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2 ;
-(BOOL)_isEqualToConstraintValue:(id)arg1 includingConstant:(BOOL)arg2 includeOtherMutableProperties:(BOOL)arg3 ;
-(void)_setRelation:(long long)arg1 ;
-(void)_setMultiplier:(double)arg1 ;
-(void)_setActive:(BOOL)arg1 mutuallyExclusiveConstraints:(id*)arg2 ;
-(void)_tryToActivateMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2 ;
-(BOOL)_nsib_isRedundantInEngine:(id)arg1 ;
-(void)_setFirstItem:(id)arg1 attribute:(long long)arg2 ;
-(void)_setSecondItem:(id)arg1 attribute:(long long)arg2 ;
-(void)setSymbolicConstant:(NSString *)arg1 ;
-(void)setSymbolicConstantMultiplier:(double)arg1 ;
-(void)_setLoweredConstantNeedsUpdate:(BOOL)arg1 ;
-(BOOL)_loweredConstantNeedsUpdate;
-(BOOL)_isIBPrototypingLayoutConstraint;
-(BOOL)_existsInEngine:(id)arg1 ;
-(BOOL)_isFudgeable;
-(double)_fudgeIncrement;
-(double)_allowedMagnitudeForIntegralizationAdjustment;
-(BOOL)_loweredConstantIsRounded;
-(void)_clearWeakContainerReference;
-(BOOL)_containerDeclaredConstraint;
-(void)_containerGeometryDidChange;
-(NSString *)symbolicConstant;
-(id)_constraintByReplacingView:(id)arg1 withView:(id)arg2 ;
-(BOOL)_referencesLayoutItem:(id)arg1 ;
-(BOOL)_describesSameRestrictionAsConstraint:(id)arg1 ;
-(unsigned long long)_constraintValueHashIncludingConstant:(BOOL)arg1 includeOtherMutableProperties:(BOOL)arg2 ;
-(void)_setMutablePropertiesFromConstraint:(id)arg1 ;
-(id)_constraintValueCopy;
-(BOOL)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id*)arg3 ;
-(CGSize)_engineToContainerScalingCoefficients;
-(id)_loweredExpression;
-(void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2 ;
-(id)_explainUnsatisfaction;
-(BOOL)_nsib_isRedundant;
@end

