/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSFormatter.h>

@interface CNPostalAddressFormatter : NSFormatter {

	long long _style;

}

@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
+(id)stringFromPostalAddress:(id)arg1 style:(long long)arg2 ;
+(id)specificationForCountry:(id)arg1 ;
+(id)specificationWithAddressFormatPlist:(id)arg1 ;
+(id)localizedStringForPostalAddressString:(id)arg1 ;
+(id)postalAddressPropertyKeyForFormatPropertyKey:(id)arg1 ;
+(id)supportedCountries;
+(id)attributedStringFromPostalAddress:(id)arg1 style:(long long)arg2 withDefaultAttributes:(id)arg3 ;
+(id)formatPropertyKeyForPostalAddressPropertyKey:(id)arg1 ;
+(id)singleLineStringFromPostalAddress:(id)arg1 addCountryName:(BOOL)arg2 ;
+(id)localizedCountryNameForISOCountryCode:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)stringFromPostalAddress:(id)arg1 ;
-(id)attributedStringFromPostalAddress:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)attributedStringFromPostalAddress:(id)arg1 name:(id)arg2 organization:(id)arg3 attributes:(id)arg4 ;
-(id)postalAddressFromString:(id)arg1 ;
@end

