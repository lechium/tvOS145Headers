/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface UIKeyboardPreferencesController : NSObject

@property (nonatomic,readonly) UIKeyboardPreferencesController*<TIPreferencesControllerActions> preferencesActions; 
@property (assign) long long handBias; 
@property (assign) BOOL enableProKeyboard; 
+(id)sharedPreferencesController;
+(id)valueForPreferenceKey:(id)arg1 domain:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(int)arg2 ;
-(BOOL)boolForKey:(int)arg1 ;
-(id)valueForKey:(int)arg1 ;
-(BOOL)isPasswordAutoFillAllowed;
-(void)saveInputModes:(id)arg1 ;
-(void)_configurePreferences;
-(id)valueForPreferenceKey:(id)arg1 ;
-(BOOL)boolForPreferenceKey:(id)arg1 ;
-(void)setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)synchronizePreferences;
-(void)touchSynchronizePreferencesTimer;
-(BOOL)isPreferenceKeyLockedDown:(id)arg1 ;
-(BOOL)allEnabledInputModesAreValid;
-(long long)handBias;
-(UIKeyboardPreferencesController*<TIPreferencesControllerActions>)preferencesActions;
-(void)preferencesControllerChanged:(id)arg1 ;
-(double)rivenSizeFactor:(double)arg1 ;
-(void)setEnabledDictationLanguages:(id)arg1 ;
-(void)setLanguageAwareInputModeLastUsed:(id)arg1 ;
-(void)setLastUsedDictationLanguages:(id)arg1 ;
-(BOOL)enableProKeyboard;
-(BOOL)defaultGlobeAsEmojiKeySetting;
-(BOOL)spaceConfirmationEnabled;
-(void)setEnableProKeyboard:(BOOL)arg1 ;
-(void)setHandBias:(long long)arg1 ;
-(BOOL)isFirstReachableKeyboardInteraction;
-(void)performedFirstReachableKeyboardInteraction;
-(BOOL)useHardwareGlobeKeyAsEmojiKey;
@end

