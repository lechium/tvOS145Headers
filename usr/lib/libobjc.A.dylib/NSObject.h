/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libobjc.A.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/libobjc.A.dylib-Structs.h>
#import <libobjc.A.dylib/CARenderValue.h>
#import <libobjc.A.dylib/CAAnimatableValue.h>
#import <libobjc.A.dylib/NSObject.h>
@class NSString;


@protocol NSObject
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@optional
-(NSString *)debugDescription;

@required
-(id)retain;
-(oneway void)release;
-(id)self;
-(Class)class;
-(BOOL)isKindOfClass:(Class)arg1;
-(BOOL)respondsToSelector:(SEL)arg1;
-(id)autorelease;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1;
-(unsigned long long)hash;
-(Class)superclass;
-(NSString *)description;
-(id)performSelector:(SEL)arg1;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
-(BOOL)isProxy;
-(BOOL)isMemberOfClass:(Class)arg1;
-(BOOL)conformsToProtocol:(id)arg1;
-(NSZone*)zone;

@end


@class NSString, NSAttributedString, UIBezierPath, NSArray, _UITraitStorageList, UIDescriptionBuilder;

@interface NSObject <CARenderValue, CAAnimatableValue, NSObject> {

	Class isa;

}

@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (nonatomic,copy) NSString * accessibilityLabel; 
@property (nonatomic,copy) NSAttributedString * accessibilityAttributedLabel; 
@property (nonatomic,copy) NSString * accessibilityHint; 
@property (nonatomic,copy) NSAttributedString * accessibilityAttributedHint; 
@property (nonatomic,copy) NSString * accessibilityValue; 
@property (nonatomic,copy) NSAttributedString * accessibilityAttributedValue; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (assign,nonatomic) CGRect accessibilityFrame; 
@property (nonatomic,copy) UIBezierPath * accessibilityPath; 
@property (assign,nonatomic) CGPoint accessibilityActivationPoint; 
@property (nonatomic,retain) NSString * accessibilityLanguage; 
@property (assign,nonatomic) BOOL accessibilityElementsHidden; 
@property (assign,nonatomic) BOOL accessibilityViewIsModal; 
@property (assign,nonatomic) BOOL shouldGroupAccessibilityChildren; 
@property (assign,nonatomic) long long accessibilityNavigationStyle; 
@property (assign,nonatomic) BOOL accessibilityRespondsToUserInteraction; 
@property (nonatomic,retain) NSArray * accessibilityUserInputLabels; 
@property (nonatomic,copy) NSArray * accessibilityAttributedUserInputLabels; 
@property (nonatomic,copy) NSArray * accessibilityHeaderElements; 
@property (nonatomic,retain) NSString * accessibilityTextualContext; 
@property (nonatomic,retain) NSArray * accessibilityCustomActions; 
@property (nonatomic,copy) NSString * accessibilityIdentifier; 
@property (nonatomic,readonly) NSString * accessibilityLocalizedStringKey; 
@property (nonatomic,retain) NSArray * accessibilityElements; 
@property (assign,nonatomic) long long accessibilityContainerType; 
@property (nonatomic,retain) NSArray * accessibilityCustomRotors; 
@property (setter=_setTraitStorageList:,getter=_traitStorageList,retain) _UITraitStorageList * traitStorageList; 
@property (nonatomic,readonly) UIDescriptionBuilder * _ui_descriptionBuilder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) void* observationInfo; 
@property (readonly) Class classForKeyedArchiver; 
@property (retain,readonly) id autoContentAccessingProxy; 
+(BOOL)__accessibilityGuidedAccessStateEnabled;
+(long long)__accessibilityGuidedAccessRestrictionStateForIdentifier:(id)arg1 ;
+(void)__accessibilityRequestGuidedAccessSession:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
+(void)_installAppearanceSwizzlesForSetter:(id)arg1 ;
+(BOOL)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(BOOL)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(id)_webkit_invokeOnMainThread;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(BOOL)CA_encodesPropertyConditionally:(unsigned)arg1 type:(int)arg2 ;
+(id)CA_CAMLPropertyForKey:(id)arg1 ;
+(BOOL)supportsRBSXPCSecureCoding;
+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)bs_isPlistableType;
+(id)bs_secureDecodedFromData:(id)arg1 ;
+(id)bs_secureDecodedFromData:(id)arg1 withAdditionalClasses:(id)arg2 ;
+(id)bs_secureDataFromObject:(id)arg1 ;
+(id)bs_secureObjectFromData:(id)arg1 ofClass:(Class)arg2 ;
+(id)bs_secureObjectFromData:(id)arg1 ofClasses:(id)arg2 ;
+(id)bs_dataFromObject:(id)arg1 ;
+(id)bs_objectFromData:(id)arg1 ;
+(id)bs_decodedFromData:(id)arg1 ;
+(void)load;
+(long long)version;
+(BOOL)implementsSelector:(SEL)arg1 ;
+(BOOL)instancesImplementSelector:(SEL)arg1 ;
+(void)setVersion:(long long)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)replacementObjectForPortCoder:(id)arg1 ;
+(id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(BOOL)accessInstanceVariablesDirectly;
+(id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_keysForValuesAffectingValueForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2 ;
+(BOOL)_shouldAddObservationForwardersForKey:(id)arg1 ;
+(id)classFallbacksForKeyedArchiver;
+(Class)classForKeyedUnarchiver;
+(void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
+(void)cancelPreviousPerformRequestsWithTarget:(id)arg1 ;
+(void)load;
+(id)description;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(id)init;
+(void)dealloc;
+(id)_copyDescription;
+(id)__allocWithZone_OA:(NSZone*)arg1 ;
+(id)SFSQLiteClassName;
+(void)initialize;
+(id)retain;
+(oneway void)release;
+(BOOL)allowsWeakReference;
+(BOOL)retainWeakReference;
+(id)new;
+(id)self;
+(Class)class;
+(BOOL)isKindOfClass:(Class)arg1 ;
+(BOOL)respondsToSelector:(SEL)arg1 ;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)resolveClassMethod:(SEL)arg1 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)autorelease;
+(BOOL)_tryRetain;
+(BOOL)_isDeallocating;
+(unsigned long long)retainCount;
+(BOOL)isEqual:(id)arg1 ;
+(unsigned long long)hash;
+(id)copyWithZone:(NSZone*)arg1 ;
+(id)mutableCopyWithZone:(NSZone*)arg1 ;
+(id)copy;
+(Class)superclass;
+(id)description;
+(id)debugDescription;
+(id)performSelector:(SEL)arg1 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
+(BOOL)isProxy;
+(BOOL)isMemberOfClass:(Class)arg1 ;
+(BOOL)conformsToProtocol:(id)arg1 ;
+(NSZone*)zone;
+(BOOL)isSubclassOfClass:(Class)arg1 ;
+(BOOL)isAncestorOfObject:(id)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(BOOL)isFault;
+(/*function pointer*/void*)instanceMethodForSelector:(SEL)arg1 ;
+(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
+(id)forwardingTargetForSelector:(SEL)arg1 ;
+(id)init;
+(void)dealloc;
+(id)mutableCopy;
-(id)className;
-(id)_propertyDescription;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)accessibilityValue;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(NSString *)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityContainer;
-(NSString *)accessibilityLanguage;
-(unsigned long long)accessibilityTraits;
-(NSArray *)accessibilityHeaderElements;
-(NSString *)accessibilityHint;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(CGPoint)accessibilityActivationPoint;
-(CGRect)accessibilityFrame;
-(NSString *)accessibilityTextualContext;
-(BOOL)accessibilityPerformEscape;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(NSString *)accessibilityIdentifier;
-(void)setAccessibilityElementsHidden:(BOOL)arg1 ;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(void)accessibilitySetIdentification:(id)arg1 ;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(void)awakeFromNib;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(NSAttributedString *)accessibilityAttributedLabel;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityContainer:(id)arg1 ;
-(NSString *)accessibilityLocalizedStringKey;
-(BOOL)accessibilityElementsHidden;
-(BOOL)accessibilityViewIsModal;
-(BOOL)accessibilityRespondsToUserInteraction;
-(long long)accessibilityContainerType;
-(UIBezierPath *)accessibilityPath;
-(BOOL)shouldGroupAccessibilityChildren;
-(BOOL)accessibilityActivate;
-(NSArray *)accessibilityCustomActions;
-(NSArray *)accessibilityCustomRotors;
-(NSArray *)accessibilityUserInputLabels;
-(NSAttributedString *)accessibilityAttributedValue;
-(NSAttributedString *)accessibilityAttributedHint;
-(NSArray *)accessibilityAttributedUserInputLabels;
-(BOOL)accessibilityElementIsFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityElementDidBecomeFocused;
-(id)accessibilityAssistiveTechnologyFocusedIdentifiers;
-(id)storedAccessibilityRespondsToUserInteraction;
-(void)setAccessibilityAttributedLabel:(NSAttributedString *)arg1 ;
-(void)setAccessibilityAttributedValue:(NSAttributedString *)arg1 ;
-(void)setAccessibilityAttributedHint:(NSAttributedString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(id)storedAccessibilityFrame;
-(id)storedAccessibilityTraits;
-(id)storedIsAccessibilityElement;
-(id)storedAccessibilityActivationPoint;
-(id)storedShouldGroupAccessibilityChildren;
-(id)storedAccessibilityElementsHidden;
-(id)storedAccessibilityViewIsModal;
-(long long)accessibilityNavigationStyle;
-(BOOL)accessibilityPerformMagicTap;
-(void)setAccessibilityRespondsToUserInteraction:(BOOL)arg1 ;
-(id)accessibilityIdentification;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(id)uiPresentationManager;
-(unsigned)_accessibilityGetContextID;
-(void)setAccessibilityLanguage:(NSString *)arg1 ;
-(id)storedAccessibilityContainerType;
-(void)setAccessibilityUserInputLabels:(NSArray *)arg1 ;
-(void)setAccessibilityViewIsModal:(BOOL)arg1 ;
-(void)setAccessibilityContainerType:(long long)arg1 ;
-(void)setShouldGroupAccessibilityChildren:(BOOL)arg1 ;
-(void)setAccessibilityCustomActions:(NSArray *)arg1 ;
-(void)_keyboardActivate;
-(void)_accessibilityFinalize;
-(void)setAccessibilityAttributedUserInputLabels:(NSArray *)arg1 ;
-(void)setAccessibilityActivationPoint:(CGPoint)arg1 ;
-(void)setAccessibilityPath:(UIBezierPath *)arg1 ;
-(id)_internalAccessibilityAttributedLabel;
-(id)_internalAccessibilityAttributedValue;
-(id)_internalAccessibilityAttributedHint;
-(id)storedAccessibilityNavigationStyle;
-(id)_internalAccessibilityAttributedUserInputLabels;
-(void)_internalSetAccessibilityAttributedLabel:(id)arg1 ;
-(void)_internalSetAccessibilityAttributedValue:(id)arg1 ;
-(void)_internalSetAccessibilityAttributedHint:(id)arg1 ;
-(void)_internalSetAccessibilityAttributedUserInputLabels:(id)arg1 ;
-(void)setAccessibilityNavigationStyle:(long long)arg1 ;
-(void)setAccessibilityTextualContext:(NSString *)arg1 ;
-(void)setAccessibilityHeaderElements:(NSArray *)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(IOHIDEventRef)_keyboardActivateEventDown:(BOOL)arg1 ;
-(void)setAccessibilityDragSourceDescriptors:(id)arg1 ;
-(id)accessibilityDragSourceDescriptors;
-(void)setAccessibilityDropPointDescriptors:(id)arg1 ;
-(id)accessibilityDropPointDescriptors;
-(void)setAccessibilityCustomRotors:(NSArray *)arg1 ;
-(BOOL)_isGestureType:(long long)arg1 ;
-(void)_setTraitStorageList:(id)arg1 ;
-(void)_applyTraitStorageRecordsForTraitCollection:(id)arg1 ;
-(id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSURLValue:(id)arg1 error:(id*)arg2 ;
-(id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSDataValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)__isKindOfUIView;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2 ;
-(void)prepareForInterfaceBuilder;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(id)_uikit_valueForTraitCollection:(id)arg1 ;
-(BOOL)_uikit_variesByTraitCollections;
-(void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_traitStorageList;
-(UIDescriptionBuilder *)_ui_descriptionBuilder;
-(id)__ivarDescriptionForClass:(Class)arg1 ;
-(id)__propertyDescriptionForClass:(Class)arg1 ;
-(id)__methodDescriptionForClass:(Class)arg1 ;
-(id)_ivarDescription;
-(id)_methodDescription;
-(id)_shortMethodDescription;
-(id)_webkit_invokeOnMainThread;
-(id)_web_description;
-(void)releaseOnMainThread;
-(BOOL)un_safeBoolValue;
-(BOOL)CAMLTypeSupportedForKey:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(BOOL)CA_validateValue:(id)arg1 forKey:(id)arg2 ;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(id)CAMLType;
-(void)CA_prepareRenderValue;
-(unsigned long long)CA_copyNumericValue:(double)arg1 ;
-(id)CA_archivingValueForKey:(id)arg1 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)CA_roundToIntegerFromValue:(id)arg1 ;
-(id)NSRepresentation;
-(id)NSRepresentation;
-(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)RBSIsXPCObject;
-(id)stringValueSafe:(int*)arg1 ;
-(const char*)utf8ValueSafe:(int*)arg1 ;
-(BOOL)boolValueSafe;
-(BOOL)boolValueSafe:(int*)arg1 ;
-(long long)int64ValueSafe;
-(long long)int64ValueSafe:(int*)arg1 ;
-(double)doubleValueSafe;
-(double)doubleValueSafe:(int*)arg1 ;
-(id)stringValueSafe;
-(const char*)utf8ValueSafe;
-(BOOL)supportsBSXPCSecureCoding;
-(BOOL)bs_isPlistableType;
-(id)bs_secureEncoded;
-(id)bs_encoded;
-(id)pep_onMainThread;
-(id)pep_onThread:(id)arg1 ;
-(id)pep_onThread:(id)arg1 immediateForMatchingThread:(BOOL)arg2 ;
-(id)pep_onOperationQueue:(id)arg1 priority:(long long)arg2 ;
-(id)pep_onMainThreadIfNecessary;
-(id)pep_onDetachedThread;
-(id)pep_afterDelay:(double)arg1 ;
-(id)pep_onOperationQueue:(id)arg1 ;
-(id)pep_getInvocation:(id*)arg1 ;
-(Class)classForCoder;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(BOOL)implementsSelector:(SEL)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)_willChangeValuesForKeys:(id)arg1 ;
-(void)_didChangeValuesForKeys:(id)arg1 ;
-(id)addObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)replacementObjectForArchiver:(id)arg1 ;
-(Class)classForArchiver;
-(Class)classForKeyedArchiver;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(BOOL)validateValue:(inout id*)arg1 forKeyPath:(id)arg2 error:(out id*)arg3 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)mutableArrayValueForKeyPath:(id)arg1 ;
-(id)mutableOrderedSetValueForKeyPath:(id)arg1 ;
-(id)mutableSetValueForKeyPath:(id)arg1 ;
-(id)addObserver:(id)arg1 forObservableKeyPath:(id)arg2 ;
-(void)removeObservation:(id)arg1 ;
-(void)receiveObservedValue:(id)arg1 ;
-(void)receiveObservedError:(id)arg1 ;
-(void)finishObserving;
-(BOOL)_isToManyChangeInformation;
-(void)_receiveBox:(id)arg1 ;
-(void)setObservation:(id)arg1 forObservingKeyPath:(id)arg2 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObservation:(id)arg1 forObservableKeyPath:(id)arg2 ;
-(void)_destroyObserverList;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
-(id*)_observerStorage;
-(BOOL)_overrideUseFastBlockObservers;
-(id)addChainedObservers:(id)arg1 ;
-(id)addObserverBlock:(/*^block*/id)arg1 ;
-(id)addObservationTransformer:(/*^block*/id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setNilValueForKey:(id)arg1 ;
-(BOOL)validateValue:(inout id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)mutableArrayValueForKey:(id)arg1 ;
-(id)mutableOrderedSetValueForKey:(id)arg1 ;
-(id)mutableSetValueForKey:(id)arg1 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(void*)observationInfo;
-(BOOL)_isKVOA;
-(void)_changeValueForKey:(id)arg1 key:(id)arg2 key:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_willBeginKeyValueObserving;
-(void)_didEndKeyValueObserving;
-(void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)_removeObserver:(id)arg1 forProperty:(id)arg2 ;
-(void)_changeValueForKeys:(id*)arg1 count:(unsigned long long)arg2 maybeOldValuesDict:(id)arg3 maybeNewValuesDict:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)_implicitObservationInfo;
-(void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2 ;
-(void)_changeValueForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(BOOL)arg2 ;
-(id)autoContentAccessingProxy;
-(Class)classForPortCoder;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4 ;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ;
-(void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3 ;
-(void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4 modes:(id)arg5 ;
-(void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3 modes:(id)arg4 ;
-(void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3 ;
-(void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4 ;
-(void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2 ;
-(BOOL)isNSDate__;
-(BOOL)isNSString__;
-(BOOL)isNSCFConstantString__;
-(BOOL)isNSNumber__;
-(unsigned long long)_cfTypeID;
-(BOOL)isNSArray__;
-(BOOL)isNSDictionary__;
-(BOOL)isNSData__;
-(BOOL)isNSObject__;
-(BOOL)isNSOrderedSet__;
-(BOOL)isNSSet__;
-(BOOL)isNSTimeZone__;
-(BOOL)isNSValue__;
-(NSString *)description;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)_copyDescription;
-(void)__dealloc_zombie;
-(id)__retain_OA;
-(oneway void)__release_OA;
-(id)__autorelease_OA;
-(BOOL)___tryRetain_OA;
-(id)retain;
-(oneway void)release;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(id)self;
-(Class)class;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)autorelease;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copy;
-(Class)superclass;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)performSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(BOOL)isProxy;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(NSZone*)zone;
-(BOOL)isFault;
-(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)mutableCopy;
-(void)finalize;
@end

