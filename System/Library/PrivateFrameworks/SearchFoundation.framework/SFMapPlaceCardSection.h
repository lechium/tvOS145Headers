/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFMapPlaceCardSection.h>
@class NSArray, NSString, SFColor, NSData, NSDictionary;


@protocol SFMapPlaceCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSData * mapsData; 
@property (assign,nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(NSData *)mapsData;
-(NSArray *)punchoutOptions;
-(BOOL)shouldSearchDirectionsAlongCurrentRoute;
-(void)setMapsData:(id)arg1;
-(NSData *)jsonData;
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
-(void)setShouldSearchDirectionsAlongCurrentRoute:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, NSData, NSDictionary, SFCard, SFUserReportRequest, SFCommand;

@interface SFMapPlaceCardSection : SFCardSection <SFMapPlaceCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF5 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _shouldSearchDirectionsAlongCurrentRoute;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSData* _mapsData;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                   //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                              //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                        //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                          //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                        //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                     //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                        //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSData * mapsData;                                           //@synthesize mapsData=_mapsData - In the implementation block
@property (assign,nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute;              //@synthesize shouldSearchDirectionsAlongCurrentRoute=_shouldSearchDirectionsAlongCurrentRoute - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (nonatomic,retain) SFCommand * command; 
@property (nonatomic,retain) SFCommand * previewCommand; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(NSData *)mapsData;
-(NSArray *)punchoutOptions;
-(BOOL)shouldSearchDirectionsAlongCurrentRoute;
-(void)setMapsData:(NSData *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
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
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(void)setShouldSearchDirectionsAlongCurrentRoute:(BOOL)arg1 ;
-(BOOL)hasShouldSearchDirectionsAlongCurrentRoute;
@end

