/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBRowCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBRichText, NSData;


@protocol _SFPBRowCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,retain) _SFPBImage * image; 
@property (assign,nonatomic) BOOL imageIsRightAligned; 
@property (nonatomic,retain) _SFPBRichText * leadingText; 
@property (nonatomic,retain) _SFPBRichText * trailingText; 
@property (nonatomic,retain) _SFPBImage * attributionImage; 
@property (nonatomic,copy) NSString * key; 
@property (assign,nonatomic) BOOL keyNoWrap; 
@property (assign,nonatomic) int keyWeight; 
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) BOOL valueNoWrap; 
@property (assign,nonatomic) int valueWeight; 
@property (assign,nonatomic) BOOL cardPaddingBottom; 
@property (nonatomic,retain) _SFPBRichText * leadingSubtitle; 
@property (nonatomic,retain) _SFPBRichText * trailingSubtitle; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1;
-(NSString *)value;
-(void)setValue:(id)arg1;
-(NSString *)key;
-(void)setKey:(id)arg1;
-(_SFPBRichText *)leadingText;
-(_SFPBRichText *)trailingText;
-(_SFPBImage *)image;
-(void)setImage:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSArray *)punchoutOptions;
-(_SFPBImage *)attributionImage;
-(void)setAttributionImage:(id)arg1;
-(NSData *)jsonData;
-(BOOL)imageIsRightAligned;
-(void)setImageIsRightAligned:(BOOL)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(id)arg1;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(void)setLeadingText:(id)arg1;
-(void)setTrailingText:(id)arg1;
-(BOOL)keyNoWrap;
-(void)setKeyNoWrap:(BOOL)arg1;
-(int)keyWeight;
-(void)setKeyWeight:(int)arg1;
-(BOOL)valueNoWrap;
-(void)setValueNoWrap:(BOOL)arg1;
-(int)valueWeight;
-(void)setValueWeight:(int)arg1;
-(BOOL)cardPaddingBottom;
-(void)setCardPaddingBottom:(BOOL)arg1;
-(_SFPBRichText *)leadingSubtitle;
-(void)setLeadingSubtitle:(id)arg1;
-(_SFPBRichText *)trailingSubtitle;
-(void)setTrailingSubtitle:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBRichText, NSData;

@interface _SFPBRowCardSection : PBCodable <_SFPBRowCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _imageIsRightAligned;
	BOOL _keyNoWrap;
	BOOL _valueNoWrap;
	BOOL _cardPaddingBottom;
	int _separatorStyle;
	int _keyWeight;
	int _valueWeight;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBImage* _image;
	_SFPBRichText* _leadingText;
	_SFPBRichText* _trailingText;
	_SFPBImage* _attributionImage;
	NSString* _key;
	NSString* _value;
	_SFPBRichText* _leadingSubtitle;
	_SFPBRichText* _trailingSubtitle;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                         //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                    //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;              //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                              //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                           //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) _SFPBImage * image;                              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL imageIsRightAligned;                        //@synthesize imageIsRightAligned=_imageIsRightAligned - In the implementation block
@property (nonatomic,retain) _SFPBRichText * leadingText;                     //@synthesize leadingText=_leadingText - In the implementation block
@property (nonatomic,retain) _SFPBRichText * trailingText;                    //@synthesize trailingText=_trailingText - In the implementation block
@property (nonatomic,retain) _SFPBImage * attributionImage;                   //@synthesize attributionImage=_attributionImage - In the implementation block
@property (nonatomic,copy) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL keyNoWrap;                                  //@synthesize keyNoWrap=_keyNoWrap - In the implementation block
@property (assign,nonatomic) int keyWeight;                                   //@synthesize keyWeight=_keyWeight - In the implementation block
@property (nonatomic,copy) NSString * value;                                  //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL valueNoWrap;                                //@synthesize valueNoWrap=_valueNoWrap - In the implementation block
@property (assign,nonatomic) int valueWeight;                                 //@synthesize valueWeight=_valueWeight - In the implementation block
@property (assign,nonatomic) BOOL cardPaddingBottom;                          //@synthesize cardPaddingBottom=_cardPaddingBottom - In the implementation block
@property (nonatomic,retain) _SFPBRichText * leadingSubtitle;                 //@synthesize leadingSubtitle=_leadingSubtitle - In the implementation block
@property (nonatomic,retain) _SFPBRichText * trailingSubtitle;                //@synthesize trailingSubtitle=_trailingSubtitle - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(_SFPBRichText *)leadingText;
-(_SFPBRichText *)trailingText;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_SFPBImage *)image;
-(void)setImage:(_SFPBImage *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSArray *)punchoutOptions;
-(_SFPBImage *)attributionImage;
-(void)setAttributionImage:(_SFPBImage *)arg1 ;
-(NSData *)jsonData;
-(BOOL)imageIsRightAligned;
-(void)setImageIsRightAligned:(BOOL)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setLeadingText:(_SFPBRichText *)arg1 ;
-(void)setTrailingText:(_SFPBRichText *)arg1 ;
-(BOOL)keyNoWrap;
-(void)setKeyNoWrap:(BOOL)arg1 ;
-(int)keyWeight;
-(void)setKeyWeight:(int)arg1 ;
-(BOOL)valueNoWrap;
-(void)setValueNoWrap:(BOOL)arg1 ;
-(int)valueWeight;
-(void)setValueWeight:(int)arg1 ;
-(BOOL)cardPaddingBottom;
-(void)setCardPaddingBottom:(BOOL)arg1 ;
-(_SFPBRichText *)leadingSubtitle;
-(void)setLeadingSubtitle:(_SFPBRichText *)arg1 ;
-(_SFPBRichText *)trailingSubtitle;
-(void)setTrailingSubtitle:(_SFPBRichText *)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
@end

