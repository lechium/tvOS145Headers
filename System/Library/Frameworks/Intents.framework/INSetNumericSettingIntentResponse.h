/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INSetNumericSettingIntentResponseExport.h>

@class INNumericSettingValue, NSString;

@interface INSetNumericSettingIntentResponse : INIntentResponse <INSetNumericSettingIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INNumericSettingValue * oldValue; 
@property (nonatomic,copy) INNumericSettingValue * updatedValue; 
@property (nonatomic,copy) INNumericSettingValue * minValue; 
@property (nonatomic,copy) INNumericSettingValue * maxValue; 
@property (nonatomic,copy) NSString * errorDetail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)init;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertiesByName;
-(void)setOldValue:(INNumericSettingValue *)arg1 ;
-(INNumericSettingValue *)oldValue;
-(id)_dictionaryRepresentation;
-(void)setMaxValue:(INNumericSettingValue *)arg1 ;
-(INNumericSettingValue *)maxValue;
-(INNumericSettingValue *)minValue;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(long long)_codeWithName:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(INNumericSettingValue *)updatedValue;
-(void)setUpdatedValue:(INNumericSettingValue *)arg1 ;
-(void)setMinValue:(INNumericSettingValue *)arg1 ;
-(NSString *)errorDetail;
-(void)setErrorDetail:(NSString *)arg1 ;
@end

