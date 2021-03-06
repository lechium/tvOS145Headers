/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttributeDialog.h>

@interface INCodableAttributePromptDialog : INCodableAttributeDialog {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)__INCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INTypeCodableDescriptionKey;
-(id)__INCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringIDKey;
-(id)__INCodableDescriptionFormatStringKey;
@end

