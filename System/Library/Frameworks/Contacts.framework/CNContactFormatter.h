/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersonNameComponentsFormatter;

@interface CNContactFormatter : NSFormatter <NSSecureCoding> {

	BOOL _ignoresOrganization;
	BOOL _ignoresNickname;
	BOOL _emphasizesPrimaryNameComponent;
	NSPersonNameComponentsFormatter* _nameFormatter;
	long long _style;
	unsigned long long _fallbackStyle;
	long long _sortOrder;

}

@property (assign,nonatomic) BOOL ignoresOrganization;                         //@synthesize ignoresOrganization=_ignoresOrganization - In the implementation block
@property (assign,nonatomic) BOOL ignoresNickname;                             //@synthesize ignoresNickname=_ignoresNickname - In the implementation block
@property (assign,nonatomic) unsigned long long fallbackStyle;                 //@synthesize fallbackStyle=_fallbackStyle - In the implementation block
@property (assign,nonatomic) BOOL emphasizesPrimaryNameComponent;              //@synthesize emphasizesPrimaryNameComponent=_emphasizesPrimaryNameComponent - In the implementation block
@property (assign,nonatomic) long long sortOrder;                              //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) long long style;                                  //@synthesize style=_style - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptorForRequiredKeysForStyle:(long long)arg1 ;
+(id)stringFromContact:(id)arg1 style:(long long)arg2 ;
+(id)attributedStringFromContact:(id)arg1 style:(long long)arg2 defaultAttributes:(id)arg3 ;
+(id)abbreviatedStringFromContact:(id)arg1 trimmingWhitespace:(BOOL)arg2 ;
+(id)descriptorForRequiredKeysForNameOrder;
+(long long)nameOrderForContact:(id)arg1 ;
+(id)descriptorForRequiredKeysForDelimiter;
+(id)delimiterForContact:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setSortOrder:(long long)arg1 ;
-(long long)sortOrder;
-(id)stringFromContact:(id)arg1 ;
-(id)attributedStringFromContact:(id)arg1 defaultAttributes:(id)arg2 ;
-(unsigned long long)fallbackStyle;
-(BOOL)ignoresNickname;
-(void)setIgnoresNickname:(BOOL)arg1 ;
-(BOOL)ignoresOrganization;
-(void)setIgnoresOrganization:(BOOL)arg1 ;
-(id)stringFromContact:(id)arg1 attributes:(id)arg2 ;
-(BOOL)emphasizesPrimaryNameComponent;
-(void)setFallbackStyle:(unsigned long long)arg1 ;
-(id)descriptorForRequiredKeys;
-(void)setEmphasizesPrimaryNameComponent:(BOOL)arg1 ;
@end

