/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (copy,readonly) NSString * string; 
+(id)_documentTypeForFileType:(id)arg1 ;
+(BOOL)_isAttributedStringAgent;
+(id)allowedSecureCodingClasses;
+(id)attributedStringWithAttachment:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)_setAttributedDictionaryClass:(Class)arg1 ;
+(id)attributedStringFromMarkupString:(id)arg1 ;
+(id)_localizedAttributedStringWithFormat:(id)arg1 ;
+(id)_localizedAttributedStringWithFormat:(id)arg1 options:(unsigned long long)arg2 ;
+(id)_attributedStringWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 arguments:(char*)arg4 ;
+(id)_attributedStringAttributesFromKnownAttributeKeys:(id)arg1 ;
-(long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:(long long)arg1 ;
-(long long)_ui_resolvedTextAlignment;
-(long long)_ui_resolvedWritingDirection;
-(long long)_ui_resolvedWritingDirectionForUserInterfaceLayoutDirection:(long long)arg1 ;
-(id)_ui_attributedStringWithOriginalFontAttributes;
-(id)_ui_glyphImageViewsScale:(double)arg1 outImageRect:(CGRect*)arg2 outLineRect:(CGRect*)arg3 outBaselineOffset:(double*)arg4 ;
-(id)_ui_rtfdFileWrapperError:(id*)arg1 ;
-(id)_ui_rtfDataError:(id*)arg1 ;
-(id)_ui_attributedStringAdjustedToTraitCollection:(id)arg1 ;
-(id)_ui_synthesizeAttributedSubstringFromRange:(NSRange)arg1 usingDefaultAttributes:(id)arg2 ;
-(id)_ui_fontsInRange:(NSRange)arg1 usingDefaultFont:(id)arg2 ;
-(CGSize)size;
-(id)dataFromRange:(NSRange)arg1 documentAttributes:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(BOOL)containsAttachments;
-(id)RTFDFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(id)RTFFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(id)initWithRTFD:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithRTF:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)_documentFromRange:(NSRange)arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id*)arg4 ;
-(NSRange)rangeOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSRange)rangeOfTextBlock:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 completeRow:(BOOL*)arg3 ;
-(NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(BOOL)arg2 ;
-(void)drawInRect:(CGRect)arg1 ;
-(BOOL)_isStringDrawingTextStorage;
-(unsigned long long)_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(NSRange)arg2 usesAlternativeBreaker:(BOOL)arg3 lineBreakStrategy:(unsigned long long)arg4 ;
-(unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(NSRange)arg2 ;
-(NSRange)doubleClickAtIndex:(unsigned long long)arg1 inRange:(NSRange)arg2 ;
-(BOOL)containsAttachmentsInRange:(NSRange)arg1 ;
-(id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(NSRange)arg1 ;
-(id)fileWrapperFromRange:(NSRange)arg1 documentAttributes:(id)arg2 error:(id*)arg3 ;
-(id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id*)arg3 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 ;
-(id)defaultLanguage;
-(NSRange)doubleClickAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(NSRange)arg2 ;
-(id)RTFDFileWrapperFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(id)docFormatFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(id)_htmlDocumentFragmentString:(NSRange)arg1 documentAttributes:(id)arg2 subresources:(id*)arg3 ;
-(id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithDocFormat:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 ;
-(id)initWithURL:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithPath:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithHTML:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id*)arg3 ;
-(id)fontAttributesInRange:(NSRange)arg1 ;
-(id)rulerAttributesInRange:(NSRange)arg1 ;
-(BOOL)_atStartOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)_atEndOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSRange)rangeOfTextList:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)itemNumberInTextList:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(CGRect)boundingRectWithSize:(CGSize)arg1 options:(long long)arg2 context:(id)arg3 ;
-(void)drawAtPoint:(CGPoint)arg1 ;
-(BOOL)hasColorGlyphsInRange:(NSRange)arg1 ;
-(void)_ui_scaleAttributes:(id)arg1 withFont:(id)arg2 byScaleFactor:(double)arg3 ;
-(id)_ui_attributedSubstringFromRange:(NSRange)arg1 scaledByScaleFactor:(double)arg2 ;
-(void)drawWithRect:(CGRect)arg1 options:(long long)arg2 context:(id)arg3 ;
-(id)_ui_attributedSubstringFromRange:(NSRange)arg1 withTrackingAdjustment:(double)arg2 ;
-(void)drawWithRect:(CGRect)arg1 options:(long long)arg2 ;
-(CGRect)boundingRectWithSize:(CGSize)arg1 options:(long long)arg2 ;
-(id)_UIKBStringWideAttributeValueForKey:(id)arg1 ;
-(id)cs_rangesMatchingPredicate:(id)arg1 ;
-(void)cs_writeToFileHandle:(_sFILE*)arg1 ;
-(void)cs_writeToFileHandle:(_sFILE*)arg1 supportingANSIEscapeCodes:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)length;
-(NSString *)string;
-(id)_createAttributedSubstringWithRange:(NSRange)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 replacingCharactersInRanges:(const NSRange*)arg2 numberOfRanges:(long long)arg3 withString:(id)arg4 ;
-(id)attributedStringByWeaklyAddingAttributes:(id)arg1 ;
-(void)enumerateAttributesInRange:(NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_firstValueOfAttributeWithKey:(id)arg1 inRange:(NSRange)arg2 ;
-(id)_inflectedAttributedStringWithReplacements:(id)arg1 ;
-(id)_inflectionLanguageForRange:(NSRange)arg1 ;
-(id)_initWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 arguments:(char*)arg4 ;
-(id)_initWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 ;
@end

